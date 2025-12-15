// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureBase.h"

#ifdef ENGINE_MaterialExpressionTextureBase_generated_h
#error "MaterialExpressionTextureBase.generated.h already included, missing '#pragma once' in MaterialExpressionTextureBase.h"
#endif
#define ENGINE_MaterialExpressionTextureBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionTextureBase *******************************************
struct Z_Construct_UClass_UMaterialExpressionTextureBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureBase(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionTextureBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionTextureBase, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureBase)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureBase(UMaterialExpressionTextureBase&&) = delete; \
	UMaterialExpressionTextureBase(const UMaterialExpressionTextureBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureBase) \
	ENGINE_API virtual ~UMaterialExpressionTextureBase();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureBase_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionTextureBase;

// ********** End Class UMaterialExpressionTextureBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionTextureBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
