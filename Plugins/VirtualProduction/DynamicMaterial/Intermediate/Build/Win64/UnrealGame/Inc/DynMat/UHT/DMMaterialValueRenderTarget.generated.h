// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialValues/DMMaterialValueRenderTarget.h"

#ifdef DYNAMICMATERIAL_DMMaterialValueRenderTarget_generated_h
#error "DMMaterialValueRenderTarget.generated.h already included, missing '#pragma once' in DMMaterialValueRenderTarget.h"
#endif
#define DYNAMICMATERIAL_DMMaterialValueRenderTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMRenderTargetRenderer;
class UTextureRenderTarget2D;
struct FLinearColor;

// ********** Begin Class UDMMaterialValueRenderTarget *********************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRenderer); \
	DECLARE_FUNCTION(execGetRenderer); \
	DECLARE_FUNCTION(execSetClearColor); \
	DECLARE_FUNCTION(execGetClearColor); \
	DECLARE_FUNCTION(execSetTextureFormat); \
	DECLARE_FUNCTION(execGetTextureFormat); \
	DECLARE_FUNCTION(execSetTextureSize); \
	DECLARE_FUNCTION(execGetTextureSize); \
	DECLARE_FUNCTION(execGetRenderTarget);


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_ACCESSORS \
static void SetTextureSize_WrapperImpl(void* Object, const void* InValue); \
static void SetTextureFormat_WrapperImpl(void* Object, const void* InValue); \
static void SetClearColor_WrapperImpl(void* Object, const void* InValue); \
static void SetRenderer_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UDMMaterialValueRenderTarget_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialValueRenderTarget_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueRenderTarget(); \
	friend struct ::Z_Construct_UClass_UDMMaterialValueRenderTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialValueRenderTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialValueRenderTarget, UDMMaterialValueTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialValueRenderTarget_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialValueRenderTarget)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialValueRenderTarget(UDMMaterialValueRenderTarget&&) = delete; \
	UDMMaterialValueRenderTarget(const UDMMaterialValueRenderTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialValueRenderTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueRenderTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueRenderTarget)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialValueRenderTarget;

// ********** End Class UDMMaterialValueRenderTarget ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_MaterialValues_DMMaterialValueRenderTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
