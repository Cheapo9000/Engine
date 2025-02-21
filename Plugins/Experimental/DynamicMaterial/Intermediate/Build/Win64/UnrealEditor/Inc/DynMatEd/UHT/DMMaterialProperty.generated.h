// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialProperty.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMaterialModelEditorOnlyData;
class UMaterialFunctionInterface;
enum class EDMMaterialPropertyType : uint8;
enum class EDMValueType : uint8;
struct FDMMaterialStageConnection;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialProperty_generated_h
#error "DMMaterialProperty.generated.h already included, missing '#pragma once' in DMMaterialProperty.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialProperty_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetInputConnectionMap); \
	DECLARE_FUNCTION(execSetOutputProcessor); \
	DECLARE_FUNCTION(execGetOutputProcessor); \
	DECLARE_FUNCTION(execGetInputConnectionMap); \
	DECLARE_FUNCTION(execGetInputConnectorType); \
	DECLARE_FUNCTION(execIsMaterialPin); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetMaterialProperty); \
	DECLARE_FUNCTION(execGetMaterialModelEditorOnlyData);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialProperty(); \
	friend struct Z_Construct_UClass_UDMMaterialProperty_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialProperty, UDMMaterialComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialProperty)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialProperty(UDMMaterialProperty&&); \
	UDMMaterialProperty(const UDMMaterialProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialProperty) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialProperty();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialProperty_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
