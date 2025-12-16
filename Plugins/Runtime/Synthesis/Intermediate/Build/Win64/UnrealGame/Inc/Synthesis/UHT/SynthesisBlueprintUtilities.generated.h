// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthesisBlueprintUtilities.h"

#ifdef SYNTHESIS_SynthesisBlueprintUtilities_generated_h
#error "SynthesisBlueprintUtilities.generated.h already included, missing '#pragma once' in SynthesisBlueprintUtilities.h"
#endif
#define SYNTHESIS_SynthesisBlueprintUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USynthesisUtilitiesBlueprintFunctionLibrary ******************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLinearFrequency); \
	DECLARE_FUNCTION(execGetLogFrequency);


struct Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthesisUtilitiesBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USynthesisUtilitiesBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USynthesisUtilitiesBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USynthesisUtilitiesBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynthesisUtilitiesBlueprintFunctionLibrary(USynthesisUtilitiesBlueprintFunctionLibrary&&) = delete; \
	USynthesisUtilitiesBlueprintFunctionLibrary(const USynthesisUtilitiesBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USynthesisUtilitiesBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthesisUtilitiesBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthesisUtilitiesBlueprintFunctionLibrary) \
	SYNTHESIS_API virtual ~USynthesisUtilitiesBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynthesisUtilitiesBlueprintFunctionLibrary;

// ********** End Class USynthesisUtilitiesBlueprintFunctionLibrary ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_SynthesisBlueprintUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
