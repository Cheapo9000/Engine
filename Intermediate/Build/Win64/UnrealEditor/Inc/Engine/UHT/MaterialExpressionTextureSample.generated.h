// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureSample.h"

#ifdef ENGINE_MaterialExpressionTextureSample_generated_h
#error "MaterialExpressionTextureSample.generated.h already included, missing '#pragma once' in MaterialExpressionTextureSample.h"
#endif
#define ENGINE_MaterialExpressionTextureSample_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTextureSample *****************************************
struct Z_Construct_UClass_UMaterialExpressionTextureSample_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSample_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureSample(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTextureSample_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTextureSample, UMaterialExpressionTextureBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureSample)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSample_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureSample); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureSample(UMaterialExpressionTextureSample&&) = delete; \
	UMaterialExpressionTextureSample(const UMaterialExpressionTextureSample&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionTextureSample();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSample_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSample_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSample_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSample_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTextureSample;

// ********** End Class UMaterialExpressionTextureSample *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureSample_h

// ********** Begin Enum ETextureGatherMode ********************************************************
#define FOREACH_ENUM_ETEXTUREGATHERMODE(op) \
	op(TGM_None) \
	op(TGM_Red) \
	op(TGM_Green) \
	op(TGM_Blue) \
	op(TGM_Alpha) 

enum ETextureGatherMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureGatherMode>();
// ********** End Enum ETextureGatherMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
