// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTranslator.h"

#ifdef MASSSPAWNER_MassTranslator_generated_h
#error "MassTranslator.generated.h already included, missing '#pragma once' in MassTranslator.h"
#endif
#define MASSSPAWNER_MassTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassTranslator **********************************************************
struct Z_Construct_UClass_UMassTranslator_Statics;
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTranslator(); \
	friend struct ::Z_Construct_UClass_UMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSPAWNER_API UClass* ::Z_Construct_UClass_UMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTranslator, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSpawner"), Z_Construct_UClass_UMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTranslator(UMassTranslator&&) = delete; \
	UMassTranslator(const UMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSPAWNER_API, UMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTranslator); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMassTranslator) \
	MASSSPAWNER_API virtual ~UMassTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTranslator;

// ********** End Class UMassTranslator ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassTranslator_h

// ********** Begin Enum EMassTranslationDirection *************************************************
#define FOREACH_ENUM_EMASSTRANSLATIONDIRECTION(op) \
	op(EMassTranslationDirection::None) \
	op(EMassTranslationDirection::InitializationOnly) \
	op(EMassTranslationDirection::ActorToMass) \
	op(EMassTranslationDirection::MassToActor) \
	op(EMassTranslationDirection::BothWays) 

enum class EMassTranslationDirection : uint8;
template<> struct TIsUEnumClass<EMassTranslationDirection> { enum { Value = true }; };
template<> MASSSPAWNER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassTranslationDirection>();
// ********** End Enum EMassTranslationDirection ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
