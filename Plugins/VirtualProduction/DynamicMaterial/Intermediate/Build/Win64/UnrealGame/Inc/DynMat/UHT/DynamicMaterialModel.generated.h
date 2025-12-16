// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/DynamicMaterialModel.h"

#ifdef DYNAMICMATERIAL_DynamicMaterialModel_generated_h
#error "DynamicMaterialModel.generated.h already included, missing '#pragma once' in DynamicMaterialModel.h"
#endif
#define DYNAMICMATERIAL_DynamicMaterialModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IDynamicMaterialModelEditorOnlyDataInterface;
class UClass;
class UDMMaterialComponent;
class UDMMaterialValue;
class UDMMaterialValueFloat1;
enum class EDMMaterialPropertyType : uint8;

// ********** Begin Class UDynamicMaterialModel ****************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGlobalOpacityValue); \
	DECLARE_FUNCTION(execGetValueByName); \
	DECLARE_FUNCTION(execGetValues); \
	DECLARE_FUNCTION(execGetComponentByPath); \
	DECLARE_FUNCTION(execGetGlobalParameterValue); \
	DECLARE_FUNCTION(execGetGlobalParameterValueForMaterialProperty); \
	DECLARE_FUNCTION(execIsModelValid);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execHasParameterName); \
	DECLARE_FUNCTION(execAddValue); \
	DECLARE_FUNCTION(execBP_GetEditorOnlyData);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDynamicMaterialModel_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDynamicMaterialModel_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMaterialModel(); \
	friend struct ::Z_Construct_UClass_UDynamicMaterialModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDynamicMaterialModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UDynamicMaterialModel, UDynamicMaterialModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDynamicMaterialModel_NoRegister) \
	DECLARE_SERIALIZER(UDynamicMaterialModel)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicMaterialModel(UDynamicMaterialModel&&) = delete; \
	UDynamicMaterialModel(const UDynamicMaterialModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDynamicMaterialModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMaterialModel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicMaterialModel) \
	DYNAMICMATERIAL_API virtual ~UDynamicMaterialModel();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_38_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicMaterialModel;

// ********** End Class UDynamicMaterialModel ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Model_DynamicMaterialModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
