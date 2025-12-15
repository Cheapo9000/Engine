// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionViewSize.h"

#ifdef ENGINE_MaterialExpressionViewSize_generated_h
#error "MaterialExpressionViewSize.generated.h already included, missing '#pragma once' in MaterialExpressionViewSize.h"
#endif
#define ENGINE_MaterialExpressionViewSize_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionViewSize **********************************************
struct Z_Construct_UClass_UMaterialExpressionViewSize_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionViewSize_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionViewSize(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionViewSize_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionViewSize_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionViewSize, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionViewSize_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionViewSize)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionViewSize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionViewSize(UMaterialExpressionViewSize&&) = delete; \
	UMaterialExpressionViewSize(const UMaterialExpressionViewSize&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionViewSize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionViewSize); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionViewSize) \
	NO_API virtual ~UMaterialExpressionViewSize();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionViewSize;

// ********** End Class UMaterialExpressionViewSize ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionViewSize_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
