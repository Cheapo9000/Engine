// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCompiler/RigVMCompiler.h"

#ifdef RIGVMDEVELOPER_RigVMCompiler_generated_h
#error "RigVMCompiler.generated.h already included, missing '#pragma once' in RigVMCompiler.h"
#endif
#define RIGVMDEVELOPER_RigVMCompiler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVM;
class URigVMController;
class URigVMGraph;
struct FRigVMExtendedExecuteContext;

// ********** Begin ScriptStruct FRigVMCompileSettings *********************************************
struct Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMCompileSettings_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMCompileSettings;
// ********** End ScriptStruct FRigVMCompileSettings ***********************************************

// ********** Begin Class URigVMCompiler ***********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_299_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCompileVM); \
	DECLARE_FUNCTION(execCompile);


struct Z_Construct_UClass_URigVMCompiler_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCompiler_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_299_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMCompiler(); \
	friend struct ::Z_Construct_UClass_URigVMCompiler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMCompiler_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMCompiler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMCompiler_NoRegister) \
	DECLARE_SERIALIZER(URigVMCompiler)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_299_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMCompiler(URigVMCompiler&&) = delete; \
	URigVMCompiler(const URigVMCompiler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMCompiler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMCompiler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMCompiler) \
	RIGVMDEVELOPER_API virtual ~URigVMCompiler();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_296_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_299_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_299_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_299_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h_299_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMCompiler;

// ********** End Class URigVMCompiler *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMCompiler_RigVMCompiler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
