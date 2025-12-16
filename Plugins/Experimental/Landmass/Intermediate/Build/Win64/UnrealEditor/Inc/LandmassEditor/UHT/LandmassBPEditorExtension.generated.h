// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandmassBPEditorExtension.h"

#ifdef LANDMASSEDITOR_LandmassBPEditorExtension_generated_h
#error "LandmassBPEditorExtension.generated.h already included, missing '#pragma once' in LandmassBPEditorExtension.h"
#endif
#define LANDMASSEDITOR_LandmassBPEditorExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FLandmassLandscapeInfo;

// ********** Begin Class ULandmassBlueprintFunctionLibrary ****************************************
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execForceUpdateTexture); \
	DECLARE_FUNCTION(execWorldExtentsToCanvasCoordinates); \
	DECLARE_FUNCTION(execCombineWorldExtents); \
	DECLARE_FUNCTION(execGetCursorWorldRay);


struct Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics;
LANDMASSEDITOR_API UClass* Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandmassBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDMASSEDITOR_API UClass* ::Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandmassBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandmassEditor"), Z_Construct_UClass_ULandmassBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULandmassBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandmassBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandmassBlueprintFunctionLibrary(ULandmassBlueprintFunctionLibrary&&) = delete; \
	ULandmassBlueprintFunctionLibrary(const ULandmassBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandmassBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandmassBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandmassBlueprintFunctionLibrary) \
	NO_API virtual ~ULandmassBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandmassBlueprintFunctionLibrary;

// ********** End Class ULandmassBlueprintFunctionLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Landmass_Source_Editor_Public_LandmassBPEditorExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
