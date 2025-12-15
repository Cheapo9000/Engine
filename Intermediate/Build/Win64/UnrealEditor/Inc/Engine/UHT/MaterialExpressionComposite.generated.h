// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionComposite.h"

#ifdef ENGINE_MaterialExpressionComposite_generated_h
#error "MaterialExpressionComposite.generated.h already included, missing '#pragma once' in MaterialExpressionComposite.h"
#endif
#define ENGINE_MaterialExpressionComposite_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionComposite *********************************************
struct Z_Construct_UClass_UMaterialExpressionComposite_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComposite_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComposite_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionComposite(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionComposite_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionComposite_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionComposite, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionComposite_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionComposite)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComposite_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionComposite(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionComposite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionComposite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionComposite); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionComposite(UMaterialExpressionComposite&&) = delete; \
	UMaterialExpressionComposite(const UMaterialExpressionComposite&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionComposite();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComposite_h_48_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComposite_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComposite_h_51_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComposite_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionComposite;

// ********** End Class UMaterialExpressionComposite ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComposite_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
