// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStageThroughput.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialStageThroughput_generated_h
#error "DMMaterialStageThroughput.generated.h already included, missing '#pragma once' in DMMaterialStageThroughput.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStageThroughput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDMValueType : uint8;
struct FDMMaterialStageConnector;

// ********** Begin Class UDMMaterialStageThroughput ***********************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanInputConnectTo); \
	DECLARE_FUNCTION(execCanInputAcceptType); \
	DECLARE_FUNCTION(execGetInputConnectors); \
	DECLARE_FUNCTION(execAllowsNestedInputs); \
	DECLARE_FUNCTION(execIsInputRequired); \
	DECLARE_FUNCTION(execGetDescription);


struct Z_Construct_UClass_UDMMaterialStageThroughput_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialStageThroughput_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageThroughput(); \
	friend struct ::Z_Construct_UClass_UDMMaterialStageThroughput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialStageThroughput_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialStageThroughput, UDMMaterialStageSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialStageThroughput_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialStageThroughput)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialStageThroughput(UDMMaterialStageThroughput&&) = delete; \
	UDMMaterialStageThroughput(const UDMMaterialStageThroughput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageThroughput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageThroughput); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageThroughput) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageThroughput();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_30_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialStageThroughput;

// ********** End Class UDMMaterialStageThroughput *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
