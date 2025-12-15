// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMakeMaterialAttributes.h"

#ifdef ENGINE_MaterialExpressionMakeMaterialAttributes_generated_h
#error "MaterialExpressionMakeMaterialAttributes.generated.h already included, missing '#pragma once' in MaterialExpressionMakeMaterialAttributes.h"
#endif
#define ENGINE_MaterialExpressionMakeMaterialAttributes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMakeMaterialAttributes ********************************
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h_15_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionMakeMaterialAttributes, ENGINE_API)


struct Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMakeMaterialAttributes(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMakeMaterialAttributes, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMakeMaterialAttributes_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMakeMaterialAttributes) \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMakeMaterialAttributes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMakeMaterialAttributes(UMaterialExpressionMakeMaterialAttributes&&) = delete; \
	UMaterialExpressionMakeMaterialAttributes(const UMaterialExpressionMakeMaterialAttributes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMakeMaterialAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMakeMaterialAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMakeMaterialAttributes) \
	ENGINE_API virtual ~UMaterialExpressionMakeMaterialAttributes();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMakeMaterialAttributes;

// ********** End Class UMaterialExpressionMakeMaterialAttributes **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMakeMaterialAttributes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
