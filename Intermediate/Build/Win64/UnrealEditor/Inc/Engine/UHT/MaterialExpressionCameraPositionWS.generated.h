// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionCameraPositionWS.h"

#ifdef ENGINE_MaterialExpressionCameraPositionWS_generated_h
#error "MaterialExpressionCameraPositionWS.generated.h already included, missing '#pragma once' in MaterialExpressionCameraPositionWS.h"
#endif
#define ENGINE_MaterialExpressionCameraPositionWS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionCameraPositionWS **************************************
struct Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCameraPositionWS_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCameraPositionWS(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionCameraPositionWS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionCameraPositionWS_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionCameraPositionWS, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionCameraPositionWS_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionCameraPositionWS)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCameraPositionWS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionCameraPositionWS(UMaterialExpressionCameraPositionWS&&) = delete; \
	UMaterialExpressionCameraPositionWS(const UMaterialExpressionCameraPositionWS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCameraPositionWS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCameraPositionWS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCameraPositionWS) \
	ENGINE_API virtual ~UMaterialExpressionCameraPositionWS();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionCameraPositionWS;

// ********** End Class UMaterialExpressionCameraPositionWS ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionCameraPositionWS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
