// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMaterialAttributeLayers.h"

#ifdef ENGINE_MaterialExpressionMaterialAttributeLayers_generated_h
#error "MaterialExpressionMaterialAttributeLayers.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialAttributeLayers.h"
#endif
#define ENGINE_MaterialExpressionMaterialAttributeLayers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMaterialAttributeLayers *******************************
struct Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialAttributeLayers_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMaterialAttributeLayers, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialAttributeLayers)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialAttributeLayers_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialAttributeLayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialAttributeLayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialAttributeLayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialAttributeLayers); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialAttributeLayers(UMaterialExpressionMaterialAttributeLayers&&) = delete; \
	UMaterialExpressionMaterialAttributeLayers(const UMaterialExpressionMaterialAttributeLayers&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionMaterialAttributeLayers();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialAttributeLayers_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialAttributeLayers_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialAttributeLayers_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialAttributeLayers_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMaterialAttributeLayers;

// ********** End Class UMaterialExpressionMaterialAttributeLayers *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMaterialAttributeLayers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
