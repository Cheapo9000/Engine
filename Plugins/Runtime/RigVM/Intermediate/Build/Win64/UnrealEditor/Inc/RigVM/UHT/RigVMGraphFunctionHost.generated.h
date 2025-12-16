// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMGraphFunctionHost.h"

#ifdef RIGVM_RigVMGraphFunctionHost_generated_h
#error "RigVMGraphFunctionHost.generated.h already included, missing '#pragma once' in RigVMGraphFunctionHost.h"
#endif
#define RIGVM_RigVMGraphFunctionHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface URigVMGraphFunctionHost **********************************************
struct Z_Construct_UClass_URigVMGraphFunctionHost_Statics;
RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVM_API URigVMGraphFunctionHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMGraphFunctionHost(URigVMGraphFunctionHost&&) = delete; \
	URigVMGraphFunctionHost(const URigVMGraphFunctionHost&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, URigVMGraphFunctionHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMGraphFunctionHost); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMGraphFunctionHost) \
	virtual ~URigVMGraphFunctionHost() = default;


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURigVMGraphFunctionHost(); \
	friend struct ::Z_Construct_UClass_URigVMGraphFunctionHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMGraphFunctionHost, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister) \
	DECLARE_SERIALIZER(URigVMGraphFunctionHost)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRigVMGraphFunctionHost() {} \
public: \
	typedef URigVMGraphFunctionHost UClassType; \
	typedef IRigVMGraphFunctionHost ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMGraphFunctionHost;

// ********** End Interface URigVMGraphFunctionHost ************************************************

// ********** Begin ScriptStruct FRigVMGraphFunctionStore ******************************************
struct Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMGraphFunctionStore_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMGraphFunctionStore;
// ********** End ScriptStruct FRigVMGraphFunctionStore ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMGraphFunctionHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
