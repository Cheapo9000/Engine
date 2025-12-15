// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EditorActorSubsystem.h"

#ifdef UNREALED_EditorActorSubsystem_generated_h
#error "EditorActorSubsystem.generated.h already included, missing '#pragma once' in EditorActorSubsystem.h"
#endif
#define UNREALED_EditorActorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UClass;
class UObject;
class USceneComponent;
class UWorld;

// ********** Begin Delegate FOnEditNewActorsDropped ***********************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_18_DELEGATE \
UNREALED_API void FOnEditNewActorsDropped_DelegateWrapper(const FMulticastScriptDelegate& OnEditNewActorsDropped, TArray<UObject*> const& DroppedObjects, TArray<AActor*> const& DroppedActors);


// ********** End Delegate FOnEditNewActorsDropped *************************************************

// ********** Begin Delegate FOnEditNewActorsPlaced ************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_20_DELEGATE \
UNREALED_API void FOnEditNewActorsPlaced_DelegateWrapper(const FMulticastScriptDelegate& OnEditNewActorsPlaced, UObject* ObjToUse, TArray<AActor*> const& PlacedActors);


// ********** End Delegate FOnEditNewActorsPlaced **************************************************

// ********** Begin Delegate FOnEditCutActorsBegin *************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_22_DELEGATE \
UNREALED_API void FOnEditCutActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnEditCutActorsBegin);


// ********** End Delegate FOnEditCutActorsBegin ***************************************************

// ********** Begin Delegate FOnEditCutActorsEnd ***************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_24_DELEGATE \
UNREALED_API void FOnEditCutActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnEditCutActorsEnd);


// ********** End Delegate FOnEditCutActorsEnd *****************************************************

// ********** Begin Delegate FOnEditCopyActorsBegin ************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_26_DELEGATE \
UNREALED_API void FOnEditCopyActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnEditCopyActorsBegin);


// ********** End Delegate FOnEditCopyActorsBegin **************************************************

// ********** Begin Delegate FOnEditCopyActorsEnd **************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_28_DELEGATE \
UNREALED_API void FOnEditCopyActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnEditCopyActorsEnd);


// ********** End Delegate FOnEditCopyActorsEnd ****************************************************

// ********** Begin Delegate FOnEditPasteActorsBegin ***********************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_30_DELEGATE \
UNREALED_API void FOnEditPasteActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnEditPasteActorsBegin);


// ********** End Delegate FOnEditPasteActorsBegin *************************************************

// ********** Begin Delegate FOnEditPasteActorsEnd *************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_32_DELEGATE \
UNREALED_API void FOnEditPasteActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnEditPasteActorsEnd);


// ********** End Delegate FOnEditPasteActorsEnd ***************************************************

// ********** Begin Delegate FOnDuplicateActorsBegin ***********************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_34_DELEGATE \
UNREALED_API void FOnDuplicateActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnDuplicateActorsBegin);


// ********** End Delegate FOnDuplicateActorsBegin *************************************************

// ********** Begin Delegate FOnDuplicateActorsEnd *************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_36_DELEGATE \
UNREALED_API void FOnDuplicateActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnDuplicateActorsEnd);


// ********** End Delegate FOnDuplicateActorsEnd ***************************************************

// ********** Begin Delegate FOnDeleteActorsBegin **************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_38_DELEGATE \
UNREALED_API void FOnDeleteActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteActorsBegin);


// ********** End Delegate FOnDeleteActorsBegin ****************************************************

// ********** Begin Delegate FOnDeleteActorsEnd ****************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_40_DELEGATE \
UNREALED_API void FOnDeleteActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteActorsEnd);


// ********** End Delegate FOnDeleteActorsEnd ******************************************************

// ********** Begin Delegate FOnActorLabelChanged **************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_42_DELEGATE \
UNREALED_API void FOnActorLabelChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActorLabelChanged, AActor* Actor);


// ********** End Delegate FOnActorLabelChanged ****************************************************

// ********** Begin Class UEditorActorSubsystem ****************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetComponentTransform); \
	DECLARE_FUNCTION(execSetActorTransform); \
	DECLARE_FUNCTION(execConvertActors); \
	DECLARE_FUNCTION(execDestroyActors); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execSpawnActorFromClass); \
	DECLARE_FUNCTION(execSpawnActorFromObject); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execSetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents); \
	DECLARE_FUNCTION(execGetAllLevelActors); \
	DECLARE_FUNCTION(execSelectAllChildren); \
	DECLARE_FUNCTION(execSelectAll); \
	DECLARE_FUNCTION(execInvertSelection); \
	DECLARE_FUNCTION(execDeleteSelectedActors); \
	DECLARE_FUNCTION(execDuplicateSelectedActors); \
	DECLARE_FUNCTION(execDuplicateActors); \
	DECLARE_FUNCTION(execDuplicateActor);


struct Z_Construct_UClass_UEditorActorSubsystem_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorActorSubsystem_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorActorSubsystem(); \
	friend struct ::Z_Construct_UClass_UEditorActorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorActorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorActorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorActorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEditorActorSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorActorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorActorSubsystem(UEditorActorSubsystem&&) = delete; \
	UEditorActorSubsystem(const UEditorActorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorActorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorActorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorActorSubsystem) \
	UNREALED_API virtual ~UEditorActorSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_48_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorActorSubsystem;

// ********** End Class UEditorActorSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
