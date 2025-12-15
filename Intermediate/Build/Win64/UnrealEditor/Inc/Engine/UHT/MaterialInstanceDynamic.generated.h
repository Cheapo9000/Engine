// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialInstanceDynamic.h"

#ifdef ENGINE_MaterialInstanceDynamic_generated_h
#error "MaterialInstanceDynamic.generated.h already included, missing '#pragma once' in MaterialInstanceDynamic.h"
#endif
#define ENGINE_MaterialInstanceDynamic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstance;
class UMaterialInterface;
class URuntimeVirtualTexture;
class USparseVolumeTexture;
class UTexture;
class UTextureCollection;
struct FLinearColor;
struct FMaterialParameterInfo;

// ********** Begin Class UMaterialInstanceDynamic *************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCopyParameterOverrides); \
	DECLARE_FUNCTION(execCopyInterpParameters); \
	DECLARE_FUNCTION(execK2_CopyMaterialInstanceParameters); \
	DECLARE_FUNCTION(execK2_InterpolateMaterialInstanceParams); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValueByInfo); \
	DECLARE_FUNCTION(execSetDoubleVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureCollectionParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureCollectionParameterValueByInfo); \
	DECLARE_FUNCTION(execSetTextureCollectionParameterValueByInfo); \
	DECLARE_FUNCTION(execSetTextureCollectionParameterValue); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue); \
	DECLARE_FUNCTION(execSetSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execSetRuntimeVirtualTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execSetRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execSetTextureParameterValueByInfo); \
	DECLARE_FUNCTION(execSetTextureParameterValue); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterByIndex); \
	DECLARE_FUNCTION(execInitializeScalarParameterAndGetIndex); \
	DECLARE_FUNCTION(execSetScalarParameterValueByInfo); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceDynamic(); \
	friend struct ::Z_Construct_UClass_UMaterialInstanceDynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialInstanceDynamic, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister) \
	DECLARE_SERIALIZER(UMaterialInstanceDynamic)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceDynamic); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialInstanceDynamic(UMaterialInstanceDynamic&&) = delete; \
	UMaterialInstanceDynamic(const UMaterialInstanceDynamic&) = delete; \
	ENGINE_API virtual ~UMaterialInstanceDynamic();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialInstanceDynamic;

// ********** End Class UMaterialInstanceDynamic ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialInstanceDynamic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
