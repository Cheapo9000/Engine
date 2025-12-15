// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLayerStack.h"

#ifdef ENGINE_MaterialExpressionLayerStack_generated_h
#error "MaterialExpressionLayerStack.generated.h already included, missing '#pragma once' in MaterialExpressionLayerStack.h"
#endif
#define ENGINE_MaterialExpressionLayerStack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialLayerInput ***********************************************
struct Z_Construct_UScriptStruct_FMaterialLayerInput_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialLayerInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FExpressionInput Super;


struct FMaterialLayerInput;
// ********** End ScriptStruct FMaterialLayerInput *************************************************

// ********** Begin Class UMaterialExpressionLayerStack ********************************************
struct Z_Construct_UClass_UMaterialExpressionLayerStack_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLayerStack_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLayerStack(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionLayerStack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionLayerStack_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionLayerStack, UMaterialExpressionMaterialAttributeLayers, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionLayerStack_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionLayerStack)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLayerStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLayerStack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLayerStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLayerStack); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionLayerStack(UMaterialExpressionLayerStack&&) = delete; \
	UMaterialExpressionLayerStack(const UMaterialExpressionLayerStack&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionLayerStack();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h_33_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionLayerStack;

// ********** End Class UMaterialExpressionLayerStack **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionLayerStack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
