// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/TimeSignature.h"

#ifdef HARMONIXMETASOUND_TimeSignature_generated_h
#error "TimeSignature.generated.h already included, missing '#pragma once' in TimeSignature.h"
#endif
#define HARMONIXMETASOUND_TimeSignature_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMetaSoundOutput;
struct FTimeSignature;

// ********** Begin Class UTimeSignatureBlueprintLibrary *******************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimeSignature); \
	DECLARE_FUNCTION(execIsTimeSignature);


struct Z_Construct_UClass_UTimeSignatureBlueprintLibrary_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UTimeSignatureBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeSignatureBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UTimeSignatureBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UTimeSignatureBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimeSignatureBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UTimeSignatureBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTimeSignatureBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeSignatureBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimeSignatureBlueprintLibrary(UTimeSignatureBlueprintLibrary&&) = delete; \
	UTimeSignatureBlueprintLibrary(const UTimeSignatureBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeSignatureBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSignatureBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeSignatureBlueprintLibrary) \
	NO_API virtual ~UTimeSignatureBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimeSignatureBlueprintLibrary;

// ********** End Class UTimeSignatureBlueprintLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_TimeSignature_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
