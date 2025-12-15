// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/CrowdManager.h"

#ifdef AIMODULE_CrowdManager_generated_h
#error "CrowdManager.generated.h already included, missing '#pragma once' in CrowdManager.h"
#endif
#define AIMODULE_CrowdManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCrowdAvoidanceConfig *********************************************
struct Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FCrowdAvoidanceConfig;
// ********** End ScriptStruct FCrowdAvoidanceConfig ***********************************************

// ********** Begin ScriptStruct FCrowdAvoidanceSamplingPattern ************************************
struct Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics;
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_120_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


struct FCrowdAvoidanceSamplingPattern;
// ********** End ScriptStruct FCrowdAvoidanceSamplingPattern **************************************

// ********** Begin Class UCrowdManager ************************************************************
struct Z_Construct_UClass_UCrowdManager_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrowdManager(); \
	friend struct ::Z_Construct_UClass_UCrowdManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UCrowdManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrowdManager, UCrowdManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UCrowdManager_NoRegister) \
	DECLARE_SERIALIZER(UCrowdManager) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_175_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrowdManager(UCrowdManager&&) = delete; \
	UCrowdManager(const UCrowdManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UCrowdManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManager) \
	AIMODULE_API virtual ~UCrowdManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_172_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_175_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_175_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrowdManager;

// ********** End Class UCrowdManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
