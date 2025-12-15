// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionExternalCodeBase.h"

#ifdef ENGINE_MaterialExpressionExternalCodeBase_generated_h
#error "MaterialExpressionExternalCodeBase.generated.h already included, missing '#pragma once' in MaterialExpressionExternalCodeBase.h"
#endif
#define ENGINE_MaterialExpressionExternalCodeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionExternalCodeBase **************************************
struct Z_Construct_UClass_UMaterialExpressionExternalCodeBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExternalCodeBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExternalCodeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionExternalCodeBase(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionExternalCodeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionExternalCodeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionExternalCodeBase, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionExternalCodeBase_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionExternalCodeBase)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExternalCodeBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionExternalCodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionExternalCodeBase(UMaterialExpressionExternalCodeBase&&) = delete; \
	UMaterialExpressionExternalCodeBase(const UMaterialExpressionExternalCodeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionExternalCodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionExternalCodeBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionExternalCodeBase) \
	ENGINE_API virtual ~UMaterialExpressionExternalCodeBase();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExternalCodeBase_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExternalCodeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExternalCodeBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExternalCodeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionExternalCodeBase;

// ********** End Class UMaterialExpressionExternalCodeBase ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionExternalCodeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
