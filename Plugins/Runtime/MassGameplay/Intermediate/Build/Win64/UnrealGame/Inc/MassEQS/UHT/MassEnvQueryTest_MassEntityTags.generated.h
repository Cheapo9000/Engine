// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/MassEnvQueryTest_MassEntityTags.h"

#ifdef MASSEQS_MassEnvQueryTest_MassEntityTags_generated_h
#error "MassEnvQueryTest_MassEntityTags.generated.h already included, missing '#pragma once' in MassEnvQueryTest_MassEntityTags.h"
#endif
#define MASSEQS_MassEnvQueryTest_MassEntityTags_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEnvQueryTest_MassEntityTags *****************************************
struct Z_Construct_UClass_UMassEnvQueryTest_MassEntityTags_Statics;
MASSEQS_API UClass* Z_Construct_UClass_UMassEnvQueryTest_MassEntityTags_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_MassEntityTags_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMassEnvQueryTest_MassEntityTags(); \
	friend struct ::Z_Construct_UClass_UMassEnvQueryTest_MassEntityTags_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSEQS_API UClass* ::Z_Construct_UClass_UMassEnvQueryTest_MassEntityTags_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEnvQueryTest_MassEntityTags, UMassEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassEQS"), Z_Construct_UClass_UMassEnvQueryTest_MassEntityTags_NoRegister) \
	DECLARE_SERIALIZER(UMassEnvQueryTest_MassEntityTags)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_MassEntityTags_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSEQS_API UMassEnvQueryTest_MassEntityTags(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEnvQueryTest_MassEntityTags) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSEQS_API, UMassEnvQueryTest_MassEntityTags); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEnvQueryTest_MassEntityTags); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEnvQueryTest_MassEntityTags(UMassEnvQueryTest_MassEntityTags&&) = delete; \
	UMassEnvQueryTest_MassEntityTags(const UMassEnvQueryTest_MassEntityTags&) = delete; \
	MASSEQS_API virtual ~UMassEnvQueryTest_MassEntityTags();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_MassEntityTags_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_MassEntityTags_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_MassEntityTags_h_28_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_MassEntityTags_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEnvQueryTest_MassEntityTags;

// ********** End Class UMassEnvQueryTest_MassEntityTags *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Tests_MassEnvQueryTest_MassEntityTags_h

// ********** Begin Enum EMassEntityTagsTestMode ***************************************************
#define FOREACH_ENUM_EMASSENTITYTAGSTESTMODE(op) \
	op(EMassEntityTagsTestMode::Any) \
	op(EMassEntityTagsTestMode::All) \
	op(EMassEntityTagsTestMode::None) 

enum class EMassEntityTagsTestMode : uint8;
template<> struct TIsUEnumClass<EMassEntityTagsTestMode> { enum { Value = true }; };
template<> MASSEQS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassEntityTagsTestMode>();
// ********** End Enum EMassEntityTagsTestMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
