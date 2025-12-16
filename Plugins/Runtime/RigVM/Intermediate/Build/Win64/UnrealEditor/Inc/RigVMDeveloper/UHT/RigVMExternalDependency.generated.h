// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMExternalDependency.h"

#ifdef RIGVMDEVELOPER_RigVMExternalDependency_generated_h
#error "RigVMExternalDependency.generated.h already included, missing '#pragma once' in RigVMExternalDependency.h"
#endif
#define RIGVMDEVELOPER_RigVMExternalDependency_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMExternalDependency ******************************************
struct Z_Construct_UScriptStruct_FRigVMExternalDependency_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMExternalDependency_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMExternalDependency;
// ********** End ScriptStruct FRigVMExternalDependency ********************************************

// ********** Begin Interface URigVMExternalDependencyManager **************************************
struct Z_Construct_UClass_URigVMExternalDependencyManager_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMExternalDependencyManager_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMExternalDependencyManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMExternalDependencyManager(URigVMExternalDependencyManager&&) = delete; \
	URigVMExternalDependencyManager(const URigVMExternalDependencyManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMExternalDependencyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMExternalDependencyManager); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMExternalDependencyManager) \
	virtual ~URigVMExternalDependencyManager() = default;


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_59_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURigVMExternalDependencyManager(); \
	friend struct ::Z_Construct_UClass_URigVMExternalDependencyManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMExternalDependencyManager_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMExternalDependencyManager, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMExternalDependencyManager_NoRegister) \
	DECLARE_SERIALIZER(URigVMExternalDependencyManager)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_59_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_59_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_59_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_59_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRigVMExternalDependencyManager() {} \
public: \
	typedef URigVMExternalDependencyManager UClassType; \
	typedef IRigVMExternalDependencyManager ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h_59_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMExternalDependencyManager;

// ********** End Interface URigVMExternalDependencyManager ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMExternalDependency_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
