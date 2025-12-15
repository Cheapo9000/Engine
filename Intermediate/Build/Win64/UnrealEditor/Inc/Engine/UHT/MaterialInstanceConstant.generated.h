// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInstanceConstant.h"

#ifdef ENGINE_MaterialInstanceConstant_generated_h
#error "MaterialInstanceConstant.generated.h already included, missing '#pragma once' in MaterialInstanceConstant.h"
#endif
#define ENGINE_MaterialInstanceConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTexture;
class UTextureCollection;
struct FLinearColor;

// ********** Begin Class UMaterialInstanceConstant ************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureCollectionParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSetNaniteOverrideMaterial);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMaterialInstanceConstant_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceConstant(); \
	friend struct ::Z_Construct_UClass_UMaterialInstanceConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialInstanceConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialInstanceConstant, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister) \
	DECLARE_SERIALIZER(UMaterialInstanceConstant)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceConstant); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialInstanceConstant(UMaterialInstanceConstant&&) = delete; \
	UMaterialInstanceConstant(const UMaterialInstanceConstant&) = delete; \
	ENGINE_API virtual ~UMaterialInstanceConstant();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialInstanceConstant;

// ********** End Class UMaterialInstanceConstant **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
