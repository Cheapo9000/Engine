// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComputeFramework/ShaderParamTypeDefinition.h"

#ifdef COMPUTEFRAMEWORK_ShaderParamTypeDefinition_generated_h
#error "ShaderParamTypeDefinition.generated.h already included, missing '#pragma once' in ShaderParamTypeDefinition.h"
#endif
#define COMPUTEFRAMEWORK_ShaderParamTypeDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FShaderValueTypeHandle ********************************************
struct Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics;
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FShaderValueTypeHandle_Statics; \
	COMPUTEFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FShaderValueTypeHandle;
// ********** End ScriptStruct FShaderValueTypeHandle **********************************************

// ********** Begin ScriptStruct FArrayShaderValue *************************************************
struct Z_Construct_UScriptStruct_FArrayShaderValue_Statics;
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArrayShaderValue_Statics; \
	COMPUTEFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FArrayShaderValue;
// ********** End ScriptStruct FArrayShaderValue ***************************************************

// ********** Begin ScriptStruct FShaderValueContainer *********************************************
struct Z_Construct_UScriptStruct_FShaderValueContainer_Statics;
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FShaderValueContainer_Statics; \
	COMPUTEFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FShaderValueContainer;
// ********** End ScriptStruct FShaderValueContainer ***********************************************

// ********** Begin ScriptStruct FShaderValueType **************************************************
struct Z_Construct_UScriptStruct_FShaderValueType_Statics;
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_190_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FShaderValueType_Statics; \
	COMPUTEFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FShaderValueType;
// ********** End ScriptStruct FShaderValueType ****************************************************

// ********** Begin ScriptStruct FShaderParamTypeDefinition ****************************************
struct Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics;
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_310_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FShaderParamTypeDefinition_Statics; \
	COMPUTEFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FShaderParamTypeDefinition;
// ********** End ScriptStruct FShaderParamTypeDefinition ******************************************

// ********** Begin ScriptStruct FShaderFunctionDefinition *****************************************
struct Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics;
#define FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h_417_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FShaderFunctionDefinition_Statics; \
	COMPUTEFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FShaderFunctionDefinition;
// ********** End ScriptStruct FShaderFunctionDefinition *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ShaderParamTypeDefinition_h

// ********** Begin Enum EShaderFundamentalType ****************************************************
#define FOREACH_ENUM_ESHADERFUNDAMENTALTYPE(op) \
	op(EShaderFundamentalType::Bool) \
	op(EShaderFundamentalType::Int) \
	op(EShaderFundamentalType::Uint) \
	op(EShaderFundamentalType::Float) \
	op(EShaderFundamentalType::Struct) \
	op(EShaderFundamentalType::None) 

enum class EShaderFundamentalType : uint8;
template<> struct TIsUEnumClass<EShaderFundamentalType> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EShaderFundamentalType>();
// ********** End Enum EShaderFundamentalType ******************************************************

// ********** Begin Enum EShaderFundamentalDimensionType *******************************************
#define FOREACH_ENUM_ESHADERFUNDAMENTALDIMENSIONTYPE(op) \
	op(EShaderFundamentalDimensionType::Scalar) \
	op(EShaderFundamentalDimensionType::Vector) \
	op(EShaderFundamentalDimensionType::Matrix) 

enum class EShaderFundamentalDimensionType : uint8;
template<> struct TIsUEnumClass<EShaderFundamentalDimensionType> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EShaderFundamentalDimensionType>();
// ********** End Enum EShaderFundamentalDimensionType *********************************************

// ********** Begin Enum EShaderParamBindingType ***************************************************
#define FOREACH_ENUM_ESHADERPARAMBINDINGTYPE(op) \
	op(EShaderParamBindingType::None) \
	op(EShaderParamBindingType::ConstantParameter) \
	op(EShaderParamBindingType::ReadOnlyResource) \
	op(EShaderParamBindingType::ReadWriteResource) 

enum class EShaderParamBindingType : uint8;
template<> struct TIsUEnumClass<EShaderParamBindingType> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EShaderParamBindingType>();
// ********** End Enum EShaderParamBindingType *****************************************************

// ********** Begin Enum EShaderResourceType *******************************************************
#define FOREACH_ENUM_ESHADERRESOURCETYPE(op) \
	op(EShaderResourceType::None) \
	op(EShaderResourceType::Texture1D) \
	op(EShaderResourceType::Texture2D) \
	op(EShaderResourceType::Texture3D) \
	op(EShaderResourceType::TextureCube) \
	op(EShaderResourceType::Buffer) \
	op(EShaderResourceType::StructuredBuffer) \
	op(EShaderResourceType::ByteAddressBuffer) 

enum class EShaderResourceType : uint8;
template<> struct TIsUEnumClass<EShaderResourceType> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EShaderResourceType>();
// ********** End Enum EShaderResourceType *********************************************************

// ********** Begin Enum EShaderParamModifier ******************************************************
#define FOREACH_ENUM_ESHADERPARAMMODIFIER(op) \
	op(EShaderParamModifier::None) \
	op(EShaderParamModifier::In) \
	op(EShaderParamModifier::Out) \
	op(EShaderParamModifier::InOut) 

enum class EShaderParamModifier : uint8;
template<> struct TIsUEnumClass<EShaderParamModifier> { enum { Value = true }; };
template<> COMPUTEFRAMEWORK_NON_ATTRIBUTED_API UEnum* StaticEnum<EShaderParamModifier>();
// ********** End Enum EShaderParamModifier ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
