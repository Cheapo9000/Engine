// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionNeuralPostProcessNode.h"

#ifdef ENGINE_MaterialExpressionNeuralPostProcessNode_generated_h
#error "MaterialExpressionNeuralPostProcessNode.generated.h already included, missing '#pragma once' in MaterialExpressionNeuralPostProcessNode.h"
#endif
#define ENGINE_MaterialExpressionNeuralPostProcessNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialExpressionNeuralNetworkInput ************************************
struct Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNeuralNetworkInput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionNeuralNetworkInput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionNeuralNetworkInput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNeuralNetworkInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNeuralNetworkInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNeuralNetworkInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNeuralNetworkInput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionNeuralNetworkInput(UMaterialExpressionNeuralNetworkInput&&) = delete; \
	UMaterialExpressionNeuralNetworkInput(const UMaterialExpressionNeuralNetworkInput&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionNeuralNetworkInput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionNeuralNetworkInput;

// ********** End Class UMaterialExpressionNeuralNetworkInput **************************************

// ********** Begin Class UMaterialExpressionNeuralNetworkOutput ***********************************
struct Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNeuralNetworkOutput(); \
	friend struct ::Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialExpressionNeuralNetworkOutput, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_NoRegister) \
	DECLARE_SERIALIZER(UMaterialExpressionNeuralNetworkOutput)


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNeuralNetworkOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNeuralNetworkOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNeuralNetworkOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNeuralNetworkOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialExpressionNeuralNetworkOutput(UMaterialExpressionNeuralNetworkOutput&&) = delete; \
	UMaterialExpressionNeuralNetworkOutput(const UMaterialExpressionNeuralNetworkOutput&) = delete; \
	ENGINE_API virtual ~UMaterialExpressionNeuralNetworkOutput();


#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_72_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_75_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialExpressionNeuralNetworkOutput;

// ********** End Class UMaterialExpressionNeuralNetworkOutput *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionNeuralPostProcessNode_h

// ********** Begin Enum ENeuralIndexType **********************************************************
#define FOREACH_ENUM_ENEURALINDEXTYPE(op) \
	op(NIT_TextureIndex) \
	op(NIT_BufferIndex) 

enum ENeuralIndexType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENeuralIndexType>();
// ********** End Enum ENeuralIndexType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
