// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQuery/EnvQueryTest.h"

#ifdef AIMODULE_EnvQueryTest_generated_h
#error "EnvQueryTest.generated.h already included, missing '#pragma once' in EnvQueryTest.h"
#endif
#define AIMODULE_EnvQueryTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvQueryTest ************************************************************
struct Z_Construct_UClass_UEnvQueryTest_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryTest(); \
	friend struct ::Z_Construct_UClass_UEnvQueryTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UEnvQueryTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvQueryTest, UEnvQueryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UEnvQueryTest_NoRegister) \
	DECLARE_SERIALIZER(UEnvQueryTest)


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvQueryTest(UEnvQueryTest&&) = delete; \
	UEnvQueryTest(const UEnvQueryTest&) = delete; \
	AIMODULE_API virtual ~UEnvQueryTest();


#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_60_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvQueryTest;

// ********** End Class UEnvQueryTest **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryTest_h

// ********** Begin Enum EEQSNormalizationType *****************************************************
#define FOREACH_ENUM_EEQSNORMALIZATIONTYPE(op) \
	op(EEQSNormalizationType::Absolute) \
	op(EEQSNormalizationType::RelativeToScores) 

enum class EEQSNormalizationType : uint8;
template<> struct TIsUEnumClass<EEQSNormalizationType> { enum { Value = true }; };
template<> AIMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEQSNormalizationType>();
// ********** End Enum EEQSNormalizationType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
