// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Example/MassSimpleMovementTrait.h"

#ifdef MASSMOVEMENT_MassSimpleMovementTrait_generated_h
#error "MassSimpleMovementTrait.generated.h already included, missing '#pragma once' in MassSimpleMovementTrait.h"
#endif
#define MASSMOVEMENT_MassSimpleMovementTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassSimpleMovementTag ********************************************
struct Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassSimpleMovementTag_Statics; \
	MASSMOVEMENT_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FMassSimpleMovementTag;
// ********** End ScriptStruct FMassSimpleMovementTag **********************************************

// ********** Begin Class UMassSimpleMovementTrait *************************************************
struct Z_Construct_UClass_UMassSimpleMovementTrait_Statics;
MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassSimpleMovementTrait_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSimpleMovementTrait(); \
	friend struct ::Z_Construct_UClass_UMassSimpleMovementTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSMOVEMENT_API UClass* ::Z_Construct_UClass_UMassSimpleMovementTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSimpleMovementTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassMovement"), Z_Construct_UClass_UMassSimpleMovementTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassSimpleMovementTrait)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSMOVEMENT_API UMassSimpleMovementTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSimpleMovementTrait(UMassSimpleMovementTrait&&) = delete; \
	UMassSimpleMovementTrait(const UMassSimpleMovementTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSMOVEMENT_API, UMassSimpleMovementTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSimpleMovementTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSimpleMovementTrait) \
	MASSMOVEMENT_API virtual ~UMassSimpleMovementTrait();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSimpleMovementTrait;

// ********** End Class UMassSimpleMovementTrait ***************************************************

// ********** Begin Class UMassSimpleMovementProcessor *********************************************
struct Z_Construct_UClass_UMassSimpleMovementProcessor_Statics;
MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassSimpleMovementProcessor_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSimpleMovementProcessor(); \
	friend struct ::Z_Construct_UClass_UMassSimpleMovementProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSMOVEMENT_API UClass* ::Z_Construct_UClass_UMassSimpleMovementProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSimpleMovementProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassMovement"), Z_Construct_UClass_UMassSimpleMovementProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassSimpleMovementProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSimpleMovementProcessor(UMassSimpleMovementProcessor&&) = delete; \
	UMassSimpleMovementProcessor(const UMassSimpleMovementProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSMOVEMENT_API, UMassSimpleMovementProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSimpleMovementProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSimpleMovementProcessor) \
	MASSMOVEMENT_API virtual ~UMassSimpleMovementProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_31_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSimpleMovementProcessor;

// ********** End Class UMassSimpleMovementProcessor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassSimpleMovementTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
