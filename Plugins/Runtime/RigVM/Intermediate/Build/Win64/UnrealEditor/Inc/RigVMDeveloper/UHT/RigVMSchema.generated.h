// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMSchema.h"

#ifdef RIGVMDEVELOPER_RigVMSchema_generated_h
#error "RigVMSchema.generated.h already included, missing '#pragma once' in RigVMSchema.h"
#endif
#define RIGVMDEVELOPER_RigVMSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMSchema *************************************************************
struct Z_Construct_UClass_URigVMSchema_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMSchema_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_32_INCLASS \
private: \
	static void StaticRegisterNativesURigVMSchema(); \
	friend struct ::Z_Construct_UClass_URigVMSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMSchema, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMSchema_NoRegister) \
	DECLARE_SERIALIZER(URigVMSchema)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMSchema(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMSchema(URigVMSchema&&) = delete; \
	URigVMSchema(const URigVMSchema&) = delete; \
	RIGVMDEVELOPER_API virtual ~URigVMSchema();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_32_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMSchema;

// ********** End Class URigVMSchema ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
