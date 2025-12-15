// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapeLayerBlend.h"

#ifdef LANDSCAPE_MaterialExpressionLandscapeLayerBlend_generated_h
#error "MaterialExpressionLandscapeLayerBlend.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeLayerBlend.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeLayerBlend_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLayerBlendInput **************************************************
struct Z_Construct_UScriptStruct_FLayerBlendInput_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLayerBlendInput_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLayerBlendInput;
// ********** End ScriptStruct FLayerBlendInput ****************************************************

// ********** Begin Class UMaterialExpressionLandscapeLayerBlend ***********************************
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_66_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionLandscapeLayerBlend, LANDSCAPE_API)


struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLandscapeLayerBlend, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerBlend) \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_66_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapeLayerBlend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerBlend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapeLayerBlend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerBlend); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapeLayerBlend(UMaterialExpressionLandscapeLayerBlend&&) = delete; \
	UMaterialExpressionLandscapeLayerBlend(const UMaterialExpressionLandscapeLayerBlend&) = delete; \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapeLayerBlend();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_63_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_66_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLandscapeLayerBlend;

// ********** End Class UMaterialExpressionLandscapeLayerBlend *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h

// ********** Begin Enum ELandscapeLayerBlendType **************************************************
#define FOREACH_ENUM_ELANDSCAPELAYERBLENDTYPE(op) \
	op(LB_WeightBlend) \
	op(LB_AlphaBlend) \
	op(LB_HeightBlend) 

enum ELandscapeLayerBlendType : int;
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeLayerBlendType>();
// ********** End Enum ELandscapeLayerBlendType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
