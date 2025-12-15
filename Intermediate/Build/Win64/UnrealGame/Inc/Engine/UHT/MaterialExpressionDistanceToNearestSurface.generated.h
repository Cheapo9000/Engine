// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDistanceToNearestSurface.h"

#ifdef ENGINE_MaterialExpressionDistanceToNearestSurface_generated_h
#error "MaterialExpressionDistanceToNearestSurface.generated.h already included, missing '#pragma once' in MaterialExpressionDistanceToNearestSurface.h"
#endif
#define ENGINE_MaterialExpressionDistanceToNearestSurface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDistanceToNearestSurface ******************************
struct Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceToNearestSurface_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDistanceToNearestSurface(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDistanceToNearestSurface, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDistanceToNearestSurface)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceToNearestSurface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDistanceToNearestSurface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDistanceToNearestSurface(UMaterialExpressionDistanceToNearestSurface&&) = delete; \
	UMaterialExpressionDistanceToNearestSurface(const UMaterialExpressionDistanceToNearestSurface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDistanceToNearestSurface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDistanceToNearestSurface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDistanceToNearestSurface) \
	NO_API virtual ~UMaterialExpressionDistanceToNearestSurface();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceToNearestSurface_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceToNearestSurface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceToNearestSurface_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceToNearestSurface_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDistanceToNearestSurface;

// ********** End Class UMaterialExpressionDistanceToNearestSurface ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDistanceToNearestSurface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
