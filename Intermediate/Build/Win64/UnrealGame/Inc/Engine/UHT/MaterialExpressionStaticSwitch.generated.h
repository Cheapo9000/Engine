// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionStaticSwitch.h"

#ifdef ENGINE_MaterialExpressionStaticSwitch_generated_h
#error "MaterialExpressionStaticSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionStaticSwitch.h"
#endif
#define ENGINE_MaterialExpressionStaticSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionStaticSwitch ******************************************
struct Z_Construct_UClass_UMaterialExpressionStaticSwitch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitch_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionStaticSwitch(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionStaticSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionStaticSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionStaticSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionStaticSwitch_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticSwitch)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitch_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionStaticSwitch(UMaterialExpressionStaticSwitch&&) = delete; \
	UMaterialExpressionStaticSwitch(const UMaterialExpressionStaticSwitch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticSwitch) \
	ENGINE_API virtual ~UMaterialExpressionStaticSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitch_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitch_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitch_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitch_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionStaticSwitch;

// ********** End Class UMaterialExpressionStaticSwitch ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionStaticSwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
