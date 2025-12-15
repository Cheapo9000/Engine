// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectOrientation.h"

#ifdef ENGINE_MaterialExpressionObjectOrientation_generated_h
#error "MaterialExpressionObjectOrientation.generated.h already included, missing '#pragma once' in MaterialExpressionObjectOrientation.h"
#endif
#define ENGINE_MaterialExpressionObjectOrientation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionObjectOrientation *************************************
struct Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectOrientation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectOrientation(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionObjectOrientation, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionObjectOrientation_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectOrientation)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectOrientation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionObjectOrientation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectOrientation(UMaterialExpressionObjectOrientation&&) = delete; \
	UMaterialExpressionObjectOrientation(const UMaterialExpressionObjectOrientation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionObjectOrientation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectOrientation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectOrientation) \
	ENGINE_API virtual ~UMaterialExpressionObjectOrientation();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectOrientation_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectOrientation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectOrientation_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectOrientation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionObjectOrientation;

// ********** End Class UMaterialExpressionObjectOrientation ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectOrientation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
