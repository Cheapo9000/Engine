// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectLocalBounds.h"

#ifdef ENGINE_MaterialExpressionObjectLocalBounds_generated_h
#error "MaterialExpressionObjectLocalBounds.generated.h already included, missing '#pragma once' in MaterialExpressionObjectLocalBounds.h"
#endif
#define ENGINE_MaterialExpressionObjectLocalBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionObjectLocalBounds *************************************
struct Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectLocalBounds_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectLocalBounds(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionObjectLocalBounds, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectLocalBounds)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectLocalBounds_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionObjectLocalBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectLocalBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionObjectLocalBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectLocalBounds); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectLocalBounds(UMaterialExpressionObjectLocalBounds&&) = delete; \
	UMaterialExpressionObjectLocalBounds(const UMaterialExpressionObjectLocalBounds&) = delete; \
	NO_API virtual ~UMaterialExpressionObjectLocalBounds();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectLocalBounds_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectLocalBounds_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectLocalBounds_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectLocalBounds_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionObjectLocalBounds;

// ********** End Class UMaterialExpressionObjectLocalBounds ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectLocalBounds_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
