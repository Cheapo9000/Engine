// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Conditions/MovieSceneScalabilityCondition.h"

#ifdef MOVIESCENETRACKS_MovieSceneScalabilityCondition_generated_h
#error "MovieSceneScalabilityCondition.generated.h already included, missing '#pragma once' in MovieSceneScalabilityCondition.h"
#endif
#define MOVIESCENETRACKS_MovieSceneScalabilityCondition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMovieSceneScalabilityCondition ******************************************
struct Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics;
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneScalabilityCondition_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScalabilityCondition(); \
	friend struct ::Z_Construct_UClass_UMovieSceneScalabilityCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETRACKS_API UClass* ::Z_Construct_UClass_UMovieSceneScalabilityCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneScalabilityCondition, UMovieSceneCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), Z_Construct_UClass_UMovieSceneScalabilityCondition_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneScalabilityCondition)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneScalabilityCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneScalabilityCondition(UMovieSceneScalabilityCondition&&) = delete; \
	UMovieSceneScalabilityCondition(const UMovieSceneScalabilityCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneScalabilityCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScalabilityCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScalabilityCondition) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneScalabilityCondition();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_66_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneScalabilityCondition;

// ********** End Class UMovieSceneScalabilityCondition ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Conditions_MovieSceneScalabilityCondition_h

// ********** Begin Enum EMovieSceneScalabilityConditionGroup **************************************
#define FOREACH_ENUM_EMOVIESCENESCALABILITYCONDITIONGROUP(op) \
	op(EMovieSceneScalabilityConditionGroup::ViewDistance) \
	op(EMovieSceneScalabilityConditionGroup::AntiAliasing) \
	op(EMovieSceneScalabilityConditionGroup::Shadow) \
	op(EMovieSceneScalabilityConditionGroup::GlobalIllumination) \
	op(EMovieSceneScalabilityConditionGroup::Reflection) \
	op(EMovieSceneScalabilityConditionGroup::PostProcess) \
	op(EMovieSceneScalabilityConditionGroup::Texture) \
	op(EMovieSceneScalabilityConditionGroup::Effects) \
	op(EMovieSceneScalabilityConditionGroup::Foliage) \
	op(EMovieSceneScalabilityConditionGroup::Shading) \
	op(EMovieSceneScalabilityConditionGroup::Landscape) 

enum class EMovieSceneScalabilityConditionGroup : uint8;
template<> struct TIsUEnumClass<EMovieSceneScalabilityConditionGroup> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneScalabilityConditionGroup>();
// ********** End Enum EMovieSceneScalabilityConditionGroup ****************************************

// ********** Begin Enum EMovieSceneScalabilityConditionOperator ***********************************
#define FOREACH_ENUM_EMOVIESCENESCALABILITYCONDITIONOPERATOR(op) \
	op(EMovieSceneScalabilityConditionOperator::LessThan) \
	op(EMovieSceneScalabilityConditionOperator::LessThanOrEqualTo) \
	op(EMovieSceneScalabilityConditionOperator::EqualTo) \
	op(EMovieSceneScalabilityConditionOperator::GreaterThanOrEqualTo) \
	op(EMovieSceneScalabilityConditionOperator::GreaterThan) 

enum class EMovieSceneScalabilityConditionOperator : uint8;
template<> struct TIsUEnumClass<EMovieSceneScalabilityConditionOperator> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneScalabilityConditionOperator>();
// ********** End Enum EMovieSceneScalabilityConditionOperator *************************************

// ********** Begin Enum EMovieSceneScalabilityConditionLevel **************************************
#define FOREACH_ENUM_EMOVIESCENESCALABILITYCONDITIONLEVEL(op) \
	op(EMovieSceneScalabilityConditionLevel::Low) \
	op(EMovieSceneScalabilityConditionLevel::Medium) \
	op(EMovieSceneScalabilityConditionLevel::High) \
	op(EMovieSceneScalabilityConditionLevel::Epic) \
	op(EMovieSceneScalabilityConditionLevel::Cinematic) 

enum class EMovieSceneScalabilityConditionLevel : uint8;
template<> struct TIsUEnumClass<EMovieSceneScalabilityConditionLevel> { enum { Value = true }; };
template<> MOVIESCENETRACKS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovieSceneScalabilityConditionLevel>();
// ********** End Enum EMovieSceneScalabilityConditionLevel ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
