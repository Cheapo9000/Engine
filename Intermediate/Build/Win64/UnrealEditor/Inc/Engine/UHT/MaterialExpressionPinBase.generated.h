// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPinBase.h"

#ifdef ENGINE_MaterialExpressionPinBase_generated_h
#error "MaterialExpressionPinBase.generated.h already included, missing '#pragma once' in MaterialExpressionPinBase.h"
#endif
#define ENGINE_MaterialExpressionPinBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCompositeReroute *************************************************
struct Z_Construct_UScriptStruct_FCompositeReroute_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPinBase_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositeReroute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCompositeReroute;
// ********** End ScriptStruct FCompositeReroute ***************************************************

// ********** Begin Class UMaterialExpressionPinBase ***********************************************
struct Z_Construct_UClass_UMaterialExpressionPinBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPinBase_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPinBase(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionPinBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionPinBase, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionPinBase)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPinBase_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPinBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPinBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPinBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPinBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionPinBase(UMaterialExpressionPinBase&&) = delete; \
	UMaterialExpressionPinBase(const UMaterialExpressionPinBase&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionPinBase();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPinBase_h_56_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPinBase_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPinBase_h_59_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPinBase_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionPinBase;

// ********** End Class UMaterialExpressionPinBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionPinBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
