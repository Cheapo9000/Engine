// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigBlueprintFactory.h"

#ifdef CONTROLRIGEDITOR_ControlRigBlueprintFactory_generated_h
#error "ControlRigBlueprintFactory.generated.h already included, missing '#pragma once' in ControlRigBlueprintFactory.h"
#endif
#define CONTROLRIGEDITOR_ControlRigBlueprintFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRigBlueprint;
class UObject;

// ********** Begin Class UControlRigBlueprintFactory **********************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateControlRigFromSkeletalMeshOrSkeleton); \
	DECLARE_FUNCTION(execCreateNewControlRigAsset);


struct Z_Construct_UClass_UControlRigBlueprintFactory_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigBlueprintFactory_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigBlueprintFactory(); \
	friend struct ::Z_Construct_UClass_UControlRigBlueprintFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UControlRigBlueprintFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UControlRigBlueprintFactory_NoRegister) \
	DECLARE_SERIALIZER(UControlRigBlueprintFactory)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigBlueprintFactory(UControlRigBlueprintFactory&&) = delete; \
	UControlRigBlueprintFactory(const UControlRigBlueprintFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UControlRigBlueprintFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigBlueprintFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigBlueprintFactory) \
	CONTROLRIGEDITOR_API virtual ~UControlRigBlueprintFactory();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h_16_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigBlueprintFactory;

// ********** End Class UControlRigBlueprintFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigBlueprintFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
