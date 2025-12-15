// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAtmosphericLightVector.h"

#ifdef ENGINE_MaterialExpressionAtmosphericLightVector_generated_h
#error "MaterialExpressionAtmosphericLightVector.generated.h already included, missing '#pragma once' in MaterialExpressionAtmosphericLightVector.h"
#endif
#define ENGINE_MaterialExpressionAtmosphericLightVector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionAtmosphericLightVector ********************************
struct Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightVector_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAtmosphericLightVector(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionAtmosphericLightVector, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionAtmosphericLightVector_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionAtmosphericLightVector)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightVector_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionAtmosphericLightVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionAtmosphericLightVector(UMaterialExpressionAtmosphericLightVector&&) = delete; \
	UMaterialExpressionAtmosphericLightVector(const UMaterialExpressionAtmosphericLightVector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionAtmosphericLightVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAtmosphericLightVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAtmosphericLightVector) \
	NO_API virtual ~UMaterialExpressionAtmosphericLightVector();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightVector_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightVector_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightVector_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightVector_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionAtmosphericLightVector;

// ********** End Class UMaterialExpressionAtmosphericLightVector **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAtmosphericLightVector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
