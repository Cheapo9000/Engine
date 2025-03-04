﻿// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "GraphEditor.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraphSchema.h"
#include "Layout/Visibility.h"
#include "SGraphActionMenu.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/SWidget.h"

class URigVMSchema;
class SEditableTextBox;
class SGraphActionMenu;
class UEdGraph;
class IRigVMClientHost;
class URigVMController;
class URigVMHost;

namespace UE::AnimNext::Editor
{

class SActionMenu : public SBorder
{
public:
	/** Delegate for the OnCloseReason event which is always raised when the SActionMenu closes */
	DECLARE_DELEGATE_ThreeParams(FClosedReason, bool /*bActionExecuted*/, bool /*bContextSensitiveChecked*/, bool /*bGraphPinContext*/);

	SLATE_BEGIN_ARGS(SActionMenu)
		: _NewNodePosition(FVector2D::ZeroVector)
		, _AutoExpandActionMenu(false)
	{}
	
	SLATE_ARGUMENT(FVector2D, NewNodePosition)
	SLATE_ARGUMENT(TArray<UEdGraphPin*>, DraggedFromPins)
	SLATE_ARGUMENT(SGraphEditor::FActionMenuClosed, OnClosedCallback)
	SLATE_ARGUMENT(bool, AutoExpandActionMenu)
	SLATE_EVENT(FClosedReason, OnCloseReason)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, UEdGraph* InGraph);

	~SActionMenu();

	TSharedRef<SEditableTextBox> GetFilterTextBox();

protected:
	void OnActionSelected(const TArray<TSharedPtr<FEdGraphSchemaAction>>& SelectedAction, ESelectInfo::Type InSelectionType);

	TSharedRef<SWidget> OnCreateWidgetForAction(struct FCreateWidgetForActionData* const InCreateData);

	/** Callback used to populate all actions list in SGraphActionMenu */
	void CollectAllActions(FGraphActionListBuilderBase& OutAllActions);

	void CollectAllAnimNextGraphActions(FGraphContextMenuBuilder& MenuBuilder) const;
	
private:
	UEdGraph* Graph = nullptr;
	const URigVMSchema* RigVMSchema = nullptr;
	URigVMHost* RigVMHost = nullptr;
	IRigVMClientHost* RigVMClientHost = nullptr;
	URigVMController* RigVMController = nullptr;
	bool bAutoExpandActionMenu = false;
	bool bActionExecuted = false;

	TArray<UEdGraphPin*> DraggedFromPins;
	FVector2D NewNodePosition = FVector2D::ZeroVector;

	SGraphEditor::FActionMenuClosed OnClosedCallback;
	FClosedReason OnCloseReasonCallback;

	TSharedPtr<SGraphActionMenu> GraphActionMenu;
};

}
