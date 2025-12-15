// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapeLayerCoords.h"

#ifdef LANDSCAPE_MaterialExpressionLandscapeLayerCoords_generated_h
#error "MaterialExpressionLandscapeLayerCoords.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeLayerCoords.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeLayerCoords_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLandscapeLayerCoords **********************************
struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLandscapeLayerCoords, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerCoords)


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapeLayerCoords(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerCoords) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapeLayerCoords); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerCoords); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapeLayerCoords(UMaterialExpressionLandscapeLayerCoords&&) = delete; \
	UMaterialExpressionLandscapeLayerCoords(const UMaterialExpressionLandscapeLayerCoords&) = delete; \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapeLayerCoords();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLandscapeLayerCoords;

// ********** End Class UMaterialExpressionLandscapeLayerCoords ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h

// ********** Begin Enum ETerrainCoordMappingType **************************************************
#define FOREACH_ENUM_ETERRAINCOORDMAPPINGTYPE(op) \
	op(TCMT_Auto) \
	op(TCMT_XY) \
	op(TCMT_XZ) \
	op(TCMT_YZ) 

enum ETerrainCoordMappingType : int;
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETerrainCoordMappingType>();
// ********** End Enum ETerrainCoordMappingType ****************************************************

// ********** Begin Enum ELandscapeCustomizedCoordType *********************************************
#define FOREACH_ENUM_ELANDSCAPECUSTOMIZEDCOORDTYPE(op) \
	op(LCCT_None) \
	op(LCCT_CustomUV0) \
	op(LCCT_CustomUV1) \
	op(LCCT_CustomUV2) \
	op(LCCT_WeightMapUV) 

enum ELandscapeCustomizedCoordType : int;
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeCustomizedCoordType>();
// ********** End Enum ELandscapeCustomizedCoordType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
