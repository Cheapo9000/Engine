// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigSchema.h"

#ifdef CONTROLRIGDEVELOPER_ControlRigSchema_generated_h
#error "ControlRigSchema.generated.h already included, missing '#pragma once' in ControlRigSchema.h"
#endif
#define CONTROLRIGDEVELOPER_ControlRigSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigSchema ********************************************************
struct Z_Construct_UClass_UControlRigSchema_Statics;
CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigSchema_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigSchema(); \
	friend struct ::Z_Construct_UClass_UControlRigSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGDEVELOPER_API UClass* ::Z_Construct_UClass_UControlRigSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigSchema, URigVMSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), Z_Construct_UClass_UControlRigSchema_NoRegister) \
	DECLARE_SERIALIZER(UControlRigSchema)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGDEVELOPER_API UControlRigSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGDEVELOPER_API, UControlRigSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigSchema(UControlRigSchema&&) = delete; \
	UControlRigSchema(const UControlRigSchema&) = delete; \
	CONTROLRIGDEVELOPER_API virtual ~UControlRigSchema();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_10_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_13_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigSchema;

// ********** End Class UControlRigSchema **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
