// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStageThroughput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDMValueType : uint8;
struct FDMMaterialStageConnector;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialStageThroughput_generated_h
#error "DMMaterialStageThroughput.generated.h already included, missing '#pragma once' in DMMaterialStageThroughput.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStageThroughput_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanInputConnectTo); \
	DECLARE_FUNCTION(execCanInputAcceptType); \
	DECLARE_FUNCTION(execGetInputConnectors); \
	DECLARE_FUNCTION(execAllowsNestedInputs); \
	DECLARE_FUNCTION(execIsInputRequired); \
	DECLARE_FUNCTION(execGetDescription);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStageThroughput(); \
	friend struct Z_Construct_UClass_UDMMaterialStageThroughput_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStageThroughput, UDMMaterialStageSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialStageThroughput)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStageThroughput(UDMMaterialStageThroughput&&); \
	UDMMaterialStageThroughput(const UDMMaterialStageThroughput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStageThroughput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStageThroughput); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStageThroughput) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStageThroughput();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStageThroughput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStageThroughput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
