// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionGIReplace.h"

#ifdef ENGINE_MaterialExpressionGIReplace_generated_h
#error "MaterialExpressionGIReplace.generated.h already included, missing '#pragma once' in MaterialExpressionGIReplace.h"
#endif
#define ENGINE_MaterialExpressionGIReplace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionGIReplace *********************************************
struct Z_Construct_UClass_UMaterialExpressionGIReplace_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGIReplace_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionGIReplace(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionGIReplace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionGIReplace_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionGIReplace, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionGIReplace_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionGIReplace)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionGIReplace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionGIReplace(UMaterialExpressionGIReplace&&) = delete; \
	UMaterialExpressionGIReplace(const UMaterialExpressionGIReplace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionGIReplace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionGIReplace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionGIReplace) \
	NO_API virtual ~UMaterialExpressionGIReplace();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionGIReplace;

// ********** End Class UMaterialExpressionGIReplace ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionGIReplace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
