// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Translators/MassCapsuleComponentTranslators.h"

#ifdef MASSACTORS_MassCapsuleComponentTranslators_generated_h
#error "MassCapsuleComponentTranslators.generated.h already included, missing '#pragma once' in MassCapsuleComponentTranslators.h"
#endif
#define MASSACTORS_MassCapsuleComponentTranslators_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCapsuleComponentWrapperFragment **********************************
struct Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCapsuleComponentWrapperFragment_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectWrapperFragment Super;


struct FCapsuleComponentWrapperFragment;
// ********** End ScriptStruct FCapsuleComponentWrapperFragment ************************************

// ********** Begin ScriptStruct FMassCapsuleTransformCopyToMassTag ********************************
struct Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToMassTag_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassCapsuleTransformCopyToMassTag;
// ********** End ScriptStruct FMassCapsuleTransformCopyToMassTag **********************************

// ********** Begin Class UMassCapsuleTransformToMassTranslator ************************************
struct Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCapsuleTransformToMassTranslator(); \
	friend struct ::Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCapsuleTransformToMassTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassCapsuleTransformToMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassCapsuleTransformToMassTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCapsuleTransformToMassTranslator(UMassCapsuleTransformToMassTranslator&&) = delete; \
	UMassCapsuleTransformToMassTranslator(const UMassCapsuleTransformToMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassCapsuleTransformToMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCapsuleTransformToMassTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCapsuleTransformToMassTranslator) \
	MASSACTORS_API virtual ~UMassCapsuleTransformToMassTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCapsuleTransformToMassTranslator;

// ********** End Class UMassCapsuleTransformToMassTranslator **************************************

// ********** Begin ScriptStruct FMassCapsuleTransformCopyToActorTag *******************************
struct Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassCapsuleTransformCopyToActorTag_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassCapsuleTransformCopyToActorTag;
// ********** End ScriptStruct FMassCapsuleTransformCopyToActorTag *********************************

// ********** Begin Class UMassTransformToActorCapsuleTranslator ***********************************
struct Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTransformToActorCapsuleTranslator(); \
	friend struct ::Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTransformToActorCapsuleTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassTransformToActorCapsuleTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassTransformToActorCapsuleTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTransformToActorCapsuleTranslator(UMassTransformToActorCapsuleTranslator&&) = delete; \
	UMassTransformToActorCapsuleTranslator(const UMassTransformToActorCapsuleTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassTransformToActorCapsuleTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTransformToActorCapsuleTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTransformToActorCapsuleTranslator) \
	MASSACTORS_API virtual ~UMassTransformToActorCapsuleTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_57_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTransformToActorCapsuleTranslator;

// ********** End Class UMassTransformToActorCapsuleTranslator *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCapsuleComponentTranslators_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
