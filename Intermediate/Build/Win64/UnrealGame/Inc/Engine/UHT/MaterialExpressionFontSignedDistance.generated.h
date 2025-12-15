// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFontSignedDistance.h"

#ifdef ENGINE_MaterialExpressionFontSignedDistance_generated_h
#error "MaterialExpressionFontSignedDistance.generated.h already included, missing '#pragma once' in MaterialExpressionFontSignedDistance.h"
#endif
#define ENGINE_MaterialExpressionFontSignedDistance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFontSignedDistance ************************************
struct Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSignedDistance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFontSignedDistance(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFontSignedDistance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFontSignedDistance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFontSignedDistance, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFontSignedDistance_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFontSignedDistance)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFontSignedDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFontSignedDistance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFontSignedDistance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFontSignedDistance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFontSignedDistance(UMaterialExpressionFontSignedDistance&&) = delete; \
	UMaterialExpressionFontSignedDistance(const UMaterialExpressionFontSignedDistance&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionFontSignedDistance();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFontSignedDistance;

// ********** End Class UMaterialExpressionFontSignedDistance **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFontSignedDistance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
