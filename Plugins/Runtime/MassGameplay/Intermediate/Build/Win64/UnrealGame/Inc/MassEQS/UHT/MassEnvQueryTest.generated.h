// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/MassEnvQueryTest.h"

#ifdef MASSEQS_MassEnvQueryTest_generated_h
#error "MassEnvQueryTest.generated.h already included, missing '#pragma once' in MassEnvQueryTest.h"
#endif
#define MASSEQS_MassEnvQueryTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEnvQueryTest ********************************************************
struct Z_Construct_UClass_UMassEnvQueryTest_Statics;
MASSEQS_API UClass* Z_Construct_UClass_UMassEnvQueryTest_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMassEnvQueryTest(); \
	friend struct ::Z_Construct_UClass_UMassEnvQueryTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSEQS_API UClass* ::Z_Construct_UClass_UMassEnvQueryTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEnvQueryTest, UEnvQueryTest, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MassEQS"), Z_Construct_UClass_UMassEnvQueryTest_NoRegister) \
	DECLARE_SERIALIZER(UMassEnvQueryTest) \
	virtual UObject* _getUObject() const override { return const_cast<UMassEnvQueryTest*>(this); }


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSEQS_API UMassEnvQueryTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEnvQueryTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSEQS_API, UMassEnvQueryTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEnvQueryTest); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEnvQueryTest(UMassEnvQueryTest&&) = delete; \
	UMassEnvQueryTest(const UMassEnvQueryTest&) = delete; \
	MASSEQS_API virtual ~UMassEnvQueryTest();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEnvQueryTest;

// ********** End Class UMassEnvQueryTest **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
