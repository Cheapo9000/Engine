// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeMaterialInstanceConstant.h"

#ifdef LANDSCAPE_LandscapeMaterialInstanceConstant_generated_h
#error "LandscapeMaterialInstanceConstant.generated.h already included, missing '#pragma once' in LandscapeMaterialInstanceConstant.h"
#endif
#define LANDSCAPE_LandscapeMaterialInstanceConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandscapeMaterialTextureStreamingInfo ****************************
struct Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeMaterialTextureStreamingInfo;
// ********** End ScriptStruct FLandscapeMaterialTextureStreamingInfo ******************************

// ********** Begin Class ULandscapeMaterialInstanceConstant ***************************************
struct Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_29_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeMaterialInstanceConstant(); \
	friend struct ::Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeMaterialInstanceConstant, UMaterialInstanceConstant, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeMaterialInstanceConstant)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeMaterialInstanceConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeMaterialInstanceConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeMaterialInstanceConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMaterialInstanceConstant); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeMaterialInstanceConstant(ULandscapeMaterialInstanceConstant&&) = delete; \
	ULandscapeMaterialInstanceConstant(const ULandscapeMaterialInstanceConstant&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeMaterialInstanceConstant();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_26_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_29_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeMaterialInstanceConstant;

// ********** End Class ULandscapeMaterialInstanceConstant *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
