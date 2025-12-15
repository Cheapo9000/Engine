// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSceneColor.h"

#ifdef ENGINE_MaterialExpressionSceneColor_generated_h
#error "MaterialExpressionSceneColor.generated.h already included, missing '#pragma once' in MaterialExpressionSceneColor.h"
#endif
#define ENGINE_MaterialExpressionSceneColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSceneColor ********************************************
struct Z_Construct_UClass_UMaterialExpressionSceneColor_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneColor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneColor(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSceneColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSceneColor, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneColor)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneColor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneColor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSceneColor(UMaterialExpressionSceneColor&&) = delete; \
	UMaterialExpressionSceneColor(const UMaterialExpressionSceneColor&) = delete; \
	NO_API virtual ~UMaterialExpressionSceneColor();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneColor_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneColor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneColor_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneColor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSceneColor;

// ********** End Class UMaterialExpressionSceneColor **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSceneColor_h

// ********** Begin Enum EMaterialSceneAttributeInputMode ******************************************
#define FOREACH_ENUM_EMATERIALSCENEATTRIBUTEINPUTMODE(op) \
	op(EMaterialSceneAttributeInputMode::Coordinates) \
	op(EMaterialSceneAttributeInputMode::OffsetFraction) 

namespace EMaterialSceneAttributeInputMode { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialSceneAttributeInputMode::Type>();
// ********** End Enum EMaterialSceneAttributeInputMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
