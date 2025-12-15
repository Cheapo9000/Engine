// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPreSkinnedNormal.h"

#ifdef ENGINE_MaterialExpressionPreSkinnedNormal_generated_h
#error "MaterialExpressionPreSkinnedNormal.generated.h already included, missing '#pragma once' in MaterialExpressionPreSkinnedNormal.h"
#endif
#define ENGINE_MaterialExpressionPreSkinnedNormal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPreSkinnedNormal **************************************
struct Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedNormal_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPreSkinnedNormal(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPreSkinnedNormal, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPreSkinnedNormal_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPreSkinnedNormal)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedNormal_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPreSkinnedNormal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPreSkinnedNormal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPreSkinnedNormal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPreSkinnedNormal); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPreSkinnedNormal(UMaterialExpressionPreSkinnedNormal&&) = delete; \
	UMaterialExpressionPreSkinnedNormal(const UMaterialExpressionPreSkinnedNormal&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionPreSkinnedNormal();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedNormal_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedNormal_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedNormal_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedNormal_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPreSkinnedNormal;

// ********** End Class UMaterialExpressionPreSkinnedNormal ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedNormal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
