// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMFunctionLibrary.h"

#ifdef RIGVMDEVELOPER_RigVMFunctionLibrary_generated_h
#error "RigVMFunctionLibrary.generated.h already included, missing '#pragma once' in RigVMFunctionLibrary.h"
#endif
#define RIGVMDEVELOPER_RigVMFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMFunctionReferenceNode;
class URigVMLibraryNode;
class URigVMNode;

// ********** Begin Class URigVMFunctionLibrary ****************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReferencePathsForFunction); \
	DECLARE_FUNCTION(execGetReferencesForFunction); \
	DECLARE_FUNCTION(execFindFunctionForNode); \
	DECLARE_FUNCTION(execFindFunction); \
	DECLARE_FUNCTION(execGetFunctions);


struct Z_Construct_UClass_URigVMFunctionLibrary_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_URigVMFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMFunctionLibrary, URigVMGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(URigVMFunctionLibrary)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMFunctionLibrary(URigVMFunctionLibrary&&) = delete; \
	URigVMFunctionLibrary(const URigVMFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMFunctionLibrary) \
	RIGVMDEVELOPER_API virtual ~URigVMFunctionLibrary();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMFunctionLibrary;

// ********** End Class URigVMFunctionLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
