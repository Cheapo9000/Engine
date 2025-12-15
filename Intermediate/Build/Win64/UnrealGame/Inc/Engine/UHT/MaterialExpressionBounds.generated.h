// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBounds.h"

#ifdef ENGINE_MaterialExpressionBounds_generated_h
#error "MaterialExpressionBounds.generated.h already included, missing '#pragma once' in MaterialExpressionBounds.h"
#endif
#define ENGINE_MaterialExpressionBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionBounds ************************************************
struct Z_Construct_UClass_UMaterialExpressionBounds_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBounds_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBounds_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBounds(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionBounds_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionBounds_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionBounds, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionBounds_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionBounds)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBounds_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBounds); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionBounds(UMaterialExpressionBounds&&) = delete; \
	UMaterialExpressionBounds(const UMaterialExpressionBounds&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionBounds();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBounds_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBounds_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBounds_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBounds_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionBounds;

// ********** End Class UMaterialExpressionBounds **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBounds_h

// ********** Begin Enum EMaterialExpressionBoundsType *********************************************
#define FOREACH_ENUM_EMATERIALEXPRESSIONBOUNDSTYPE(op) \
	op(MEILB_InstanceLocal) \
	op(MEILB_ObjectLocal) \
	op(MEILB_PreSkinnedLocal) 

enum EMaterialExpressionBoundsType : uint8;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialExpressionBoundsType>();
// ********** End Enum EMaterialExpressionBoundsType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
