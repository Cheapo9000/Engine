// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialStage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialLayerObject;
class UDMMaterialStage;
class UDMMaterialStageInput;
class UDMMaterialStageSource;
class UMaterial;
enum class EDMMaterialPropertyType : uint8;
enum class EDMValueType : uint8;
struct FDMMaterialStageConnection;
struct FDMMaterialStageConnectorChannel;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialStage_generated_h
#error "DMMaterialStage.generated.h already included, missing '#pragma once' in DMMaterialStage.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialStage_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNextStage); \
	DECLARE_FUNCTION(execGetPreviousStage); \
	DECLARE_FUNCTION(execFindIndex); \
	DECLARE_FUNCTION(execGeneratePreviewMaterial); \
	DECLARE_FUNCTION(execVerifyInputMap); \
	DECLARE_FUNCTION(execVerifyAllInputMaps); \
	DECLARE_FUNCTION(execRemoveUnusedInputs); \
	DECLARE_FUNCTION(execChangeInput_PreviousStage); \
	DECLARE_FUNCTION(execChangeInput); \
	DECLARE_FUNCTION(execChangeSource); \
	DECLARE_FUNCTION(execResetInputConnectionMap); \
	DECLARE_FUNCTION(execRemoveAllInputs); \
	DECLARE_FUNCTION(execRemoveInput); \
	DECLARE_FUNCTION(execAddInput); \
	DECLARE_FUNCTION(execIsCompatibleWithNextStage); \
	DECLARE_FUNCTION(execIsCompatibleWithPreviousStage); \
	DECLARE_FUNCTION(execIsInputMapped); \
	DECLARE_FUNCTION(execGetSourceType); \
	DECLARE_FUNCTION(execGetInputConnectionMap); \
	DECLARE_FUNCTION(execGetInputs); \
	DECLARE_FUNCTION(execSetSource); \
	DECLARE_FUNCTION(execSetCanChangeSource); \
	DECLARE_FUNCTION(execCanChangeSource); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execCreateMaterialStage);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialStage(); \
	friend struct Z_Construct_UClass_UDMMaterialStage_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialStage, UDMMaterialComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialStage)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialStage(UDMMaterialStage&&); \
	UDMMaterialStage(const UDMMaterialStage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialStage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialStage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialStage) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialStage();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialStage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialStage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
