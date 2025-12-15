// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFmod.h"

#ifdef ENGINE_MaterialExpressionFmod_generated_h
#error "MaterialExpressionFmod.generated.h already included, missing '#pragma once' in MaterialExpressionFmod.h"
#endif
#define ENGINE_MaterialExpressionFmod_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFmod **************************************************
struct Z_Construct_UClass_UMaterialExpressionFmod_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFmod_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFmod_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFmod(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFmod_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFmod_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFmod, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFmod_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFmod)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFmod_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFmod(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFmod(UMaterialExpressionFmod&&) = delete; \
	UMaterialExpressionFmod(const UMaterialExpressionFmod&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFmod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFmod); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFmod) \
	ENGINE_API virtual ~UMaterialExpressionFmod();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFmod_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFmod_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFmod_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFmod_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFmod;

// ********** End Class UMaterialExpressionFmod ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFmod_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
