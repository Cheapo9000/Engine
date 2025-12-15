// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQuery.h"

#ifdef AIMODULE_EnvQuery_generated_h
#error "EnvQuery.generated.h already included, missing '#pragma once' in EnvQuery.h"
#endif
#define AIMODULE_EnvQuery_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQuery ****************************************************************
struct Z_Construct_UClass_UEnvQuery_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQuery(); \
	friend struct ::Z_Construct_UClass_UEnvQuery_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQuery_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQuery, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQuery_NoRegister) \
	DECLARE_SERIALIZER(UEnvQuery)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQuery); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQuery(UEnvQuery&&) = delete; \
	UEnvQuery(const UEnvQuery&) = delete; \
	AIMODULE_API virtual ~UEnvQuery();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_18_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQuery;

// ********** End Class UEnvQuery ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
