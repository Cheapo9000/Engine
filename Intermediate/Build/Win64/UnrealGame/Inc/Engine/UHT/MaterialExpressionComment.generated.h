// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionComment.h"

#ifdef ENGINE_MaterialExpressionComment_generated_h
#error "MaterialExpressionComment.generated.h already included, missing '#pragma once' in MaterialExpressionComment.h"
#endif
#define ENGINE_MaterialExpressionComment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionComment ***********************************************
struct Z_Construct_UClass_UMaterialExpressionComment_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComment_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionComment(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionComment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionComment_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionComment, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionComment_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionComment)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComment_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionComment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionComment(UMaterialExpressionComment&&) = delete; \
	UMaterialExpressionComment(const UMaterialExpressionComment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionComment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionComment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionComment) \
	ENGINE_API virtual ~UMaterialExpressionComment();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComment_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComment_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComment_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComment_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionComment;

// ********** End Class UMaterialExpressionComment *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionComment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
