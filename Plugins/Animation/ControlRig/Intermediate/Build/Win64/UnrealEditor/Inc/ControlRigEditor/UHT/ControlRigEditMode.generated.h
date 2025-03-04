// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditMode/ControlRigEditMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIGEDITOR_ControlRigEditMode_generated_h
#error "ControlRigEditMode.generated.h already included, missing '#pragma once' in ControlRigEditMode.h"
#endif
#define CONTROLRIGEDITOR_ControlRigEditMode_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPostPoseUpdate); \
	DECLARE_FUNCTION(execOnPoseInitialized);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigEditModeDelegateHelper(); \
	friend struct Z_Construct_UClass_UControlRigEditModeDelegateHelper_Statics; \
public: \
	DECLARE_CLASS(UControlRigEditModeDelegateHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UControlRigEditModeDelegateHelper)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigEditModeDelegateHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UControlRigEditModeDelegateHelper(UControlRigEditModeDelegateHelper&&); \
	UControlRigEditModeDelegateHelper(const UControlRigEditModeDelegateHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigEditModeDelegateHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigEditModeDelegateHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigEditModeDelegateHelper) \
	NO_API virtual ~UControlRigEditModeDelegateHelper();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_69_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UControlRigEditModeDelegateHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_EditMode_ControlRigEditMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
