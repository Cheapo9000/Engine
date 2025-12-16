// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMCore/RigVMAssetUserData.h"

#ifdef RIGVM_RigVMAssetUserData_generated_h
#error "RigVMAssetUserData.generated.h already included, missing '#pragma once' in RigVMAssetUserData.h"
#endif
#define RIGVM_RigVMAssetUserData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataAsset;

// ********** Begin Class UNameSpacedUserData ******************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNameSpacedUserData, RIGVM_API)


struct Z_Construct_UClass_UNameSpacedUserData_Statics;
RIGVM_API UClass* Z_Construct_UClass_UNameSpacedUserData_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNameSpacedUserData(); \
	friend struct ::Z_Construct_UClass_UNameSpacedUserData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_UNameSpacedUserData_NoRegister(); \
public: \
	DECLARE_CLASS2(UNameSpacedUserData, UAssetUserData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_UNameSpacedUserData_NoRegister) \
	DECLARE_SERIALIZER(UNameSpacedUserData) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_18_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVM_API UNameSpacedUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNameSpacedUserData(UNameSpacedUserData&&) = delete; \
	UNameSpacedUserData(const UNameSpacedUserData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, UNameSpacedUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNameSpacedUserData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNameSpacedUserData)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNameSpacedUserData;

// ********** End Class UNameSpacedUserData ********************************************************

// ********** Begin Class UDataAssetLink ***********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDataAsset); \
	DECLARE_FUNCTION(execGetDataAsset);


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataAssetLink, RIGVM_API)


struct Z_Construct_UClass_UDataAssetLink_Statics;
RIGVM_API UClass* Z_Construct_UClass_UDataAssetLink_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataAssetLink(); \
	friend struct ::Z_Construct_UClass_UDataAssetLink_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVM_API UClass* ::Z_Construct_UClass_UDataAssetLink_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataAssetLink, UNameSpacedUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVM"), Z_Construct_UClass_UDataAssetLink_NoRegister) \
	DECLARE_SERIALIZER(UDataAssetLink) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVM_API UDataAssetLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataAssetLink(UDataAssetLink&&) = delete; \
	UDataAssetLink(const UDataAssetLink&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVM_API, UDataAssetLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAssetLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAssetLink) \
	RIGVM_API virtual ~UDataAssetLink();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_185_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h_188_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataAssetLink;

// ********** End Class UDataAssetLink *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMCore_RigVMAssetUserData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
