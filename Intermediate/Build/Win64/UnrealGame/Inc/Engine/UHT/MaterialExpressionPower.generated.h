// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPower.h"

#ifdef ENGINE_MaterialExpressionPower_generated_h
#error "MaterialExpressionPower.generated.h already included, missing '#pragma once' in MaterialExpressionPower.h"
#endif
#define ENGINE_MaterialExpressionPower_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPower *************************************************
struct Z_Construct_UClass_UMaterialExpressionPower_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPower_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPower_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPower(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPower_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPower_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPower, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPower_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPower)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPower_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPower(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPower(UMaterialExpressionPower&&) = delete; \
	UMaterialExpressionPower(const UMaterialExpressionPower&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPower); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPower) \
	ENGINE_API virtual ~UMaterialExpressionPower();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPower_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPower_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPower_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPower_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPower;

// ********** End Class UMaterialExpressionPower ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPower_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
