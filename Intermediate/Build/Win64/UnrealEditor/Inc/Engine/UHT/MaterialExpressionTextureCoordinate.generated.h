// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureCoordinate.h"

#ifdef ENGINE_MaterialExpressionTextureCoordinate_generated_h
#error "MaterialExpressionTextureCoordinate.generated.h already included, missing '#pragma once' in MaterialExpressionTextureCoordinate.h"
#endif
#define ENGINE_MaterialExpressionTextureCoordinate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTextureCoordinate *************************************
struct Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureCoordinate(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTextureCoordinate, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureCoordinate)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureCoordinate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureCoordinate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureCoordinate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureCoordinate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureCoordinate(UMaterialExpressionTextureCoordinate&&) = delete; \
	UMaterialExpressionTextureCoordinate(const UMaterialExpressionTextureCoordinate&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionTextureCoordinate();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTextureCoordinate;

// ********** End Class UMaterialExpressionTextureCoordinate ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureCoordinate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
