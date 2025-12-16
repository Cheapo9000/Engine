// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingElements/CompositingMaterialPass.h"

#ifdef COMPOSURE_CompositingMaterialPass_generated_h
#error "CompositingMaterialPass.generated.h already included, missing '#pragma once' in CompositingMaterialPass.h"
#endif
#define COMPOSURE_CompositingMaterialPass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCompositingParamPayload ******************************************
struct Z_Construct_UScriptStruct_FCompositingParamPayload_Statics;
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositingParamPayload_Statics; \
	static class UScriptStruct* StaticStruct();


struct FCompositingParamPayload;
// ********** End ScriptStruct FCompositingParamPayload ********************************************

// ********** Begin ScriptStruct FNamedCompMaterialParam *******************************************
struct Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics;
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics; \
	static class UScriptStruct* StaticStruct();


struct FNamedCompMaterialParam;
// ********** End ScriptStruct FNamedCompMaterialParam *********************************************

// ********** Begin ScriptStruct FCompositingMaterial **********************************************
struct Z_Construct_UScriptStruct_FCompositingMaterial_Statics;
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositingMaterial_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FCompositingParamPayload Super;


struct FCompositingMaterial;
// ********** End ScriptStruct FCompositingMaterial ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h

// ********** Begin Enum EParamType ****************************************************************
#define FOREACH_ENUM_EPARAMTYPE(op) \
	op(EParamType::UnknownParamType) \
	op(EParamType::ScalarParam) \
	op(EParamType::VectorParam) \
	op(EParamType::TextureParam) \
	op(EParamType::MediaTextureParam) 

enum class EParamType : uint8;
template<> struct TIsUEnumClass<EParamType> { enum { Value = true }; };
template<> COMPOSURE_NON_ATTRIBUTED_API UEnum* StaticEnum<EParamType>();
// ********** End Enum EParamType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
