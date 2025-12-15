// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryContext.h"

#ifdef AIMODULE_EnvQueryContext_generated_h
#error "EnvQueryContext.generated.h already included, missing '#pragma once' in EnvQueryContext.h"
#endif
#define AIMODULE_EnvQueryContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryContext *********************************************************
struct Z_Construct_UClass_UEnvQueryContext_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryContext(); \
	friend struct ::Z_Construct_UClass_UEnvQueryContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryContext, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryContext_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryContext)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryContext); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryContext(UEnvQueryContext&&) = delete; \
	UEnvQueryContext(const UEnvQueryContext&) = delete; \
	AIMODULE_API virtual ~UEnvQueryContext();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryContext;

// ********** End Class UEnvQueryContext ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
