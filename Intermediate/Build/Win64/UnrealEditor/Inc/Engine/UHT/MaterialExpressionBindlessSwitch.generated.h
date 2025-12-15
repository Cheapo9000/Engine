// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBindlessSwitch.h"

#ifdef ENGINE_MaterialExpressionBindlessSwitch_generated_h
#error "MaterialExpressionBindlessSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionBindlessSwitch.h"
#endif
#define ENGINE_MaterialExpressionBindlessSwitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionBindlessSwitch ****************************************
struct Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBindlessSwitch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBindlessSwitch(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionBindlessSwitch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionBindlessSwitch_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionBindlessSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionBindlessSwitch_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionBindlessSwitch)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBindlessSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionBindlessSwitch(UMaterialExpressionBindlessSwitch&&) = delete; \
	UMaterialExpressionBindlessSwitch(const UMaterialExpressionBindlessSwitch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBindlessSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBindlessSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBindlessSwitch) \
	ENGINE_API virtual ~UMaterialExpressionBindlessSwitch();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionBindlessSwitch;

// ********** End Class UMaterialExpressionBindlessSwitch ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionBindlessSwitch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
