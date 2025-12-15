// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityTask.h"

#ifdef BLUTILITY_EditorUtilityTask_generated_h
#error "EditorUtilityTask.generated.h already included, missing '#pragma once' in EditorUtilityTask.h"
#endif
#define BLUTILITY_EditorUtilityTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityTask;

// ********** Begin Delegate FOnEditorUtilityTaskDynamicDelegate ***********************************
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_25_DELEGATE \
BLUTILITY_API void FOnEditorUtilityTaskDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEditorUtilityTaskDynamicDelegate, UEditorUtilityTask* Task);


// ********** End Delegate FOnEditorUtilityTaskDynamicDelegate *************************************

// ********** Begin Class UEditorUtilityTask *******************************************************
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWasCancelRequested); \
	DECLARE_FUNCTION(execSetTaskNotificationText); \
	DECLARE_FUNCTION(execFinishExecutingTask); \
	DECLARE_FUNCTION(execRun);


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UEditorUtilityTask_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityTask_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityTask(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityTask_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityTask) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorUtilityTask*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityTask(UEditorUtilityTask&&) = delete; \
	UEditorUtilityTask(const UEditorUtilityTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEditorUtilityTask) \
	BLUTILITY_API virtual ~UEditorUtilityTask();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityTask;

// ********** End Class UEditorUtilityTask *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
