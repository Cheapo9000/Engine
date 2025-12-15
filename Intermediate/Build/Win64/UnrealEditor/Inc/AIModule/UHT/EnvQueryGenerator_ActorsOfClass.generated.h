// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h"

#ifdef AIMODULE_EnvQueryGenerator_ActorsOfClass_generated_h
#error "EnvQueryGenerator_ActorsOfClass.generated.h already included, missing '#pragma once' in EnvQueryGenerator_ActorsOfClass.h"
#endif
#define AIMODULE_EnvQueryGenerator_ActorsOfClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryGenerator_ActorsOfClass *****************************************
struct Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_ActorsOfClass(); \
	friend struct ::Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryGenerator_ActorsOfClass, UEnvQueryGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryGenerator_ActorsOfClass_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_ActorsOfClass)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryGenerator_ActorsOfClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_ActorsOfClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryGenerator_ActorsOfClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_ActorsOfClass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryGenerator_ActorsOfClass(UEnvQueryGenerator_ActorsOfClass&&) = delete; \
	UEnvQueryGenerator_ActorsOfClass(const UEnvQueryGenerator_ActorsOfClass&) = delete; \
	AIMODULE_API virtual ~UEnvQueryGenerator_ActorsOfClass();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryGenerator_ActorsOfClass;

// ********** End Class UEnvQueryGenerator_ActorsOfClass *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ActorsOfClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
