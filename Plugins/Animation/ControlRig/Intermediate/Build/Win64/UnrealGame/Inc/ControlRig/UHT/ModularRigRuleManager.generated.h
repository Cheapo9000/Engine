// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularRigRuleManager.h"

#ifdef CONTROLRIG_ModularRigRuleManager_generated_h
#error "ModularRigRuleManager.generated.h already included, missing '#pragma once' in ModularRigRuleManager.h"
#endif
#define CONTROLRIG_ModularRigRuleManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModularRigRuleManager ***************************************************
struct Z_Construct_UClass_UModularRigRuleManager_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRigRuleManager_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularRigRuleManager(); \
	friend struct ::Z_Construct_UClass_UModularRigRuleManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UModularRigRuleManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UModularRigRuleManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UModularRigRuleManager_NoRegister) \
	DECLARE_SERIALIZER(UModularRigRuleManager)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UModularRigRuleManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularRigRuleManager(UModularRigRuleManager&&) = delete; \
	UModularRigRuleManager(const UModularRigRuleManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UModularRigRuleManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularRigRuleManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularRigRuleManager) \
	CONTROLRIG_API virtual ~UModularRigRuleManager();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_11_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularRigRuleManager;

// ********** End Class UModularRigRuleManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRigRuleManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
