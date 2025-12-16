// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/RigVMEdGraphSchema.h"

#ifdef RIGVMDEVELOPER_RigVMEdGraphSchema_generated_h
#error "RigVMEdGraphSchema.generated.h already included, missing '#pragma once' in RigVMEdGraphSchema.h"
#endif
#define RIGVMDEVELOPER_RigVMEdGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMEdGraphSchemaAction_LocalVar ********************************
struct Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_LocalVar_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction_BlueprintVariableBase Super;


struct FRigVMEdGraphSchemaAction_LocalVar;
// ********** End ScriptStruct FRigVMEdGraphSchemaAction_LocalVar **********************************

// ********** Begin ScriptStruct FRigVMEdGraphSchemaAction_PromoteToVariable ***********************
struct Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_158_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToVariable_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FRigVMEdGraphSchemaAction_PromoteToVariable;
// ********** End ScriptStruct FRigVMEdGraphSchemaAction_PromoteToVariable *************************

// ********** Begin ScriptStruct FRigVMEdGraphSchemaAction_PromoteToExposedPin *********************
struct Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_194_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_PromoteToExposedPin_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FRigVMEdGraphSchemaAction_PromoteToExposedPin;
// ********** End ScriptStruct FRigVMEdGraphSchemaAction_PromoteToExposedPin ***********************

// ********** Begin ScriptStruct FRigVMEdGraphSchemaAction_Event ***********************************
struct Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_228_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMEdGraphSchemaAction_Event_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FRigVMEdGraphSchemaAction_Event;
// ********** End ScriptStruct FRigVMEdGraphSchemaAction_Event *************************************

// ********** Begin Class URigVMEdGraphSchema ******************************************************
struct Z_Construct_UClass_URigVMEdGraphSchema_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraphSchema_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMEdGraphSchema(); \
	friend struct ::Z_Construct_UClass_URigVMEdGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMEdGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMEdGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMEdGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(URigVMEdGraphSchema)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_301_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMEdGraphSchema(URigVMEdGraphSchema&&) = delete; \
	URigVMEdGraphSchema(const URigVMEdGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMEdGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEdGraphSchema); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMEdGraphSchema) \
	RIGVMDEVELOPER_API virtual ~URigVMEdGraphSchema();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_298_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_301_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMEdGraphSchema;

// ********** End Class URigVMEdGraphSchema ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
