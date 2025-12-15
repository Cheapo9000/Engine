// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPreSkinnedPosition.h"

#ifdef ENGINE_MaterialExpressionPreSkinnedPosition_generated_h
#error "MaterialExpressionPreSkinnedPosition.generated.h already included, missing '#pragma once' in MaterialExpressionPreSkinnedPosition.h"
#endif
#define ENGINE_MaterialExpressionPreSkinnedPosition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPreSkinnedPosition ************************************
struct Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedPosition_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPreSkinnedPosition(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPreSkinnedPosition, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPreSkinnedPosition_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPreSkinnedPosition)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedPosition_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPreSkinnedPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPreSkinnedPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPreSkinnedPosition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPreSkinnedPosition); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPreSkinnedPosition(UMaterialExpressionPreSkinnedPosition&&) = delete; \
	UMaterialExpressionPreSkinnedPosition(const UMaterialExpressionPreSkinnedPosition&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionPreSkinnedPosition();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedPosition_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedPosition_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedPosition_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedPosition_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPreSkinnedPosition;

// ********** End Class UMaterialExpressionPreSkinnedPosition **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreSkinnedPosition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
