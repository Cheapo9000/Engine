// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStageGradient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageGradient;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialStageGradient_generated_h
#error "DMMaterialStageGradient.generated.h already included, missing '#pragma once' in DMMaterialStageGradient.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStageGradient_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeStageSource_Gradient); \
	DECLARE_FUNCTION(execCreateStage);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageGradient(); \
	friend struct Z_Construct_UClass_UDMMaterialStageGradient_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStageGradient, UDMMaterialStageThroughput, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialStageGradient)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStageGradient(UDMMaterialStageGradient&&); \
	UDMMaterialStageGradient(const UDMMaterialStageGradient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageGradient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageGradient); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageGradient) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageGradient();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStageGradient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
