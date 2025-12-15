// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPrecomputedAOMask.h"

#ifdef ENGINE_MaterialExpressionPrecomputedAOMask_generated_h
#error "MaterialExpressionPrecomputedAOMask.generated.h already included, missing '#pragma once' in MaterialExpressionPrecomputedAOMask.h"
#endif
#define ENGINE_MaterialExpressionPrecomputedAOMask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPrecomputedAOMask *************************************
struct Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPrecomputedAOMask_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPrecomputedAOMask(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPrecomputedAOMask, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPrecomputedAOMask_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPrecomputedAOMask)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPrecomputedAOMask_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionPrecomputedAOMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPrecomputedAOMask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionPrecomputedAOMask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPrecomputedAOMask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPrecomputedAOMask(UMaterialExpressionPrecomputedAOMask&&) = delete; \
	UMaterialExpressionPrecomputedAOMask(const UMaterialExpressionPrecomputedAOMask&) = delete; \
	NO_API virtual ~UMaterialExpressionPrecomputedAOMask();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPrecomputedAOMask_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPrecomputedAOMask_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPrecomputedAOMask_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPrecomputedAOMask_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPrecomputedAOMask;

// ********** End Class UMaterialExpressionPrecomputedAOMask ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPrecomputedAOMask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
