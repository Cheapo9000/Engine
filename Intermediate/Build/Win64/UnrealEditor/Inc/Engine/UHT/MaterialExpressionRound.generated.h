// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRound.h"

#ifdef ENGINE_MaterialExpressionRound_generated_h
#error "MaterialExpressionRound.generated.h already included, missing '#pragma once' in MaterialExpressionRound.h"
#endif
#define ENGINE_MaterialExpressionRound_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionRound *************************************************
struct Z_Construct_UClass_UMaterialExpressionRound_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRound_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRound_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRound(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionRound_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionRound_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionRound, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionRound_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionRound)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRound_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionRound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionRound(UMaterialExpressionRound&&) = delete; \
	UMaterialExpressionRound(const UMaterialExpressionRound&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionRound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRound) \
	NO_API virtual ~UMaterialExpressionRound();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRound_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRound_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRound_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRound_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionRound;

// ********** End Class UMaterialExpressionRound ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionRound_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
