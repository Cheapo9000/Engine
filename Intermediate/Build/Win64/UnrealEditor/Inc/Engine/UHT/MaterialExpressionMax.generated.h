// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMax.h"

#ifdef ENGINE_MaterialExpressionMax_generated_h
#error "MaterialExpressionMax.generated.h already included, missing '#pragma once' in MaterialExpressionMax.h"
#endif
#define ENGINE_MaterialExpressionMax_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionMax ***************************************************
struct Z_Construct_UClass_UMaterialExpressionMax_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMax_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMax_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMax(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionMax_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionMax_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionMax, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionMax_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionMax)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMax_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMax(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionMax(UMaterialExpressionMax&&) = delete; \
	UMaterialExpressionMax(const UMaterialExpressionMax&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMax); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMax); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMax) \
	ENGINE_API virtual ~UMaterialExpressionMax();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMax_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMax_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMax_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMax_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionMax;

// ********** End Class UMaterialExpressionMax *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionMax_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
