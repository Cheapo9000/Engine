// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStageGradient.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialStageGradient_generated_h
#error "DMMaterialStageGradient.generated.h already included, missing '#pragma once' in DMMaterialStageGradient.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStageGradient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageGradient;

// ********** Begin Class UDMMaterialStageGradient *************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeStageSource_Gradient); \
	DECLARE_FUNCTION(execCreateStage);


struct Z_Construct_UClass_UDMMaterialStageGradient_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageGradient_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageGradient(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageGradient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageGradient_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageGradient, UDMMaterialStageThroughput, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageGradient_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageGradient)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageGradient(UDMMaterialStageGradient&&) = delete; \
	UDMMaterialStageGradient(const UDMMaterialStageGradient&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageGradient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageGradient); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageGradient) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageGradient();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageGradient;

// ********** End Class UDMMaterialStageGradient ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageGradient_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
