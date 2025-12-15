// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFloor.h"

#ifdef ENGINE_MaterialExpressionFloor_generated_h
#error "MaterialExpressionFloor.generated.h already included, missing '#pragma once' in MaterialExpressionFloor.h"
#endif
#define ENGINE_MaterialExpressionFloor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFloor *************************************************
struct Z_Construct_UClass_UMaterialExpressionFloor_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFloor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFloor(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFloor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFloor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFloor, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFloor_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFloor)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFloor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFloor(UMaterialExpressionFloor&&) = delete; \
	UMaterialExpressionFloor(const UMaterialExpressionFloor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFloor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFloor) \
	ENGINE_API virtual ~UMaterialExpressionFloor();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFloor;

// ********** End Class UMaterialExpressionFloor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFloor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
