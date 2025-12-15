// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSparseVolumeTextureBase.h"

#ifdef ENGINE_MaterialExpressionSparseVolumeTextureBase_generated_h
#error "MaterialExpressionSparseVolumeTextureBase.generated.h already included, missing '#pragma once' in MaterialExpressionSparseVolumeTextureBase.h"
#endif
#define ENGINE_MaterialExpressionSparseVolumeTextureBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionSparseVolumeTextureBase *******************************
struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSparseVolumeTextureBase(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionSparseVolumeTextureBase, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionSparseVolumeTextureBase)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSparseVolumeTextureBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionSparseVolumeTextureBase(UMaterialExpressionSparseVolumeTextureBase&&) = delete; \
	UMaterialExpressionSparseVolumeTextureBase(const UMaterialExpressionSparseVolumeTextureBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSparseVolumeTextureBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSparseVolumeTextureBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSparseVolumeTextureBase) \
	ENGINE_API virtual ~UMaterialExpressionSparseVolumeTextureBase();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSparseVolumeTextureBase_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionSparseVolumeTextureBase;

// ********** End Class UMaterialExpressionSparseVolumeTextureBase *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionSparseVolumeTextureBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
