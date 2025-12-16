// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMAsset.h"

#ifdef RIGVMDEVELOPER_RigVMAsset_generated_h
#error "RigVMAsset.generated.h already included, missing '#pragma once' in RigVMAsset.h"
#endif
#define RIGVMDEVELOPER_RigVMAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMPythonSettings **********************************************
struct Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMPythonSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRigVMPythonSettings;
// ********** End ScriptStruct FRigVMPythonSettings ************************************************

// ********** Begin ScriptStruct FRigVMEdGraphDisplaySettings **************************************
struct Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMEdGraphDisplaySettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRigVMEdGraphDisplaySettings;
// ********** End ScriptStruct FRigVMEdGraphDisplaySettings ****************************************

// ********** Begin Interface URigVMAssetInterface *************************************************
struct Z_Construct_UClass_URigVMAssetInterface_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMAssetInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMAssetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMAssetInterface(URigVMAssetInterface&&) = delete; \
	URigVMAssetInterface(const URigVMAssetInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMAssetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMAssetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMAssetInterface) \
	virtual ~URigVMAssetInterface() = default;


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_182_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURigVMAssetInterface(); \
	friend struct ::Z_Construct_UClass_URigVMAssetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMAssetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMAssetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMAssetInterface_NoRegister) \
	DECLARE_SERIALIZER(URigVMAssetInterface)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_182_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_182_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_182_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_182_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRigVMAssetInterface() {} \
public: \
	typedef URigVMAssetInterface UClassType; \
	typedef IRigVMAssetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_179_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h_182_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMAssetInterface;

// ********** End Interface URigVMAssetInterface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMAsset_h

// ********** Begin Enum ERigVMTagDisplayMode ******************************************************
#define FOREACH_ENUM_ERIGVMTAGDISPLAYMODE(op) \
	op(ERigVMTagDisplayMode::None) \
	op(ERigVMTagDisplayMode::All) \
	op(ERigVMTagDisplayMode::DeprecationOnly) \
	op(ERigVMTagDisplayMode::Last) 

enum class ERigVMTagDisplayMode : uint8;
template<> struct TIsUEnumClass<ERigVMTagDisplayMode> { enum { Value = true }; };
template<> RIGVMDEVELOPER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMTagDisplayMode>();
// ********** End Enum ERigVMTagDisplayMode ********************************************************

// ********** Begin Enum ERigVMAssetStatus *********************************************************
#define FOREACH_ENUM_ERIGVMASSETSTATUS(op) \
	op(RVMA_Unknown) \
	op(RVMA_Dirty) \
	op(RVMA_Error) \
	op(RVMA_UpToDate) \
	op(RVMA_BeingCreated) \
	op(RVMA_UpToDateWithWarnings) 

enum ERigVMAssetStatus : int;
template<> RIGVMDEVELOPER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMAssetStatus>();
// ********** End Enum ERigVMAssetStatus ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
