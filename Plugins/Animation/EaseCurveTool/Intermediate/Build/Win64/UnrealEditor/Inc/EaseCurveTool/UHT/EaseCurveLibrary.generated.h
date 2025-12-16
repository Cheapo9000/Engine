// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EaseCurveLibrary.h"

#ifdef EASECURVETOOL_EaseCurveLibrary_generated_h
#error "EaseCurveLibrary.generated.h already included, missing '#pragma once' in EaseCurveLibrary.h"
#endif
#define EASECURVETOOL_EaseCurveLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEaseCurveLibrary ********************************************************
struct Z_Construct_UClass_UEaseCurveLibrary_Statics;
EASECURVETOOL_API UClass* Z_Construct_UClass_UEaseCurveLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Public_EaseCurveLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEaseCurveLibrary(); \
	friend struct ::Z_Construct_UClass_UEaseCurveLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EASECURVETOOL_API UClass* ::Z_Construct_UClass_UEaseCurveLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEaseCurveLibrary, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EaseCurveTool"), Z_Construct_UClass_UEaseCurveLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEaseCurveLibrary)


#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Public_EaseCurveLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EASECURVETOOL_API UEaseCurveLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEaseCurveLibrary(UEaseCurveLibrary&&) = delete; \
	UEaseCurveLibrary(const UEaseCurveLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EASECURVETOOL_API, UEaseCurveLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEaseCurveLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEaseCurveLibrary) \
	EASECURVETOOL_API virtual ~UEaseCurveLibrary();


#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Public_EaseCurveLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Public_EaseCurveLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Public_EaseCurveLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Public_EaseCurveLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEaseCurveLibrary;

// ********** End Class UEaseCurveLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Public_EaseCurveLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
