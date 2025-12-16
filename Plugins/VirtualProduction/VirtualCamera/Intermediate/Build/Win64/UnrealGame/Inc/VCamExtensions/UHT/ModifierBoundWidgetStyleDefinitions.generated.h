// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/ModifierBoundWidgetStyleDefinitions.h"

#ifdef VCAMEXTENSIONS_ModifierBoundWidgetStyleDefinitions_generated_h
#error "ModifierBoundWidgetStyleDefinitions.generated.h already included, missing '#pragma once' in ModifierBoundWidgetStyleDefinitions.h"
#endif
#define VCAMEXTENSIONS_ModifierBoundWidgetStyleDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UVCamModifier;
class UWidgetStyleData;

// ********** Begin Class UModifierBoundWidgetStyleDefinitions *************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<UWidgetStyleData*> GetStylesForName_Implementation(FName Category) const; \
	virtual TArray<UWidgetStyleData*> GetStylesForConnectionPoint_Implementation(UVCamModifier* Modifier, FName ConnectionPoint) const; \
	virtual TArray<UWidgetStyleData*> GetStylesForModifier_Implementation(UVCamModifier* Modifier) const; \
	DECLARE_FUNCTION(execGetStyleForNameByClass); \
	DECLARE_FUNCTION(execGetStyleForConnectionPointByClass); \
	DECLARE_FUNCTION(execGetStyleForModifierByClass); \
	DECLARE_FUNCTION(execGetStylesForName); \
	DECLARE_FUNCTION(execGetStylesForConnectionPoint); \
	DECLARE_FUNCTION(execGetStylesForModifier);


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics;
VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifierBoundWidgetStyleDefinitions(); \
	friend struct ::Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMEXTENSIONS_API UClass* ::Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_NoRegister(); \
public: \
	DECLARE_CLASS2(UModifierBoundWidgetStyleDefinitions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamExtensions"), Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_NoRegister) \
	DECLARE_SERIALIZER(UModifierBoundWidgetStyleDefinitions)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierBoundWidgetStyleDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModifierBoundWidgetStyleDefinitions(UModifierBoundWidgetStyleDefinitions&&) = delete; \
	UModifierBoundWidgetStyleDefinitions(const UModifierBoundWidgetStyleDefinitions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierBoundWidgetStyleDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierBoundWidgetStyleDefinitions); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierBoundWidgetStyleDefinitions) \
	NO_API virtual ~UModifierBoundWidgetStyleDefinitions();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModifierBoundWidgetStyleDefinitions;

// ********** End Class UModifierBoundWidgetStyleDefinitions ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
