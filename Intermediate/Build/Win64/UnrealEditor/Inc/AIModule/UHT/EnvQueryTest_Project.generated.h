// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/Tests/EnvQueryTest_Project.h"

#ifdef AIMODULE_EnvQueryTest_Project_generated_h
#error "EnvQueryTest_Project.generated.h already included, missing '#pragma once' in EnvQueryTest_Project.h"
#endif
#define AIMODULE_EnvQueryTest_Project_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryTest_Project ****************************************************
struct Z_Construct_UClass_UEnvQueryTest_Project_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Project_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Project(); \
	friend struct ::Z_Construct_UClass_UEnvQueryTest_Project_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryTest_Project_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryTest_Project, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryTest_Project_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryTest_Project)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryTest_Project(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Project) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryTest_Project); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Project); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryTest_Project(UEnvQueryTest_Project&&) = delete; \
	UEnvQueryTest_Project(const UEnvQueryTest_Project&) = delete; \
	AIMODULE_API virtual ~UEnvQueryTest_Project();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_15_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_18_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryTest_Project;

// ********** End Class UEnvQueryTest_Project ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
