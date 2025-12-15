// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCloudLayer.h"

#ifdef ENGINE_MaterialExpressionCloudLayer_generated_h
#error "MaterialExpressionCloudLayer.generated.h already included, missing '#pragma once' in MaterialExpressionCloudLayer.h"
#endif
#define ENGINE_MaterialExpressionCloudLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCloudSampleAttribute **********************************
struct Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCloudLayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCloudSampleAttribute(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCloudSampleAttribute, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCloudSampleAttribute_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCloudSampleAttribute)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCloudLayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionCloudSampleAttribute(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCloudSampleAttribute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionCloudSampleAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCloudSampleAttribute); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCloudSampleAttribute(UMaterialExpressionCloudSampleAttribute&&) = delete; \
	UMaterialExpressionCloudSampleAttribute(const UMaterialExpressionCloudSampleAttribute&) = delete; \
	NO_API virtual ~UMaterialExpressionCloudSampleAttribute();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCloudLayer_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCloudLayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCloudLayer_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCloudLayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCloudSampleAttribute;

// ********** End Class UMaterialExpressionCloudSampleAttribute ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCloudLayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
