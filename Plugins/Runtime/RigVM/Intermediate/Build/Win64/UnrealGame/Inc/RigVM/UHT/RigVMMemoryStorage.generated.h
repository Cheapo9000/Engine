// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMMemoryStorage.h"

#ifdef RIGVM_RigVMMemoryStorage_generated_h
#error "RigVMMemoryStorage.generated.h already included, missing '#pragma once' in RigVMMemoryStorage.h"
#endif
#define RIGVM_RigVMMemoryStorage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMBranchInfo **************************************************
struct Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMBranchInfo_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMBranchInfo;
// ********** End ScriptStruct FRigVMBranchInfo ****************************************************

// ********** Begin Class URigVMMemoryStorageGeneratorClass ****************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1083_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMMemoryStorageGeneratorClass, RIGVM_API)


struct Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics;
RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1083_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMMemoryStorageGeneratorClass(); \
	friend struct ::Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMMemoryStorageGeneratorClass, UClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister) \
	DECLARE_SERIALIZER(URigVMMemoryStorageGeneratorClass) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1083_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1083_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMMemoryStorageGeneratorClass(URigVMMemoryStorageGeneratorClass&&) = delete; \
	URigVMMemoryStorageGeneratorClass(const URigVMMemoryStorageGeneratorClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, URigVMMemoryStorageGeneratorClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMMemoryStorageGeneratorClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMMemoryStorageGeneratorClass) \
	RIGVM_API virtual ~URigVMMemoryStorageGeneratorClass();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1079_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1083_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1083_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1083_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMMemoryStorageGeneratorClass;

// ********** End Class URigVMMemoryStorageGeneratorClass ******************************************

// ********** Begin Class URigVMMemoryStorage ******************************************************
struct Z_Construct_UClass_URigVMMemoryStorage_Statics;
RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorage_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMMemoryStorage(); \
	friend struct ::Z_Construct_UClass_URigVMMemoryStorage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_URigVMMemoryStorage_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMMemoryStorage, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_URigVMMemoryStorage_NoRegister) \
	DECLARE_SERIALIZER(URigVMMemoryStorage)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVM_API URigVMMemoryStorage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMMemoryStorage(URigVMMemoryStorage&&) = delete; \
	URigVMMemoryStorage(const URigVMMemoryStorage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, URigVMMemoryStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMMemoryStorage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMMemoryStorage) \
	RIGVM_API virtual ~URigVMMemoryStorage();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1200_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1203_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_1203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMMemoryStorage;

// ********** End Class URigVMMemoryStorage ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMMemoryStorage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
