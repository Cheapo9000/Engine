// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPreSkinnedLocalBounds.h"

#ifdef ENGINE_MaterialExpressionPreSkinnedLocalBounds_generated_h
#error "MaterialExpressionPreSkinnedLocalBounds.generated.h already included, missing '#pragma once' in MaterialExpressionPreSkinnedLocalBounds.h"
#endif
#define ENGINE_MaterialExpressionPreSkinnedLocalBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPreSkinnedLocalBounds *********************************
struct Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPreSkinnedLocalBounds(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPreSkinnedLocalBounds, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPreSkinnedLocalBounds_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPreSkinnedLocalBounds)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionPreSkinnedLocalBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPreSkinnedLocalBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionPreSkinnedLocalBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPreSkinnedLocalBounds); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPreSkinnedLocalBounds(UMaterialExpressionPreSkinnedLocalBounds&&) = delete; \
	UMaterialExpressionPreSkinnedLocalBounds(const UMaterialExpressionPreSkinnedLocalBounds&) = delete; \
	NO_API virtual ~UMaterialExpressionPreSkinnedLocalBounds();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPreSkinnedLocalBounds;

// ********** End Class UMaterialExpressionPreSkinnedLocalBounds ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedLocalBounds_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
