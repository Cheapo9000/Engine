// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPerInstanceRandom.h"

#ifdef ENGINE_MaterialExpressionPerInstanceRandom_generated_h
#error "MaterialExpressionPerInstanceRandom.generated.h already included, missing '#pragma once' in MaterialExpressionPerInstanceRandom.h"
#endif
#define ENGINE_MaterialExpressionPerInstanceRandom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPerInstanceRandom *************************************
struct Z_Construct_UClass_UMaterialExpressionPerInstanceRandom_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceRandom_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceRandom_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPerInstanceRandom(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPerInstanceRandom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPerInstanceRandom_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPerInstanceRandom, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPerInstanceRandom_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPerInstanceRandom)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceRandom_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionPerInstanceRandom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPerInstanceRandom(UMaterialExpressionPerInstanceRandom&&) = delete; \
	UMaterialExpressionPerInstanceRandom(const UMaterialExpressionPerInstanceRandom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionPerInstanceRandom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPerInstanceRandom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPerInstanceRandom) \
	NO_API virtual ~UMaterialExpressionPerInstanceRandom();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceRandom_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceRandom_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceRandom_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceRandom_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPerInstanceRandom;

// ********** End Class UMaterialExpressionPerInstanceRandom ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPerInstanceRandom_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
