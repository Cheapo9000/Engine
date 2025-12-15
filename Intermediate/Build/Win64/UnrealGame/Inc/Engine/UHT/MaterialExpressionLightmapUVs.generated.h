// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLightmapUVs.h"

#ifdef ENGINE_MaterialExpressionLightmapUVs_generated_h
#error "MaterialExpressionLightmapUVs.generated.h already included, missing '#pragma once' in MaterialExpressionLightmapUVs.h"
#endif
#define ENGINE_MaterialExpressionLightmapUVs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLightmapUVs *******************************************
struct Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmapUVs_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLightmapUVs(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLightmapUVs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLightmapUVs_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLightmapUVs, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLightmapUVs_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLightmapUVs)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionLightmapUVs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLightmapUVs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionLightmapUVs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLightmapUVs); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLightmapUVs(UMaterialExpressionLightmapUVs&&) = delete; \
	UMaterialExpressionLightmapUVs(const UMaterialExpressionLightmapUVs&) = delete; \
	NO_API virtual ~UMaterialExpressionLightmapUVs();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLightmapUVs;

// ********** End Class UMaterialExpressionLightmapUVs *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightmapUVs_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
