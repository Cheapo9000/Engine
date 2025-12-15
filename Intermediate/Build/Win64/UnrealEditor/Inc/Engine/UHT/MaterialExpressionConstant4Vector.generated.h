// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionConstant4Vector.h"

#ifdef ENGINE_MaterialExpressionConstant4Vector_generated_h
#error "MaterialExpressionConstant4Vector.generated.h already included, missing '#pragma once' in MaterialExpressionConstant4Vector.h"
#endif
#define ENGINE_MaterialExpressionConstant4Vector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionConstant4Vector ***************************************
struct Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant4Vector_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant4Vector_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionConstant4Vector(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionConstant4Vector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionConstant4Vector_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionConstant4Vector, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionConstant4Vector_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionConstant4Vector)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant4Vector_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionConstant4Vector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionConstant4Vector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionConstant4Vector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionConstant4Vector); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionConstant4Vector(UMaterialExpressionConstant4Vector&&) = delete; \
	UMaterialExpressionConstant4Vector(const UMaterialExpressionConstant4Vector&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionConstant4Vector();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant4Vector_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant4Vector_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant4Vector_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant4Vector_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionConstant4Vector;

// ********** End Class UMaterialExpressionConstant4Vector *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionConstant4Vector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
