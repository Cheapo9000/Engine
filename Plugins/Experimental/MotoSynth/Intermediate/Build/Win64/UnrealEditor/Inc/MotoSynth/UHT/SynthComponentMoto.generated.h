// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthComponents/SynthComponentMoto.h"

#ifdef MOTOSYNTH_SynthComponentMoto_generated_h
#error "SynthComponentMoto.generated.h already included, missing '#pragma once' in SynthComponentMoto.h"
#endif
#define MOTOSYNTH_SynthComponentMoto_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMotoSynthRuntimeSettings;

// ********** Begin Class USynthComponentMoto ******************************************************
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetRPMRange); \
	DECLARE_FUNCTION(execSetSettings); \
	DECLARE_FUNCTION(execSetRPM);


struct Z_Construct_UClass_USynthComponentMoto_Statics;
MOTOSYNTH_API UClass* Z_Construct_UClass_USynthComponentMoto_NoRegister();

#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponentMoto(); \
	friend struct ::Z_Construct_UClass_USynthComponentMoto_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTOSYNTH_API UClass* ::Z_Construct_UClass_USynthComponentMoto_NoRegister(); \
public: \
	DECLARE_CLASS2(USynthComponentMoto, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotoSynth"), Z_Construct_UClass_USynthComponentMoto_NoRegister) \
	DECLARE_SERIALIZER(USynthComponentMoto)


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynthComponentMoto(USynthComponentMoto&&) = delete; \
	USynthComponentMoto(const USynthComponentMoto&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTOSYNTH_API, USynthComponentMoto); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponentMoto); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponentMoto)


#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynthComponentMoto;

// ********** End Class USynthComponentMoto ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Classes_SynthComponents_SynthComponentMoto_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
