// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectBounds.h"

#ifdef ENGINE_MaterialExpressionObjectBounds_generated_h
#error "MaterialExpressionObjectBounds.generated.h already included, missing '#pragma once' in MaterialExpressionObjectBounds.h"
#endif
#define ENGINE_MaterialExpressionObjectBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionObjectBounds ******************************************
struct Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionObjectBounds_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectBounds(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionObjectBounds_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionObjectBounds_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionObjectBounds, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionObjectBounds_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectBounds)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionObjectBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectBounds(UMaterialExpressionObjectBounds&&) = delete; \
	UMaterialExpressionObjectBounds(const UMaterialExpressionObjectBounds&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionObjectBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectBounds); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectBounds) \
	NO_API virtual ~UMaterialExpressionObjectBounds();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionObjectBounds;

// ********** End Class UMaterialExpressionObjectBounds ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionObjectBounds_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
