// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MaterialStageInputs/DMMSIThroughput.h"

#ifdef DYNAMICMATERIALEDITOR_DMMSIThroughput_generated_h
#error "DMMSIThroughput.generated.h already included, missing '#pragma once' in DMMSIThroughput.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMSIThroughput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialStageThroughput;
class UDMMaterialSubStage;

// ********** Begin Class UDMMaterialStageInputThroughput ******************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSubStage); \
	DECLARE_FUNCTION(execGetMaterialStageThroughput); \
	DECLARE_FUNCTION(execGetMaterialStageThroughputClass);


struct Z_Construct_UClass_UDMMaterialStageInputThroughput_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageInputThroughput_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageInputThroughput(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageInputThroughput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageInputThroughput_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageInputThroughput, UDMMaterialStageInput, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageInputThroughput_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageInputThroughput)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageInputThroughput(UDMMaterialStageInputThroughput&&) = delete; \
	UDMMaterialStageInputThroughput(const UDMMaterialStageInputThroughput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageInputThroughput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageInputThroughput); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageInputThroughput) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageInputThroughput();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageInputThroughput;

// ********** End Class UDMMaterialStageInputThroughput ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_MaterialStageInputs_DMMSIThroughput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
