// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/ModifierBoundWidgetStylesAsset.h"

#ifdef VCAMEXTENSIONS_ModifierBoundWidgetStylesAsset_generated_h
#error "ModifierBoundWidgetStylesAsset.generated.h already included, missing '#pragma once' in ModifierBoundWidgetStylesAsset.h"
#endif
#define VCAMEXTENSIONS_ModifierBoundWidgetStylesAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UVCamModifier;
class UWidgetStyleData;

// ********** Begin Class UModifierBoundWidgetStylesAsset ******************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStyleForNameByClass); \
	DECLARE_FUNCTION(execGetStyleForConnectionPointByClass); \
	DECLARE_FUNCTION(execGetStyleForModifierByClass); \
	DECLARE_FUNCTION(execGetStylesForName); \
	DECLARE_FUNCTION(execGetStylesForConnectionPoint); \
	DECLARE_FUNCTION(execGetStylesForModifier);


struct Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics;
VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStylesAsset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifierBoundWidgetStylesAsset(); \
	friend struct ::Z_Construct_UClass_UModifierBoundWidgetStylesAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMEXTENSIONS_API UClass* ::Z_Construct_UClass_UModifierBoundWidgetStylesAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UModifierBoundWidgetStylesAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamExtensions"), Z_Construct_UClass_UModifierBoundWidgetStylesAsset_NoRegister) \
	DECLARE_SERIALIZER(UModifierBoundWidgetStylesAsset)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierBoundWidgetStylesAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModifierBoundWidgetStylesAsset(UModifierBoundWidgetStylesAsset&&) = delete; \
	UModifierBoundWidgetStylesAsset(const UModifierBoundWidgetStylesAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierBoundWidgetStylesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierBoundWidgetStylesAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierBoundWidgetStylesAsset) \
	NO_API virtual ~UModifierBoundWidgetStylesAsset();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModifierBoundWidgetStylesAsset;

// ********** End Class UModifierBoundWidgetStylesAsset ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStylesAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
