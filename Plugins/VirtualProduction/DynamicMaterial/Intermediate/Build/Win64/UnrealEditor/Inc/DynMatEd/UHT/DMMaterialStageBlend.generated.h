// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStageBlend.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialStageBlend_generated_h
#error "DMMaterialStageBlend.generated.h already included, missing '#pragma once' in DMMaterialStageBlend.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStageBlend_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaColorChannel : uint8;

// ********** Begin Class UDMMaterialStageBlend ****************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlendDescription); \
	DECLARE_FUNCTION(execSetBaseChannelOverride); \
	DECLARE_FUNCTION(execGetBaseChannelOverride);


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_ACCESSORS \
static void GetBaseChannelOverride_WrapperImpl(const void* Object, void* OutValue); \
static void SetBaseChannelOverride_WrapperImpl(void* Object, const void* InValue); \
static void GetBlendDescription_WrapperImpl(const void* Object, void* OutValue);


struct Z_Construct_UClass_UDMMaterialStageBlend_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageBlend_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageBlend(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageBlend_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageBlend_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageBlend, UDMMaterialStageThroughput, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageBlend_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageBlend)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageBlend(UDMMaterialStageBlend&&) = delete; \
	UDMMaterialStageBlend(const UDMMaterialStageBlend&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageBlend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageBlend); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageBlend) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageBlend();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageBlend;

// ********** End Class UDMMaterialStageBlend ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageBlend_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
