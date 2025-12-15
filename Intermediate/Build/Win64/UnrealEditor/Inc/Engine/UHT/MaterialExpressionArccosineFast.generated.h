// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionArccosineFast.h"

#ifdef ENGINE_MaterialExpressionArccosineFast_generated_h
#error "MaterialExpressionArccosineFast.generated.h already included, missing '#pragma once' in MaterialExpressionArccosineFast.h"
#endif
#define ENGINE_MaterialExpressionArccosineFast_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionArccosineFast *****************************************
struct Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArccosineFast_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionArccosineFast(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionArccosineFast_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionArccosineFast_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionArccosineFast, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionArccosineFast_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionArccosineFast)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionArccosineFast(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionArccosineFast(UMaterialExpressionArccosineFast&&) = delete; \
	UMaterialExpressionArccosineFast(const UMaterialExpressionArccosineFast&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionArccosineFast); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionArccosineFast); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionArccosineFast) \
	NO_API virtual ~UMaterialExpressionArccosineFast();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionArccosineFast;

// ********** End Class UMaterialExpressionArccosineFast *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionArccosineFast_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
