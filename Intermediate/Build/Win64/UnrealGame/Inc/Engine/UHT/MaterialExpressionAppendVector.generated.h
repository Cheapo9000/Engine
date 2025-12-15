// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAppendVector.h"

#ifdef ENGINE_MaterialExpressionAppendVector_generated_h
#error "MaterialExpressionAppendVector.generated.h already included, missing '#pragma once' in MaterialExpressionAppendVector.h"
#endif
#define ENGINE_MaterialExpressionAppendVector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionAppendVector ******************************************
struct Z_Construct_UClass_UMaterialExpressionAppendVector_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAppendVector_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAppendVector_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAppendVector(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionAppendVector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionAppendVector_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionAppendVector, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionAppendVector_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionAppendVector)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAppendVector_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionAppendVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionAppendVector(UMaterialExpressionAppendVector&&) = delete; \
	UMaterialExpressionAppendVector(const UMaterialExpressionAppendVector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionAppendVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAppendVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAppendVector) \
	ENGINE_API virtual ~UMaterialExpressionAppendVector();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAppendVector_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAppendVector_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAppendVector_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAppendVector_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionAppendVector;

// ********** End Class UMaterialExpressionAppendVector ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionAppendVector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
