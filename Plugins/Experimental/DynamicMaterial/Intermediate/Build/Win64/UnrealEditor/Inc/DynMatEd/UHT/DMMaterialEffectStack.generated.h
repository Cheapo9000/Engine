// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialEffectStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialEffect;
class UDMMaterialEffectStack;
class UDMMaterialLayerObject;
class UDMMaterialSlot;
struct FDMMaterialEffectStackJson;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialEffectStack_generated_h
#error "DMMaterialEffectStack.generated.h already included, missing '#pragma once' in DMMaterialEffectStack.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialEffectStack_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMMaterialEffectStackJson_Statics; \
	DYNAMICMATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIALEDITOR_API UScriptStruct* StaticStruct<struct FDMMaterialEffectStackJson>();

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyPreset); \
	DECLARE_FUNCTION(execCreatePreset); \
	DECLARE_FUNCTION(execBP_RemoveEffectByValue); \
	DECLARE_FUNCTION(execBP_RemoveEffectByIndex); \
	DECLARE_FUNCTION(execBP_MoveEffectByValue); \
	DECLARE_FUNCTION(execBP_MoveEffectByIndex); \
	DECLARE_FUNCTION(execSetEffect); \
	DECLARE_FUNCTION(execAddEffect); \
	DECLARE_FUNCTION(execHasEffect); \
	DECLARE_FUNCTION(execBP_GetEffects); \
	DECLARE_FUNCTION(execGetEffect); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetLayer); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execCreateEffectStackForLayer); \
	DECLARE_FUNCTION(execCreateEffectStackForSlot);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialEffectStack(); \
	friend struct Z_Construct_UClass_UDMMaterialEffectStack_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialEffectStack, UDMMaterialComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialEffectStack)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialEffectStack(UDMMaterialEffectStack&&); \
	UDMMaterialEffectStack(const UDMMaterialEffectStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialEffectStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialEffectStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialEffectStack) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialEffectStack();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialEffectStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialEffectStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
