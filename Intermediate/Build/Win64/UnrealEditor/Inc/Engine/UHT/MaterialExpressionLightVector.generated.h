// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLightVector.h"

#ifdef ENGINE_MaterialExpressionLightVector_generated_h
#error "MaterialExpressionLightVector.generated.h already included, missing '#pragma once' in MaterialExpressionLightVector.h"
#endif
#define ENGINE_MaterialExpressionLightVector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionLightVector *******************************************
struct Z_Construct_UClass_UMaterialExpressionLightVector_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightVector_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightVector_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLightVector(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLightVector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLightVector_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLightVector, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLightVector_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLightVector)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightVector_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionLightVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLightVector(UMaterialExpressionLightVector&&) = delete; \
	UMaterialExpressionLightVector(const UMaterialExpressionLightVector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionLightVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLightVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLightVector) \
	NO_API virtual ~UMaterialExpressionLightVector();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightVector_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightVector_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightVector_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightVector_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLightVector;

// ********** End Class UMaterialExpressionLightVector *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLightVector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
