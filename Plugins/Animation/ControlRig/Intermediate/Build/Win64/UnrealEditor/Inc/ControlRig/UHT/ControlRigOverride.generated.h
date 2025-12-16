// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigOverride.h"

#ifdef CONTROLRIG_ControlRigOverride_generated_h
#error "ControlRigOverride.generated.h already included, missing '#pragma once' in ControlRigOverride.h"
#endif
#define CONTROLRIG_ControlRigOverride_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FControlRigOverrideValue ******************************************
struct Z_Construct_UScriptStruct_FControlRigOverrideValue_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigOverrideValue_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigOverrideValue;
// ********** End ScriptStruct FControlRigOverrideValue ********************************************

// ********** Begin ScriptStruct FControlRigOverrideContainer **************************************
struct Z_Construct_UScriptStruct_FControlRigOverrideContainer_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigOverrideContainer_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FControlRigOverrideContainer;
// ********** End ScriptStruct FControlRigOverrideContainer ****************************************

// ********** Begin Class UControlRigOverrideAsset *************************************************
struct Z_Construct_UClass_UControlRigOverrideAsset_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigOverrideAsset_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h_407_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigOverrideAsset(); \
	friend struct ::Z_Construct_UClass_UControlRigOverrideAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UControlRigOverrideAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigOverrideAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UControlRigOverrideAsset_NoRegister) \
	DECLARE_SERIALIZER(UControlRigOverrideAsset)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h_407_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UControlRigOverrideAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigOverrideAsset(UControlRigOverrideAsset&&) = delete; \
	UControlRigOverrideAsset(const UControlRigOverrideAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UControlRigOverrideAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigOverrideAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigOverrideAsset) \
	CONTROLRIG_API virtual ~UControlRigOverrideAsset();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h_403_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h_407_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h_407_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h_407_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigOverrideAsset;

// ********** End Class UControlRigOverrideAsset ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigOverride_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
