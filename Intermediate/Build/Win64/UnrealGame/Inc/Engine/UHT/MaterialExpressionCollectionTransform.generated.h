// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCollectionTransform.h"

#ifdef ENGINE_MaterialExpressionCollectionTransform_generated_h
#error "MaterialExpressionCollectionTransform.generated.h already included, missing '#pragma once' in MaterialExpressionCollectionTransform.h"
#endif
#define ENGINE_MaterialExpressionCollectionTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCollectionTransform ***********************************
struct Z_Construct_UClass_UMaterialExpressionCollectionTransform_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCollectionTransform_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCollectionTransform_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCollectionTransform(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCollectionTransform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCollectionTransform_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCollectionTransform, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCollectionTransform_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCollectionTransform)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCollectionTransform_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCollectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCollectionTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCollectionTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCollectionTransform); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCollectionTransform(UMaterialExpressionCollectionTransform&&) = delete; \
	UMaterialExpressionCollectionTransform(const UMaterialExpressionCollectionTransform&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionCollectionTransform();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCollectionTransform_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCollectionTransform_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCollectionTransform_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCollectionTransform_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCollectionTransform;

// ********** End Class UMaterialExpressionCollectionTransform *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCollectionTransform_h

// ********** Begin Enum EParameterCollectionTransformType *****************************************
#define FOREACH_ENUM_EPARAMETERCOLLECTIONTRANSFORMTYPE(op) \
	op(EParameterCollectionTransformType::Position) \
	op(EParameterCollectionTransformType::Vector) \
	op(EParameterCollectionTransformType::Projection) \
	op(EParameterCollectionTransformType::LocalToWorld) \
	op(EParameterCollectionTransformType::WorldToLocal) 

enum class EParameterCollectionTransformType : uint8;
template<> struct TIsUEnumClass<EParameterCollectionTransformType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParameterCollectionTransformType>();
// ********** End Enum EParameterCollectionTransformType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
