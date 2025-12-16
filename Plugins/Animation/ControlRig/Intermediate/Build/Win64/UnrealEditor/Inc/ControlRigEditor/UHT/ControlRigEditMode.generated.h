// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditMode/ControlRigEditMode.h"

#ifdef CONTROLRIGEDITOR_ControlRigEditMode_generated_h
#error "ControlRigEditMode.generated.h already included, missing '#pragma once' in ControlRigEditMode.h"
#endif
#define CONTROLRIGEDITOR_ControlRigEditMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControlRigInteractionType : uint8;
struct FControlRigInteractionTransformContext;
struct FMultiControlRigElementSelection;

// ********** Begin Class UControlRigEditModeDelegateHelper ****************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostPoseUpdate); \
	DECLARE_FUNCTION(execOnPoseInitialized);


struct Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEditModeDelegateHelper_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigEditModeDelegateHelper(); \
	friend struct ::Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigEditModeDelegateHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigEditModeDelegateHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigEditModeDelegateHelper_NoRegister) \
	DECLARE_SERIALIZER(UControlRigEditModeDelegateHelper)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigEditModeDelegateHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigEditModeDelegateHelper(UControlRigEditModeDelegateHelper&&) = delete; \
	UControlRigEditModeDelegateHelper(const UControlRigEditModeDelegateHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigEditModeDelegateHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigEditModeDelegateHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigEditModeDelegateHelper) \
	NO_API virtual ~UControlRigEditModeDelegateHelper();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_82_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigEditModeDelegateHelper;

// ********** End Class UControlRigEditModeDelegateHelper ******************************************

// ********** Begin ScriptStruct FMultiControlRigElementSelection **********************************
struct Z_Construct_UScriptStruct_FMultiControlRigElementSelection_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMultiControlRigElementSelection_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FMultiControlRigElementSelection;
// ********** End ScriptStruct FMultiControlRigElementSelection ************************************

// ********** Begin Delegate FControlRigEditModeInteractionStartedEvent ****************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_149_DELEGATE \
CONTROLRIGEDITOR_API void FControlRigEditModeInteractionStartedEvent_DelegateWrapper(const FMulticastScriptDelegate& ControlRigEditModeInteractionStartedEvent, FMultiControlRigElementSelection InteractionKeys, EControlRigInteractionType InteractionType);


// ********** End Delegate FControlRigEditModeInteractionStartedEvent ******************************

// ********** Begin Delegate FControlRigEditModeInteractionEndedEvent ******************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_150_DELEGATE \
CONTROLRIGEDITOR_API void FControlRigEditModeInteractionEndedEvent_DelegateWrapper(const FMulticastScriptDelegate& ControlRigEditModeInteractionEndedEvent, FMultiControlRigElementSelection InteractionKeys);


// ********** End Delegate FControlRigEditModeInteractionEndedEvent ********************************

// ********** Begin Delegate FControlRigEditModeInteractionUpdatedEvent ****************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_151_DELEGATE \
CONTROLRIGEDITOR_API void FControlRigEditModeInteractionUpdatedEvent_DelegateWrapper(const FMulticastScriptDelegate& ControlRigEditModeInteractionUpdatedEvent, FMultiControlRigElementSelection InteractionKeys, FControlRigInteractionTransformContext TransformContext);


// ********** End Delegate FControlRigEditModeInteractionUpdatedEvent ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
