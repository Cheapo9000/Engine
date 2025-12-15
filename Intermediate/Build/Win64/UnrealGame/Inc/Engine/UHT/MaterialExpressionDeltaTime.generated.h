// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDeltaTime.h"

#ifdef ENGINE_MaterialExpressionDeltaTime_generated_h
#error "MaterialExpressionDeltaTime.generated.h already included, missing '#pragma once' in MaterialExpressionDeltaTime.h"
#endif
#define ENGINE_MaterialExpressionDeltaTime_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionDeltaTime *********************************************
struct Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDeltaTime_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeltaTime_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDeltaTime(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionDeltaTime_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionDeltaTime_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionDeltaTime, UMaterialExpressionExternalCodeBase, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionDeltaTime_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionDeltaTime)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeltaTime_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionDeltaTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionDeltaTime(UMaterialExpressionDeltaTime&&) = delete; \
	UMaterialExpressionDeltaTime(const UMaterialExpressionDeltaTime&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionDeltaTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDeltaTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDeltaTime) \
	NO_API virtual ~UMaterialExpressionDeltaTime();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeltaTime_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeltaTime_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeltaTime_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeltaTime_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionDeltaTime;

// ********** End Class UMaterialExpressionDeltaTime ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionDeltaTime_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
