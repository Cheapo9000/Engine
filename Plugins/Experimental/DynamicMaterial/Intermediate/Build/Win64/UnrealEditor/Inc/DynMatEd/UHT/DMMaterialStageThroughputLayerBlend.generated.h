// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStageThroughputLayerBlend.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageInput;
enum class EAvaColorChannel : uint8;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialStageThroughputLayerBlend_generated_h
#error "DMMaterialStageThroughputLayerBlend.generated.h already included, missing '#pragma once' in DMMaterialStageThroughputLayerBlend.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStageThroughputLayerBlend_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPremultiplyAlpha); \
	DECLARE_FUNCTION(execUsePremultiplyAlpha); \
	DECLARE_FUNCTION(execSetMaskChannelOverride); \
	DECLARE_FUNCTION(execGetMaskChannelOverride); \
	DECLARE_FUNCTION(execGetInputMask); \
	DECLARE_FUNCTION(execCreateStage);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_ACCESSORS \
static void GetMaskChannelOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaskChannelOverride_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageThroughputLayerBlend(); \
	friend struct Z_Construct_UClass_UDMMaterialStageThroughputLayerBlend_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStageThroughputLayerBlend, UDMMaterialStageThroughput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialStageThroughputLayerBlend)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStageThroughputLayerBlend(UDMMaterialStageThroughputLayerBlend&&); \
	UDMMaterialStageThroughputLayerBlend(const UDMMaterialStageThroughputLayerBlend&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageThroughputLayerBlend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageThroughputLayerBlend); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageThroughputLayerBlend) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageThroughputLayerBlend();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStageThroughputLayerBlend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughputLayerBlend_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
