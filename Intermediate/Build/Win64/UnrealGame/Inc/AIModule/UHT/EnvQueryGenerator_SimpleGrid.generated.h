// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h"

#ifdef AIMODULE_EnvQueryGenerator_SimpleGrid_generated_h
#error "EnvQueryGenerator_SimpleGrid.generated.h already included, missing '#pragma once' in EnvQueryGenerator_SimpleGrid.h"
#endif
#define AIMODULE_EnvQueryGenerator_SimpleGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryGenerator_SimpleGrid ********************************************
struct Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryGenerator_SimpleGrid(); \
	friend struct ::Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryGenerator_SimpleGrid, UEnvQueryGenerator_ProjectedPoints, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryGenerator_SimpleGrid)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryGenerator_SimpleGrid(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryGenerator_SimpleGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryGenerator_SimpleGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryGenerator_SimpleGrid); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryGenerator_SimpleGrid(UEnvQueryGenerator_SimpleGrid&&) = delete; \
	UEnvQueryGenerator_SimpleGrid(const UEnvQueryGenerator_SimpleGrid&) = delete; \
	AIMODULE_API virtual ~UEnvQueryGenerator_SimpleGrid();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_20_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryGenerator_SimpleGrid;

// ********** End Class UEnvQueryGenerator_SimpleGrid **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
