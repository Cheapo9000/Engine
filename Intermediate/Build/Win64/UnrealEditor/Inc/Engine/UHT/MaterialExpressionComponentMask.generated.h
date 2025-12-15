// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionComponentMask.h"

#ifdef ENGINE_MaterialExpressionComponentMask_generated_h
#error "MaterialExpressionComponentMask.generated.h already included, missing '#pragma once' in MaterialExpressionComponentMask.h"
#endif
#define ENGINE_MaterialExpressionComponentMask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionComponentMask *****************************************
struct Z_Construct_UClass_UMaterialExpressionComponentMask_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComponentMask_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionComponentMask(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionComponentMask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionComponentMask, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionComponentMask)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComponentMask_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionComponentMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionComponentMask(UMaterialExpressionComponentMask&&) = delete; \
	UMaterialExpressionComponentMask(const UMaterialExpressionComponentMask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionComponentMask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionComponentMask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionComponentMask) \
	ENGINE_API virtual ~UMaterialExpressionComponentMask();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComponentMask_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComponentMask_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComponentMask_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComponentMask_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionComponentMask;

// ********** End Class UMaterialExpressionComponentMask *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComponentMask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
