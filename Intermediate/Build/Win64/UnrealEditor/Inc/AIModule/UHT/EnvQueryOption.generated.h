// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryOption.h"

#ifdef AIMODULE_EnvQueryOption_generated_h
#error "EnvQueryOption.generated.h already included, missing '#pragma once' in EnvQueryOption.h"
#endif
#define AIMODULE_EnvQueryOption_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryOption **********************************************************
struct Z_Construct_UClass_UEnvQueryOption_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryOption(); \
	friend struct ::Z_Construct_UClass_UEnvQueryOption_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryOption_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryOption, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryOption_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryOption)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryOption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryOption) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryOption); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryOption(UEnvQueryOption&&) = delete; \
	UEnvQueryOption(const UEnvQueryOption&) = delete; \
	AIMODULE_API virtual ~UEnvQueryOption();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryOption;

// ********** End Class UEnvQueryOption ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
