// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioModulationStyle.h"

#ifdef AUDIOMODULATION_AudioModulationStyle_generated_h
#error "AudioModulationStyle.generated.h already included, missing '#pragma once' in AudioModulationStyle.h"
#endif
#define AUDIOMODULATION_AudioModulationStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;

// ********** Begin Class UAudioModulationStyle ****************************************************
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetParameterColor); \
	DECLARE_FUNCTION(execGetPatchColor); \
	DECLARE_FUNCTION(execGetControlBusMixColor); \
	DECLARE_FUNCTION(execGetControlBusColor); \
	DECLARE_FUNCTION(execGetModulationGeneratorColor);


struct Z_Construct_UClass_UAudioModulationStyle_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationStyle_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioModulationStyle(); \
	friend struct ::Z_Construct_UClass_UAudioModulationStyle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_UAudioModulationStyle_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioModulationStyle, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_UAudioModulationStyle_NoRegister) \
	DECLARE_SERIALIZER(UAudioModulationStyle)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API UAudioModulationStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioModulationStyle(UAudioModulationStyle&&) = delete; \
	UAudioModulationStyle(const UAudioModulationStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, UAudioModulationStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioModulationStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioModulationStyle) \
	AUDIOMODULATION_API virtual ~UAudioModulationStyle();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioModulationStyle;

// ********** End Class UAudioModulationStyle ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationStyle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
