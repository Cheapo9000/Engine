// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTransform.h"

#ifdef ENGINE_MaterialExpressionTransform_generated_h
#error "MaterialExpressionTransform.generated.h already included, missing '#pragma once' in MaterialExpressionTransform.h"
#endif
#define ENGINE_MaterialExpressionTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTransform *********************************************
struct Z_Construct_UClass_UMaterialExpressionTransform_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransform_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransform_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTransform(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTransform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTransform_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTransform, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTransform_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTransform)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransform_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTransform(UMaterialExpressionTransform&&) = delete; \
	UMaterialExpressionTransform(const UMaterialExpressionTransform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTransform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTransform) \
	ENGINE_API virtual ~UMaterialExpressionTransform();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransform_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransform_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransform_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransform_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTransform;

// ********** End Class UMaterialExpressionTransform ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransform_h

// ********** Begin Enum EMaterialVectorCoordTransformSource ***************************************
#define FOREACH_ENUM_EMATERIALVECTORCOORDTRANSFORMSOURCE(op) \
	op(TRANSFORMSOURCE_Tangent) \
	op(TRANSFORMSOURCE_Local) \
	op(TRANSFORMSOURCE_World) \
	op(TRANSFORMSOURCE_View) \
	op(TRANSFORMSOURCE_Camera) \
	op(TRANSFORMSOURCE_ParticleWorld) \
	op(TRANSFORMSOURCE_Instance) 

enum EMaterialVectorCoordTransformSource : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialVectorCoordTransformSource>();
// ********** End Enum EMaterialVectorCoordTransformSource *****************************************

// ********** Begin Enum EMaterialVectorCoordTransform *********************************************
#define FOREACH_ENUM_EMATERIALVECTORCOORDTRANSFORM(op) \
	op(TRANSFORM_Tangent) \
	op(TRANSFORM_Local) \
	op(TRANSFORM_World) \
	op(TRANSFORM_View) \
	op(TRANSFORM_Camera) \
	op(TRANSFORM_ParticleWorld) \
	op(TRANSFORM_Instance) 

enum EMaterialVectorCoordTransform : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialVectorCoordTransform>();
// ********** End Enum EMaterialVectorCoordTransform ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
