// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionConstant2Vector.h"

#ifdef ENGINE_MaterialExpressionConstant2Vector_generated_h
#error "MaterialExpressionConstant2Vector.generated.h already included, missing '#pragma once' in MaterialExpressionConstant2Vector.h"
#endif
#define ENGINE_MaterialExpressionConstant2Vector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionConstant2Vector ***************************************
struct Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant2Vector_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionConstant2Vector(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionConstant2Vector_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionConstant2Vector, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionConstant2Vector_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionConstant2Vector)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant2Vector_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionConstant2Vector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionConstant2Vector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionConstant2Vector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionConstant2Vector); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionConstant2Vector(UMaterialExpressionConstant2Vector&&) = delete; \
	UMaterialExpressionConstant2Vector(const UMaterialExpressionConstant2Vector&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionConstant2Vector();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant2Vector_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant2Vector_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant2Vector_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant2Vector_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionConstant2Vector;

// ********** End Class UMaterialExpressionConstant2Vector *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant2Vector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
