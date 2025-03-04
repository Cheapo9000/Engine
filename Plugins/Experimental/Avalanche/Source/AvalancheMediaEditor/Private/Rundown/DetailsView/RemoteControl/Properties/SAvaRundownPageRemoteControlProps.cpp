// Copyright Epic Games, Inc. All Rights Reserved.

#include "SAvaRundownPageRemoteControlProps.h"
#include "AvaRundownRCPropertyItem.h"
#include "Playable/AvaPlayableRemoteControl.h"
#include "Playable/AvaPlayableRemoteControlValues.h"
#include "RemoteControlEntity.h"
#include "RemoteControlPreset.h"
#include "Rundown/AvaRundownEditor.h"
#include "Rundown/AvaRundownEditorUtils.h"
#include "Rundown/AvaRundownManagedInstanceCache.h"
#include "Rundown/AvaRundownPage.h"
#include "Rundown/DetailsView/RemoteControl/Properties/AvaRundownPagePropertyContextMenu.h"
#include "SAvaRundownRCPropertyItemRow.h"
#include "SlateOptMacros.h"
#include "UObject/NameTypes.h"
#include "Widgets/Views/ITableRow.h"
#include "Widgets/Views/SListView.h"
#include "Widgets/Views/STableViewBase.h"

#define LOCTEXT_NAMESPACE "SAvaRundownPageRemoteControlProps"

const FName SAvaRundownPageRemoteControlProps::PropertyColumnName = TEXT("PropertyColumn");
const FName SAvaRundownPageRemoteControlProps::ValueColumnName = TEXT("ValueColumn");

FAvaRundownRCPropertyHeaderRowExtensionDelegate SAvaRundownPageRemoteControlProps::HeaderRowExtensionDelegate;
TMap<FName, TArray<FAvaRundownRCPropertyTableRowExtensionDelegate>> SAvaRundownPageRemoteControlProps::TableRowExtensionDelegates;

TArray<FAvaRundownRCPropertyTableRowExtensionDelegate>& SAvaRundownPageRemoteControlProps::GetTableRowExtensionDelegates(FName InExtensionName)
{
	return TableRowExtensionDelegates.FindOrAdd(InExtensionName);
}

class FAvaRundownPageRCPropsNotifyHookImpl : public FAvaRundownPageRCPropsNotifyHook
{
public:
	FAvaRundownPageRCPropsNotifyHookImpl(const TWeakPtr<SAvaRundownPageRemoteControlProps>& InPanelWeak)
		: PanelWeak(InPanelWeak)
	{
	}

	virtual ~FAvaRundownPageRCPropsNotifyHookImpl() override = default;
	
	//~ Begin FNotifyHook
	virtual void NotifyPostChange(const FPropertyChangedEvent& InPropertyChangedEvent, FProperty* InPropertyThatChanged) override
	{
		if (const TSharedPtr<SAvaRundownPageRemoteControlProps> Panel = PanelWeak.Pin())
		{
			const TSharedPtr<FAvaRundownEditor> RundownEditor = Panel->RundownEditorWeak.Pin();
			
			// Only capture a modification when scrubbing starts.
			if (!OngoingPropertyChanges.Contains(InPropertyThatChanged) && RundownEditor)
			{
				OngoingPropertyChanges.Add(InPropertyThatChanged);
				RundownEditor->BeginModify();
			}
		
			// Apply change to page immediately to capture it in the transaction.
			Panel->OnPostPropertyChanged(InPropertyThatChanged);

			if (InPropertyChangedEvent.ChangeType & EPropertyChangeType::ValueSet)
			{
				OngoingPropertyChanges.Remove(InPropertyThatChanged);
			}
		}
	}
	//~ End FNotifyHook

	TWeakPtr<SAvaRundownPageRemoteControlProps> PanelWeak;
	TSet<FProperty*> OngoingPropertyChanges;
};

void SAvaRundownPageRemoteControlProps::Construct(const FArguments& InArgs, TSharedPtr<FAvaRundownEditor> InRundownEditor)
{
	RundownEditorWeak = InRundownEditor;
	ActivePageId = FAvaRundownPage::InvalidPageId;

	CommandList = MakeShared<FUICommandList>();
	NotifyHook = MakeShared<FAvaRundownPageRCPropsNotifyHookImpl>(SharedThis<SAvaRundownPageRemoteControlProps>(this).ToWeakPtr());

	ContextMenu = MakeShared<FAvaRundownPagePropertyContextMenu>(CommandList);

	TSharedRef<SHeaderRow> HeaderRow =
		SNew(SHeaderRow)
		+ SHeaderRow::Column(PropertyColumnName)
		.DefaultLabel(LOCTEXT("Property", "Property"))
		.FixedWidth(150.f)
		+ SHeaderRow::Column(ValueColumnName)
		.DefaultLabel(LOCTEXT("Value", "Value"))
		.FillWidth(1.f);

	HeaderRowExtensionDelegate.Broadcast(SharedThis(this), HeaderRow);

	ChildSlot
	[
		SNew(SBorder)
		.Padding(8.0f)
		.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
		[
			SAssignNew(PropertyContainer, SListView<FAvaRundownRCPropertyItemPtr>)
			.ListItemsSource(&PropertyItems)
			.SelectionMode(ESelectionMode::Multi)
			.OnContextMenuOpening(this, &SAvaRundownPageRemoteControlProps::GetContextMenuContent)
			.OnGenerateRow(this, &SAvaRundownPageRemoteControlProps::OnGenerateControllerRow)
			.HeaderRow(HeaderRow)
		]
	];

	Refresh({});
}

SAvaRundownPageRemoteControlProps::~SAvaRundownPageRemoteControlProps()
{
}

void SAvaRundownPageRemoteControlProps::UpdateDefaultValuesAndRefresh(const TArray<int32>& InSelectedPageIds)
{
	if (const TSharedPtr<FAvaRundownEditor> RundownEditor = RundownEditorWeak.Pin())
	{
		if (UAvaRundown* Rundown = RundownEditor->GetRundown())
		{
			using namespace UE::AvaRundownEditor::Utils;
			if (UpdateDefaultRemoteControlValues(Rundown, InSelectedPageIds) != EAvaPlayableRemoteControlChanges::None)
			{
				RundownEditor->MarkAsModified();
			}
		}
	}

	Refresh(InSelectedPageIds);
}

TSharedRef<ITableRow> SAvaRundownPageRemoteControlProps::OnGenerateControllerRow(FAvaRundownRCPropertyItemPtr InItem, const TSharedRef<STableViewBase>& InOwnerTable)
{
	return InItem->CreateWidget(SharedThis(this), InOwnerTable);
}

void SAvaRundownPageRemoteControlProps::RefreshTable(const TSet<FGuid>& InEntityIds)
{
	for (const FAvaRundownRCPropertyItemPtr& PropertyItem : PropertyItems)
	{
		const TSharedPtr<FRemoteControlEntity> Entity = PropertyItem->GetEntity();
		if (Entity && (InEntityIds.IsEmpty() || InEntityIds.Contains(Entity->GetId())))
		{
			TSharedPtr<ITableRow> TableRow = PropertyContainer->WidgetFromItem(PropertyItem);

			if (TableRow.IsValid())
			{
				const TSharedRef<SAvaRundownRCPropertyItemRow> ItemRow = StaticCastSharedRef<SAvaRundownRCPropertyItemRow>(TableRow.ToSharedRef());
				ItemRow->UpdateValue();
			}
		}
	}
}

void SAvaRundownPageRemoteControlProps::Refresh(const TArray<int32>& InSelectedPageIds)
{
	if (!PropertyContainer.IsValid())
	{
		return;
	}

	ActivePageId = InSelectedPageIds.IsEmpty() ? FAvaRundownPage::InvalidPageId : InSelectedPageIds[0];
	
	if (const TSharedPtr<FAvaRundownEditor> RundownEditor = RundownEditorWeak.Pin())
	{
		const UAvaRundown* Rundown = RundownEditor->GetRundown();

		if (IsValid(Rundown))
		{
			ManagedInstances.Reset();

			if (FAvaRundownPage* ActivePage = GetActivePage())
			{
				using namespace UE::AvaRundownEditor::Utils;
				ManagedInstances = GetManagedInstancesForPage(Rundown, *ActivePage);

				for (const TSharedPtr<FAvaRundownManagedInstance>& ManagedInstance : ManagedInstances)
				{
					BindRemoteControlDelegates(ManagedInstance ? ManagedInstance->GetRemoteControlPreset() : nullptr);	
				}

				if (!ManagedInstances.IsEmpty())
				{
					FAvaPlayableRemoteControlValues MergedDefaultRCValues;
					MergeDefaultRemoteControlValues(ManagedInstances, MergedDefaultRCValues);
					
					// Prune any extra stale values. This happens if templates are changed.
					if (ActivePage->PruneRemoteControlValues(MergedDefaultRCValues) != EAvaPlayableRemoteControlChanges::None)
					{
						UE_LOG(LogAvaPlayableRemoteControl, Log, TEXT("Page %d had stale values that where pruned."), ActivePage->GetPageId());
						RundownEditor->MarkAsModified();
					}
				}
			}
		}

		struct FAvaPropertyDetails
		{
			TSharedRef<FRemoteControlEntity> Entity;
			bool bEntityControlled;
		};

		TArray<FAvaPropertyDetails> NewItems;
		int32 TotalNumExposedEntities = 0;

		for (const TSharedPtr<FAvaRundownManagedInstance>& ManagedInstance : ManagedInstances)
		{
			URemoteControlPreset* RemoteControlPreset = ManagedInstance ? ManagedInstance->GetRemoteControlPreset() : nullptr;
			if (!RemoteControlPreset)
			{
				continue;
			}
			
			const TArray<TWeakPtr<FRemoteControlEntity>> ExposedEntities = RemoteControlPreset->GetExposedEntities<FRemoteControlEntity>();
			NewItems.Reserve(TotalNumExposedEntities += ExposedEntities.Num());
			
			for (const TWeakPtr<FRemoteControlEntity>& EntityWeakPtr : ExposedEntities)
			{
				if (const TSharedPtr<FRemoteControlEntity> Entity = EntityWeakPtr.Pin())
				{
					const FAvaPlayableRemoteControlValue* EntityValue = GetSelectedPageEntityValue(Entity);

					if (!EntityValue)
					{
						// If the page doesn't already have a value, we get it from the template's default values.
						const FAvaPlayableRemoteControlValue* const DefaultEntityValue = ManagedInstance->GetDefaultRemoteControlValues().GetEntityValue(Entity->GetId()); 
						
						if (!DefaultEntityValue)
						{
							UE_LOG(LogAvaPlayableRemoteControl, Error, TEXT("Entity \"%s\" (id:%s) doesn't have a template default value."),
								*Entity->GetLabel().ToString(), *Entity->GetId().ToString());
							// TODO: UX improvement: instead of skipping, could add empty element, with error mark (and error message in tooltip).
							continue;
						}

						// Ensure the default values have the default flag.
						ensure(DefaultEntityValue->bIsDefault == true);
						
						// WYSIWYG (Solution):
						// Capture the default value (flagged as default) in the current page to ensure all values will be applied to runtime RCP.
						if (!SetSelectedPageEntityValue(Entity, *DefaultEntityValue))
						{
							UE_LOG(LogAvaPlayableRemoteControl, Error, TEXT("Entity \"%s\" (id:%s): failed to set value in currently selected page."),
								*Entity->GetLabel().ToString(), *Entity->GetId().ToString());
						}

						EntityValue = DefaultEntityValue;
					}
					
					// Update Exposed entity value with value from page.
					using namespace UE::AvaPlayableRemoteControl;
					if (const EAvaPlayableRemoteControlResult Result = SetValueOfEntity(Entity, EntityValue->Value); Failed(Result))
					{
						UE_LOG(LogAvaPlayableRemoteControl, Error, TEXT("Entity \"%s\" (id:%s): failed to set entity value: %s."),
							*Entity->GetLabel().ToString(), *Entity->GetId().ToString(), *EnumToString(Result));
						// TODO: UX improvement: instead of skipping, could add empty element, with error mark (and error message in tooltip).
						continue;
					}

					{
						const bool bEntityControlled = ManagedInstance->GetDefaultRemoteControlValues().EntitiesControlledByController.Contains(Entity->GetId());
						NewItems.Add({Entity.ToSharedRef(), bEntityControlled});
					}
				}
			}
		}

		PropertyContainer->RebuildList();

		bool bRecreateList = NewItems.Num() != PropertyItems.Num();

		if (!bRecreateList)
		{
			for (int32 PropertyIdx = 0; PropertyIdx < NewItems.Num(); ++PropertyIdx)
			{
				const FAvaRundownRCPropertyItemPtr& PropertyItem = PropertyItems[PropertyIdx];
				const FAvaPropertyDetails& NewItem = NewItems[PropertyIdx];

				if (!PropertyItem.IsValid())
				{
					bRecreateList = true;
					break;
				}

				TSharedPtr<FRemoteControlEntity> PropertyEntity = PropertyItem->GetEntity();

				if (!PropertyEntity.IsValid())
				{
					bRecreateList = true;
					break;
				}

				if (PropertyEntity.Get() != NewItem.Entity.ToSharedPtr().Get())
				{
					bRecreateList = true;
					break;
				}
			}
		}

		if (!bRecreateList)
		{
			RefreshTable();
			return;
		}

		PropertyItems.Empty();

		for (const FAvaPropertyDetails& NewItem : NewItems)
		{
			PropertyItems.Add(MakeShared<FAvaRundownRCPropertyItem>(NewItem.Entity, NewItem.bEntityControlled));
		}
	}
}

// Remarks:
// This is called by URemoteControlPreset::OnEndFrame() as a result of an entity being modified.
// However, it doesn't seem to be called (or not always) if the entity is modified by a controller action. 
void SAvaRundownPageRemoteControlProps::OnRemoteControlExposedPropertiesModified(URemoteControlPreset* InPreset, const TSet<FGuid>& InModifiedProperties)
{
	// Note: Ignore changes from the RCP Transaction listener.
	if (!IsValid(InPreset) || !HasRemoteControlPreset(InPreset) || GIsTransacting)
	{
		return;
	}

	if (const TSharedPtr<FAvaRundownEditor> RundownEditor = RundownEditorWeak.Pin())
	{
		if (SaveRemoteControlEntitiesToPage(InPreset, InModifiedProperties, RundownEditor->GetRundown(), ActivePageId))
		{
			RundownEditor->MarkAsModified();
		}
	}
}

void SAvaRundownPageRemoteControlProps::OnRemoteControlControllerModified(URemoteControlPreset* InPreset, const TSet<FGuid>& InModifiedControllerIds)
{
	// Note: Ignore changes from the RCP Transaction listener.
	if (!IsValid(InPreset) || !HasRemoteControlPreset(InPreset) || GIsTransacting)
	{
		return;
	}

	TSet<FGuid> EntityIds;
	for (const FGuid& ControllerId : InModifiedControllerIds)
	{
		UE::AvaPlayableRemoteControl::GetEntitiesControlledByController(InPreset, InPreset->GetController(ControllerId), EntityIds);
	}

	// If a controller changed, we need to propagate the refresh of the field's widgets.
	// Optimization: only refresh the widgets that are related to the modified controllers.
	RefreshTable(EntityIds);

	// It seems OnPropertyChangedDelegate (OnExposedPropertiesModified()) is not called when properties are
	// changed by controllers. Ensure the values are saved by calling our handler directly.
	OnRemoteControlExposedPropertiesModified(InPreset, EntityIds);
}

void SAvaRundownPageRemoteControlProps::OnPostPropertyChanged(FProperty* InPropertyThatChanged)
{
	// Find which property of which preset this is.
	for (const TSharedPtr<FAvaRundownManagedInstance>& ManagedInstance : ManagedInstances)
	{
		if (URemoteControlPreset* Preset = ManagedInstance ? ManagedInstance->GetRemoteControlPreset() : nullptr)
		{
			for (const TWeakPtr<FRemoteControlProperty>& ExposedPropertyWeak : Preset->GetExposedEntities<FRemoteControlProperty>())
			{
				if (const TSharedPtr<FRemoteControlProperty> ExposedProperty = ExposedPropertyWeak.Pin())
				{
					if (ExposedProperty->GetProperty() == InPropertyThatChanged)
					{
						OnRemoteControlExposedPropertiesModified(Preset, {ExposedProperty->GetId()});
					}
				}
			}
		}
	}
}

void SAvaRundownPageRemoteControlProps::BindRemoteControlDelegates(URemoteControlPreset* InPreset)
{
	if (IsValid(InPreset))
	{
		if (!InPreset->OnEntityExposed().IsBoundToObject(this))
		{
			InPreset->OnEntityExposed().AddSP(this, &SAvaRundownPageRemoteControlProps::OnRemoteControlEntitiesExposed);
		}

		if (!InPreset->OnEntityUnexposed().IsBoundToObject(this))
		{
			InPreset->OnEntityUnexposed().AddSP(this, &SAvaRundownPageRemoteControlProps::OnRemoteControlEntitiesUnexposed);
		}

		if (!InPreset->OnEntitiesUpdated().IsBoundToObject(this))
		{
			InPreset->OnEntitiesUpdated().AddSP(this, &SAvaRundownPageRemoteControlProps::OnRemoteControlEntitiesUpdated);
		}

		if (!InPreset->OnExposedPropertiesModified().IsBoundToObject(this))
		{
			InPreset->OnExposedPropertiesModified().AddSP(this, &SAvaRundownPageRemoteControlProps::OnRemoteControlExposedPropertiesModified);
		}

		if (!InPreset->OnControllerModified().IsBoundToObject(this))
		{
			InPreset->OnControllerModified().AddSP(this, &SAvaRundownPageRemoteControlProps::OnRemoteControlControllerModified);
		}
	}
}

bool SAvaRundownPageRemoteControlProps::HasRemoteControlPreset(const URemoteControlPreset* InPreset) const
{
	for (const TSharedPtr<FAvaRundownManagedInstance>& ManagedInstance : ManagedInstances)
	{
		if (ManagedInstance && ManagedInstance->GetRemoteControlPreset() == InPreset)
		{
			return true;
		}
	}
	return false;
}

FAvaRundownPage* SAvaRundownPageRemoteControlProps::GetActivePage() const
{
	if (ActivePageId == FAvaRundownPage::InvalidPageId)
	{
		return nullptr;
	}

	if (const TSharedPtr<FAvaRundownEditor> RundownEditor = RundownEditorWeak.Pin())
	{
		if (RundownEditor->IsRundownValid())
		{
			FAvaRundownPage& Page = RundownEditor->GetRundown()->GetPage(ActivePageId);
			return Page.IsValidPage() ? &Page : nullptr;
		}
	}

	return nullptr;
}

const FAvaPlayableRemoteControlValue* SAvaRundownPageRemoteControlProps::GetSelectedPageEntityValue(const TSharedPtr<FRemoteControlEntity>& InRemoteControlEntity) const
{
	if (InRemoteControlEntity.IsValid())
	{
		if (const FAvaRundownPage* Page = GetActivePage())
		{
			return Page->GetRemoteControlEntityValue(InRemoteControlEntity->GetId()); 
		}
	}

	return nullptr;
}

bool SAvaRundownPageRemoteControlProps::SetSelectedPageEntityValue(const TSharedPtr<FRemoteControlEntity>& InRemoteControlEntity, const FAvaPlayableRemoteControlValue& InValue) const
{
	if (InRemoteControlEntity.IsValid())
	{
		if (const TSharedPtr<FAvaRundownEditor> RundownEditor = RundownEditorWeak.Pin())
		{
			if (RundownEditor->IsRundownValid())
			{
				// Using the rundown API for event propagation.
				UAvaRundown* Rundown = RundownEditor->GetRundown(); 
				return Rundown->SetRemoteControlEntityValue(ActivePageId, InRemoteControlEntity->GetId(), InValue);
			}
		}
	}

	return false;
}

const TArray<FAvaRundownRCPropertyItemPtr> SAvaRundownPageRemoteControlProps::GetSelectedPropertyItems() const
{
	return PropertyContainer->GetSelectedItems();
}

bool SAvaRundownPageRemoteControlProps::SaveRemoteControlEntitiesToPage(const URemoteControlPreset* InPreset, const TSet<FGuid>& InPropertyIds, UAvaRundown* InRundown, int32 InPageId)
{
	using namespace UE::AvaPlayableRemoteControl;
	
	if (!IsValid(InPreset) || InPageId == FAvaRundownPage::InvalidPageId || !InRundown)
	{
		return false;
	}

	const FAvaRundownPage& Page = InRundown->GetPage(InPageId);

	bool bModified = false;

	for (const FGuid& Id : InPropertyIds)
	{
		if (const TSharedPtr<const FRemoteControlEntity> Entity = InPreset->GetExposedEntity<const FRemoteControlEntity>(Id).Pin())
		{
			FAvaPlayableRemoteControlValue EntityValue;
			
			if (const EAvaPlayableRemoteControlResult Result = GetValueOfEntity(Entity, EntityValue.Value); Failed(Result))
			{
				UE_LOG(LogAvaPlayableRemoteControl, Error, TEXT("Unable to get value of entity \"%s\": %s"),
					*Entity->GetLabel().ToString(), *EnumToString(Result));
				continue;
			}
			
			const FAvaPlayableRemoteControlValue* StoredEntityValue = Page.GetRemoteControlEntityValue(Entity->GetId());

			if (StoredEntityValue && StoredEntityValue->IsSameValueAs(EntityValue))
			{
				continue;	// Skip if value is identical.
			}
			
			if (!InRundown->SetRemoteControlEntityValue(InPageId, Entity->GetId(), EntityValue))
			{
				UE_LOG(LogAvaPlayableRemoteControl, Error, TEXT("Unable to set page entity value for: \"%s\""), *Entity->GetLabel().ToString());
				continue;
			}

			bModified = true;
		}
	}
	return bModified;
}

TSharedPtr<FAvaRundownPageRCPropsNotifyHook> SAvaRundownPageRemoteControlProps::GetNotifyHook() const
{
	return NotifyHook;
}

TSharedPtr<SWidget> SAvaRundownPageRemoteControlProps::GetContextMenuContent()
{
	TArray<FAvaRundownRCPropertyItemPtr> SelectedItems = GetSelectedPropertyItems();
	if (SelectedItems.Num() > 0)
	{
		return ContextMenu->GeneratePageContextMenuWidget(RundownEditorWeak, *GetActivePage(), SharedThis(this));
	}
	return SNullWidget::NullWidget;
}

#undef LOCTEXT_NAMESPACE
