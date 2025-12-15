// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionFunctionInput.h"

#ifdef ENGINE_MaterialExpressionFunctionInput_generated_h
#error "MaterialExpressionFunctionInput.generated.h already included, missing '#pragma once' in MaterialExpressionFunctionInput.h"
#endif
#define ENGINE_MaterialExpressionFunctionInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionFunctionInput *****************************************
struct Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionInput_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFunctionInput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionFunctionInput, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionFunctionInput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionInput_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFunctionInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFunctionInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFunctionInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFunctionInput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionFunctionInput(UMaterialExpressionFunctionInput&&) = delete; \
	UMaterialExpressionFunctionInput(const UMaterialExpressionFunctionInput&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionFunctionInput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionInput_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionInput_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionInput_h_49_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionInput_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionFunctionInput;

// ********** End Class UMaterialExpressionFunctionInput *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionFunctionInput_h

// ********** Begin Enum EFunctionInputType ********************************************************
#define FOREACH_ENUM_EFUNCTIONINPUTTYPE(op) \
	op(FunctionInput_Scalar) \
	op(FunctionInput_Vector2) \
	op(FunctionInput_Vector3) \
	op(FunctionInput_Vector4) \
	op(FunctionInput_Texture2D) \
	op(FunctionInput_TextureCube) \
	op(FunctionInput_Texture2DArray) \
	op(FunctionInput_VolumeTexture) \
	op(FunctionInput_StaticBool) \
	op(FunctionInput_MaterialAttributes) \
	op(FunctionInput_TextureExternal) \
	op(FunctionInput_Bool) \
	op(FunctionInput_Substrate) 

enum EFunctionInputType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFunctionInputType>();
// ********** End Enum EFunctionInputType **********************************************************

// ********** Begin Enum EBlendInputRelevance ******************************************************
#define FOREACH_ENUM_EBLENDINPUTRELEVANCE(op) \
	op(General) \
	op(Top) \
	op(Bottom) 

enum EBlendInputRelevance : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlendInputRelevance>();
// ********** End Enum EBlendInputRelevance ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
