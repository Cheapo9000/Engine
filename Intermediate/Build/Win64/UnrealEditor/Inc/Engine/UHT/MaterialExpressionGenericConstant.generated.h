// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionGenericConstant.h"

#ifdef ENGINE_MaterialExpressionGenericConstant_generated_h
#error "MaterialExpressionGenericConstant.generated.h already included, missing '#pragma once' in MaterialExpressionGenericConstant.h"
#endif
#define ENGINE_MaterialExpressionGenericConstant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionGenericConstant ***************************************
struct Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGenericConstant_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionGenericConstant(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionGenericConstant_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionGenericConstant, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionGenericConstant_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionGenericConstant)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionGenericConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionGenericConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionGenericConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionGenericConstant); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionGenericConstant(UMaterialExpressionGenericConstant&&) = delete; \
	UMaterialExpressionGenericConstant(const UMaterialExpressionGenericConstant&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionGenericConstant();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionGenericConstant;

// ********** End Class UMaterialExpressionGenericConstant *****************************************

// ********** Begin Class UMaterialExpressionConstantDouble ****************************************
struct Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstantDouble_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionConstantDouble(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionConstantDouble_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionConstantDouble, UMaterialExpressionGenericConstant, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionConstantDouble_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionConstantDouble)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionConstantDouble(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionConstantDouble) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionConstantDouble); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionConstantDouble); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionConstantDouble(UMaterialExpressionConstantDouble&&) = delete; \
	UMaterialExpressionConstantDouble(const UMaterialExpressionConstantDouble&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionConstantDouble();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionConstantDouble;

// ********** End Class UMaterialExpressionConstantDouble ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGenericConstant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
