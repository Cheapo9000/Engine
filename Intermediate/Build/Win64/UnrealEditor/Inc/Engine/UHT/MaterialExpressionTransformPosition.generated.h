// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTransformPosition.h"

#ifdef ENGINE_MaterialExpressionTransformPosition_generated_h
#error "MaterialExpressionTransformPosition.generated.h already included, missing '#pragma once' in MaterialExpressionTransformPosition.h"
#endif
#define ENGINE_MaterialExpressionTransformPosition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTransformPosition *************************************
struct Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTransformPosition(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTransformPosition, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTransformPosition)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTransformPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTransformPosition(UMaterialExpressionTransformPosition&&) = delete; \
	UMaterialExpressionTransformPosition(const UMaterialExpressionTransformPosition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTransformPosition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTransformPosition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTransformPosition) \
	ENGINE_API virtual ~UMaterialExpressionTransformPosition();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_51_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTransformPosition;

// ********** End Class UMaterialExpressionTransformPosition ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTransformPosition_h

// ********** Begin Enum EMaterialPositionTransformSource ******************************************
#define FOREACH_ENUM_EMATERIALPOSITIONTRANSFORMSOURCE(op) \
	op(TRANSFORMPOSSOURCE_Local) \
	op(TRANSFORMPOSSOURCE_World) \
	op(TRANSFORMPOSSOURCE_PeriodicWorld) \
	op(TRANSFORMPOSSOURCE_TranslatedWorld) \
	op(TRANSFORMPOSSOURCE_FirstPersonTranslatedWorld) \
	op(TRANSFORMPOSSOURCE_View) \
	op(TRANSFORMPOSSOURCE_Camera) \
	op(TRANSFORMPOSSOURCE_Particle) \
	op(TRANSFORMPOSSOURCE_Instance) 

enum EMaterialPositionTransformSource : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialPositionTransformSource>();
// ********** End Enum EMaterialPositionTransformSource ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
