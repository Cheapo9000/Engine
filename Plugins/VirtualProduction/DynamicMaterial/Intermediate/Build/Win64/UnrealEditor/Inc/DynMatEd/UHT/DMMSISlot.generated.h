// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageInputs/DMMSISlot.h"

#ifdef DYNAMICMATERIALEDITOR_DMMSISlot_generated_h
#error "DMMSISlot.generated.h already included, missing '#pragma once' in DMMSISlot.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSISlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialSlot;
class UDMMaterialStage;
class UDMMaterialStageInputSlot;
enum class EDMMaterialPropertyType : uint8;

// ********** Begin Class UDMMaterialStageInputSlot ************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMaterialProperty); \
	DECLARE_FUNCTION(execSetSlot); \
	DECLARE_FUNCTION(execGetMaterialProperty); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execChangeStageInput_Slot); \
	DECLARE_FUNCTION(execChangeStageSource_Slot); \
	DECLARE_FUNCTION(execCreateStage);


struct Z_Construct_UClass_UDMMaterialStageInputSlot_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageInputSlot_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageInputSlot(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageInputSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageInputSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageInputSlot, UDMMaterialStageInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageInputSlot_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageInputSlot)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageInputSlot(UDMMaterialStageInputSlot&&) = delete; \
	UDMMaterialStageInputSlot(const UDMMaterialStageInputSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageInputSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageInputSlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageInputSlot)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageInputSlot;

// ********** End Class UDMMaterialStageInputSlot **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSISlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
