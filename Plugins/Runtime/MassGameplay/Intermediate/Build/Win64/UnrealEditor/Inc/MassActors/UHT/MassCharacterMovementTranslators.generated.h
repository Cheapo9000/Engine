// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Translators/MassCharacterMovementTranslators.h"

#ifdef MASSACTORS_MassCharacterMovementTranslators_generated_h
#error "MassCharacterMovementTranslators.generated.h already included, missing '#pragma once' in MassCharacterMovementTranslators.h"
#endif
#define MASSACTORS_MassCharacterMovementTranslators_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCharacterMovementComponentWrapperFragment ************************
struct Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCharacterMovementComponentWrapperFragment_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectWrapperFragment Super;


struct FCharacterMovementComponentWrapperFragment;
// ********** End ScriptStruct FCharacterMovementComponentWrapperFragment **************************

// ********** Begin ScriptStruct FMassCharacterMovementCopyToMassTag *******************************
struct Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassCharacterMovementCopyToMassTag_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassCharacterMovementCopyToMassTag;
// ********** End ScriptStruct FMassCharacterMovementCopyToMassTag *********************************

// ********** Begin Class UMassCharacterMovementToMassTranslator ***********************************
struct Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterMovementToMassTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCharacterMovementToMassTranslator(); \
	friend struct ::Z_Construct_UClass_UMassCharacterMovementToMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassCharacterMovementToMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCharacterMovementToMassTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassCharacterMovementToMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassCharacterMovementToMassTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCharacterMovementToMassTranslator(UMassCharacterMovementToMassTranslator&&) = delete; \
	UMassCharacterMovementToMassTranslator(const UMassCharacterMovementToMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassCharacterMovementToMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCharacterMovementToMassTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCharacterMovementToMassTranslator) \
	MASSACTORS_API virtual ~UMassCharacterMovementToMassTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCharacterMovementToMassTranslator;

// ********** End Class UMassCharacterMovementToMassTranslator *************************************

// ********** Begin ScriptStruct FMassCharacterMovementCopyToActorTag ******************************
struct Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassCharacterMovementCopyToActorTag_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassCharacterMovementCopyToActorTag;
// ********** End ScriptStruct FMassCharacterMovementCopyToActorTag ********************************

// ********** Begin Class UMassCharacterMovementToActorTranslator **********************************
struct Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterMovementToActorTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCharacterMovementToActorTranslator(); \
	friend struct ::Z_Construct_UClass_UMassCharacterMovementToActorTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassCharacterMovementToActorTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCharacterMovementToActorTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassCharacterMovementToActorTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassCharacterMovementToActorTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCharacterMovementToActorTranslator(UMassCharacterMovementToActorTranslator&&) = delete; \
	UMassCharacterMovementToActorTranslator(const UMassCharacterMovementToActorTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassCharacterMovementToActorTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCharacterMovementToActorTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCharacterMovementToActorTranslator) \
	MASSACTORS_API virtual ~UMassCharacterMovementToActorTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCharacterMovementToActorTranslator;

// ********** End Class UMassCharacterMovementToActorTranslator ************************************

// ********** Begin ScriptStruct FMassCharacterOrientationCopyToMassTag ****************************
struct Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToMassTag_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassCharacterOrientationCopyToMassTag;
// ********** End ScriptStruct FMassCharacterOrientationCopyToMassTag ******************************

// ********** Begin Class UMassCharacterOrientationToMassTranslator ********************************
struct Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCharacterOrientationToMassTranslator(); \
	friend struct ::Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCharacterOrientationToMassTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassCharacterOrientationToMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassCharacterOrientationToMassTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCharacterOrientationToMassTranslator(UMassCharacterOrientationToMassTranslator&&) = delete; \
	UMassCharacterOrientationToMassTranslator(const UMassCharacterOrientationToMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassCharacterOrientationToMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCharacterOrientationToMassTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCharacterOrientationToMassTranslator) \
	MASSACTORS_API virtual ~UMassCharacterOrientationToMassTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_72_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCharacterOrientationToMassTranslator;

// ********** End Class UMassCharacterOrientationToMassTranslator **********************************

// ********** Begin ScriptStruct FMassCharacterOrientationCopyToActorTag ***************************
struct Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassCharacterOrientationCopyToActorTag_Statics; \
	MASSACTORS_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassCharacterOrientationCopyToActorTag;
// ********** End ScriptStruct FMassCharacterOrientationCopyToActorTag *****************************

// ********** Begin Class UMassCharacterOrientationToActorTranslator *******************************
struct Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassCharacterOrientationToActorTranslator(); \
	friend struct ::Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassCharacterOrientationToActorTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassCharacterOrientationToActorTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassCharacterOrientationToActorTranslator)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_97_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassCharacterOrientationToActorTranslator(UMassCharacterOrientationToActorTranslator&&) = delete; \
	UMassCharacterOrientationToActorTranslator(const UMassCharacterOrientationToActorTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassCharacterOrientationToActorTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassCharacterOrientationToActorTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassCharacterOrientationToActorTranslator) \
	MASSACTORS_API virtual ~UMassCharacterOrientationToActorTranslator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_94_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassCharacterOrientationToActorTranslator;

// ********** End Class UMassCharacterOrientationToActorTranslator *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_Translators_MassCharacterMovementTranslators_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
