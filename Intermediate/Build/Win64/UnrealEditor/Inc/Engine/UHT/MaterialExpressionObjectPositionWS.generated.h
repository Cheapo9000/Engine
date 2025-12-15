// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectPositionWS.h"

#ifdef ENGINE_MaterialExpressionObjectPositionWS_generated_h
#error "MaterialExpressionObjectPositionWS.generated.h already included, missing '#pragma once' in MaterialExpressionObjectPositionWS.h"
#endif
#define ENGINE_MaterialExpressionObjectPositionWS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionObjectPositionWS **************************************
struct Z_Construct_UClass_UMaterialExpressionObjectPositionWS_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectPositionWS_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectPositionWS_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectPositionWS(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionObjectPositionWS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionObjectPositionWS_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionObjectPositionWS, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionObjectPositionWS_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectPositionWS)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectPositionWS_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionObjectPositionWS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectPositionWS(UMaterialExpressionObjectPositionWS&&) = delete; \
	UMaterialExpressionObjectPositionWS(const UMaterialExpressionObjectPositionWS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionObjectPositionWS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectPositionWS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectPositionWS) \
	ENGINE_API virtual ~UMaterialExpressionObjectPositionWS();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectPositionWS_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectPositionWS_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectPositionWS_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectPositionWS_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionObjectPositionWS;

// ********** End Class UMaterialExpressionObjectPositionWS ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectPositionWS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
