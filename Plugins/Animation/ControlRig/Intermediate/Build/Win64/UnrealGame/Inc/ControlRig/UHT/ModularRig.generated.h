// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularRig.h"

#ifdef CONTROLRIG_ModularRig_generated_h
#error "ModularRig.generated.h already included, missing '#pragma once' in ModularRig.h"
#endif
#define CONTROLRIG_ModularRig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;

// ********** Begin ScriptStruct FRigModuleInstance ************************************************
struct Z_Construct_UScriptStruct_FRigModuleInstance_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigModuleInstance_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigModuleInstance;
// ********** End ScriptStruct FRigModuleInstance **************************************************

// ********** Begin ScriptStruct FRigModuleExecutionElement ****************************************
struct Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigModuleExecutionElement_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigModuleExecutionElement;
// ********** End ScriptStruct FRigModuleExecutionElement ******************************************

// ********** Begin ScriptStruct FRigModuleExecutionQueue ******************************************
struct Z_Construct_UScriptStruct_FRigModuleExecutionQueue_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigModuleExecutionQueue_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigModuleExecutionQueue;
// ********** End ScriptStruct FRigModuleExecutionQueue ********************************************

// ********** Begin Class UModularRig **************************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_RPC_WRAPPERS \
	DECLARE_FUNCTION(execExecuteEventOnModuleByNameForBP); \
	DECLARE_FUNCTION(execExecuteEventOnModuleForBP); \
	DECLARE_FUNCTION(execExecuteEventOnAllModules); \
	DECLARE_FUNCTION(execGetEventsForModuleByName); \
	DECLARE_FUNCTION(execGetEventsForModule); \
	DECLARE_FUNCTION(execGetEventsForAllModules); \
	DECLARE_FUNCTION(execGetParentModuleNameForBP); \
	DECLARE_FUNCTION(execGetParentPathForBP); \
	DECLARE_FUNCTION(execGetModuleRigByName); \
	DECLARE_FUNCTION(execGetModuleRig); \
	DECLARE_FUNCTION(execGetModuleNames); \
	DECLARE_FUNCTION(execGetModulePaths);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UModularRig, CONTROLRIG_API)


struct Z_Construct_UClass_UModularRig_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UModularRig_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_INCLASS \
private: \
	static void StaticRegisterNativesUModularRig(); \
	friend struct ::Z_Construct_UClass_UModularRig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UModularRig_NoRegister(); \
public: \
	DECLARE_CLASS2(UModularRig, UControlRig, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UModularRig_NoRegister) \
	DECLARE_SERIALIZER(UModularRig) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UModularRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularRig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UModularRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularRig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularRig(UModularRig&&) = delete; \
	UModularRig(const UModularRig&) = delete; \
	CONTROLRIG_API virtual ~UModularRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_157_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h_160_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularRig;

// ********** End Class UModularRig ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ModularRig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
