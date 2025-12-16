// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Translators/MassSceneComponentVelocityTranslator.h"

#ifdef MASSACTORS_MassSceneComponentVelocityTranslator_generated_h
#error "MassSceneComponentVelocityTranslator.generated.h already included, missing '#pragma once' in MassSceneComponentVelocityTranslator.h"
#endif
#define MASSACTORS_MassSceneComponentVelocityTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassSceneComponentVelocityCopyToMassTag **************************
struct Z_Construct_UScriptStruct_FMassSceneComponentVelocityCopyToMassTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentVelocityTranslator_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSceneComponentVelocityCopyToMassTag_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassSceneComponentVelocityCopyToMassTag;
// ********** End ScriptStruct FMassSceneComponentVelocityCopyToMassTag ****************************

// ********** Begin Class UMassSceneComponentVelocityToMassTranslator ******************************
struct Z_Construct_UClass_UMassSceneComponentVelocityToMassTranslator_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassSceneComponentVelocityToMassTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentVelocityTranslator_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSceneComponentVelocityToMassTranslator(); \
	friend struct ::Z_Construct_UClass_UMassSceneComponentVelocityToMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassSceneComponentVelocityToMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSceneComponentVelocityToMassTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassSceneComponentVelocityToMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassSceneComponentVelocityToMassTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentVelocityTranslator_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSceneComponentVelocityToMassTranslator(UMassSceneComponentVelocityToMassTranslator&&) = delete; \
	UMassSceneComponentVelocityToMassTranslator(const UMassSceneComponentVelocityToMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassSceneComponentVelocityToMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSceneComponentVelocityToMassTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSceneComponentVelocityToMassTranslator) \
	MASSACTORS_API virtual ~UMassSceneComponentVelocityToMassTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentVelocityTranslator_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentVelocityTranslator_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentVelocityTranslator_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentVelocityTranslator_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSceneComponentVelocityToMassTranslator;

// ********** End Class UMassSceneComponentVelocityToMassTranslator ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassSceneComponentVelocityTranslator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
