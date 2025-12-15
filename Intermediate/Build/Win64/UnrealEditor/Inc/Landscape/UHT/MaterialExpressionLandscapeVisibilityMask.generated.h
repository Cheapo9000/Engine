// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapeVisibilityMask.h"

#ifdef LANDSCAPE_MaterialExpressionLandscapeVisibilityMask_generated_h
#error "MaterialExpressionLandscapeVisibilityMask.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeVisibilityMask.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeVisibilityMask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLandscapeVisibilityMask *******************************
struct Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeVisibilityMask(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLandscapeVisibilityMask, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeVisibilityMask)


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapeVisibilityMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeVisibilityMask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapeVisibilityMask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeVisibilityMask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapeVisibilityMask(UMaterialExpressionLandscapeVisibilityMask&&) = delete; \
	UMaterialExpressionLandscapeVisibilityMask(const UMaterialExpressionLandscapeVisibilityMask&) = delete; \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapeVisibilityMask();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_15_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_18_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLandscapeVisibilityMask;

// ********** End Class UMaterialExpressionLandscapeVisibilityMask *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
