// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/DMMaterialEffectStackPresetSubsystem.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialEffectStackPresetSubsystem_generated_h
#error "DMMaterialEffectStackPresetSubsystem.generated.h already included, missing '#pragma once' in DMMaterialEffectStackPresetSubsystem.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialEffectStackPresetSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDMMaterialEffectStackJson;

// ********** Begin Class UDMMaterialEffectStackPresetSubsystem ************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPresetNames); \
	DECLARE_FUNCTION(execRemovePreset); \
	DECLARE_FUNCTION(execLoadPreset); \
	DECLARE_FUNCTION(execSavePreset);


struct Z_Construct_UClass_UDMMaterialEffectStackPresetSubsystem_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialEffectStackPresetSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialEffectStackPresetSubsystem(); \
	friend struct ::Z_Construct_UClass_UDMMaterialEffectStackPresetSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialEffectStackPresetSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialEffectStackPresetSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialEffectStackPresetSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialEffectStackPresetSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIALEDITOR_API UDMMaterialEffectStackPresetSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialEffectStackPresetSubsystem(UDMMaterialEffectStackPresetSubsystem&&) = delete; \
	UDMMaterialEffectStackPresetSubsystem(const UDMMaterialEffectStackPresetSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialEffectStackPresetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialEffectStackPresetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialEffectStackPresetSubsystem) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialEffectStackPresetSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialEffectStackPresetSubsystem;

// ********** End Class UDMMaterialEffectStackPresetSubsystem **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Utils_DMMaterialEffectStackPresetSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
