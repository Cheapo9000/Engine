// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPreviousFrameSwitch.h"

#ifdef ENGINE_MaterialExpressionPreviousFrameSwitch_generated_h
#error "MaterialExpressionPreviousFrameSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionPreviousFrameSwitch.h"
#endif
#define ENGINE_MaterialExpressionPreviousFrameSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionPreviousFrameSwitch ***********************************
struct Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreviousFrameSwitch_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPreviousFrameSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPreviousFrameSwitch)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreviousFrameSwitch_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPreviousFrameSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPreviousFrameSwitch(UMaterialExpressionPreviousFrameSwitch&&) = delete; \
	UMaterialExpressionPreviousFrameSwitch(const UMaterialExpressionPreviousFrameSwitch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPreviousFrameSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPreviousFrameSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPreviousFrameSwitch) \
	ENGINE_API virtual ~UMaterialExpressionPreviousFrameSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreviousFrameSwitch_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreviousFrameSwitch_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreviousFrameSwitch_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreviousFrameSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPreviousFrameSwitch;

// ********** End Class UMaterialExpressionPreviousFrameSwitch *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPreviousFrameSwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
