// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDecalMipmapLevel.h"

#ifdef ENGINE_MaterialExpressionDecalMipmapLevel_generated_h
#error "MaterialExpressionDecalMipmapLevel.generated.h already included, missing '#pragma once' in MaterialExpressionDecalMipmapLevel.h"
#endif
#define ENGINE_MaterialExpressionDecalMipmapLevel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDecalMipmapLevel **************************************
struct Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalMipmapLevel_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDecalMipmapLevel(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDecalMipmapLevel, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDecalMipmapLevel)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalMipmapLevel_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDecalMipmapLevel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDecalMipmapLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDecalMipmapLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDecalMipmapLevel); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDecalMipmapLevel(UMaterialExpressionDecalMipmapLevel&&) = delete; \
	UMaterialExpressionDecalMipmapLevel(const UMaterialExpressionDecalMipmapLevel&) = delete; \
	NO_API virtual ~UMaterialExpressionDecalMipmapLevel();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalMipmapLevel_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalMipmapLevel_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalMipmapLevel_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalMipmapLevel_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDecalMipmapLevel;

// ********** End Class UMaterialExpressionDecalMipmapLevel ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDecalMipmapLevel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
