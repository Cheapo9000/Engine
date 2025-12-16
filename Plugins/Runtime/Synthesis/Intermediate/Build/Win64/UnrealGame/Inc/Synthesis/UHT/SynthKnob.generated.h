// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SynthKnob.h"

#ifdef SYNTHESIS_SynthKnob_generated_h
#error "SynthKnob.generated.h already included, missing '#pragma once' in SynthKnob.h"
#endif
#define SYNTHESIS_SynthKnob_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USynthKnob ***************************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


struct Z_Construct_UClass_USynthKnob_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USynthKnob_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSynthKnob(); \
	friend struct ::Z_Construct_UClass_USynthKnob_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USynthKnob_NoRegister(); \
public: \
	DECLARE_CLASS2(USynthKnob, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USynthKnob_NoRegister) \
	DECLARE_SERIALIZER(USynthKnob)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USynthKnob(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthKnob) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USynthKnob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthKnob); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynthKnob(USynthKnob&&) = delete; \
	USynthKnob(const USynthKnob&) = delete; \
	SYNTHESIS_API virtual ~USynthKnob();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynthKnob;

// ********** End Class USynthKnob *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnob_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
