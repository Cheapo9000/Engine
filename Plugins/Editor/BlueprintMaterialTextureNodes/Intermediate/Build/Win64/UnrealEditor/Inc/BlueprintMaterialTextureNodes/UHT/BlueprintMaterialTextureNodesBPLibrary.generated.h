// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintMaterialTextureNodesBPLibrary.h"

#ifdef BLUEPRINTMATERIALTEXTURENODES_BlueprintMaterialTextureNodesBPLibrary_generated_h
#error "BlueprintMaterialTextureNodesBPLibrary.generated.h already included, missing '#pragma once' in BlueprintMaterialTextureNodesBPLibrary.h"
#endif
#define BLUEPRINTMATERIALTEXTURENODES_BlueprintMaterialTextureNodesBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceConstant;
class UMaterialInterface;
class UTexture2D;
class UTextureRenderTarget2D;
struct FLinearColor;

// ********** Begin Class UBlueprintMaterialTextureNodesBPLibrary **********************************
#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_36_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMICDitheredLODTransition_EditorOnly); \
	DECLARE_FUNCTION(execSetMICIsThinSurface_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTwoSided_EditorOnly); \
	DECLARE_FUNCTION(execSetMICBlendMode_EditorOnly); \
	DECLARE_FUNCTION(execSetMICShadingModel_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTextureParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICVectorParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICScalarParam_EditorOnly); \
	DECLARE_FUNCTION(execUpdateMIC); \
	DECLARE_FUNCTION(execCreateMIC_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleUV_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleRectangle_EditorOnly); \
	DECLARE_FUNCTION(execTexture2D_SampleUV_EditorOnly);


struct Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics;
BLUEPRINTMATERIALTEXTURENODES_API UClass* Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_NoRegister();

#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintMaterialTextureNodesBPLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTMATERIALTEXTURENODES_API UClass* ::Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintMaterialTextureNodesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintMaterialTextureNodes"), Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintMaterialTextureNodesBPLibrary)


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTMATERIALTEXTURENODES_API UBlueprintMaterialTextureNodesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMaterialTextureNodesBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTMATERIALTEXTURENODES_API, UBlueprintMaterialTextureNodesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMaterialTextureNodesBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintMaterialTextureNodesBPLibrary(UBlueprintMaterialTextureNodesBPLibrary&&) = delete; \
	UBlueprintMaterialTextureNodesBPLibrary(const UBlueprintMaterialTextureNodesBPLibrary&) = delete; \
	BLUEPRINTMATERIALTEXTURENODES_API virtual ~UBlueprintMaterialTextureNodesBPLibrary();


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_33_PROLOG
#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_36_INCLASS \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintMaterialTextureNodesBPLibrary;

// ********** End Class UBlueprintMaterialTextureNodesBPLibrary ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
