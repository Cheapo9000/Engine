// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthComponents/SynthComponentToneGenerator.h"

#ifdef SYNTHESIS_SynthComponentToneGenerator_generated_h
#error "SynthComponentToneGenerator.generated.h already included, missing '#pragma once' in SynthComponentToneGenerator.h"
#endif
#define SYNTHESIS_SynthComponentToneGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USynthComponentToneGenerator *********************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execSetFrequency);


struct Z_Construct_UClass_USynthComponentToneGenerator_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USynthComponentToneGenerator_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponentToneGenerator(); \
	friend struct ::Z_Construct_UClass_USynthComponentToneGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USynthComponentToneGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(USynthComponentToneGenerator, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USynthComponentToneGenerator_NoRegister) \
	DECLARE_SERIALIZER(USynthComponentToneGenerator)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynthComponentToneGenerator(USynthComponentToneGenerator&&) = delete; \
	USynthComponentToneGenerator(const USynthComponentToneGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USynthComponentToneGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponentToneGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponentToneGenerator)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynthComponentToneGenerator;

// ********** End Class USynthComponentToneGenerator ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentToneGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
