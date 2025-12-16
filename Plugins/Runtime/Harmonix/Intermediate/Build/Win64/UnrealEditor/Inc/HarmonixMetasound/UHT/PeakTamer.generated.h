// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/Analysis/PeakTamer.h"

#ifdef HARMONIXMETASOUND_PeakTamer_generated_h
#error "PeakTamer.generated.h already included, missing '#pragma once' in PeakTamer.h"
#endif
#define HARMONIXMETASOUND_PeakTamer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHarmonixPeakTamer;
struct FHarmonixPeakTamerSettings;

// ********** Begin ScriptStruct FHarmonixPeakTamerSettings ****************************************
struct Z_Construct_UScriptStruct_FHarmonixPeakTamerSettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHarmonixPeakTamerSettings_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FHarmonixPeakTamerSettings;
// ********** End ScriptStruct FHarmonixPeakTamerSettings ******************************************

// ********** Begin Class UHarmonixPeakTamer *******************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execGetPeak); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execConfigure); \
	DECLARE_FUNCTION(execCreateHarmonixPeakTamer);


struct Z_Construct_UClass_UHarmonixPeakTamer_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UHarmonixPeakTamer_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixPeakTamer(); \
	friend struct ::Z_Construct_UClass_UHarmonixPeakTamer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UHarmonixPeakTamer_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixPeakTamer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UHarmonixPeakTamer_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixPeakTamer)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXMETASOUND_API UHarmonixPeakTamer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixPeakTamer(UHarmonixPeakTamer&&) = delete; \
	UHarmonixPeakTamer(const UHarmonixPeakTamer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMETASOUND_API, UHarmonixPeakTamer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixPeakTamer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHarmonixPeakTamer) \
	HARMONIXMETASOUND_API virtual ~UHarmonixPeakTamer();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_63_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixPeakTamer;

// ********** End Class UHarmonixPeakTamer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Analysis_PeakTamer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
