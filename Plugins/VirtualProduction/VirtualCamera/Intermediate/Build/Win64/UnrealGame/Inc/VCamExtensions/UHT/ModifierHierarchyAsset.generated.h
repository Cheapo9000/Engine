// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hierarchies/ModifierHierarchyAsset.h"

#ifdef VCAMEXTENSIONS_ModifierHierarchyAsset_generated_h
#error "ModifierHierarchyAsset.generated.h already included, missing '#pragma once' in ModifierHierarchyAsset.h"
#endif
#define VCAMEXTENSIONS_ModifierHierarchyAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;
class UVCamModifier;
struct FVCamModifierConnectionBinding;

// ********** Begin Class UModifierHierarchyAsset **************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGroupsContainingModifier); \
	DECLARE_FUNCTION(execGetConnectionPointTargetForNode); \
	DECLARE_FUNCTION(execGetModifierInNode); \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetParentNode); \
	DECLARE_FUNCTION(execGetRootNode);


struct Z_Construct_UClass_UModifierHierarchyAsset_Statics;
VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierHierarchyAsset_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifierHierarchyAsset(); \
	friend struct ::Z_Construct_UClass_UModifierHierarchyAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMEXTENSIONS_API UClass* ::Z_Construct_UClass_UModifierHierarchyAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UModifierHierarchyAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamExtensions"), Z_Construct_UClass_UModifierHierarchyAsset_NoRegister) \
	DECLARE_SERIALIZER(UModifierHierarchyAsset)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierHierarchyAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModifierHierarchyAsset(UModifierHierarchyAsset&&) = delete; \
	UModifierHierarchyAsset(const UModifierHierarchyAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierHierarchyAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierHierarchyAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierHierarchyAsset) \
	NO_API virtual ~UModifierHierarchyAsset();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModifierHierarchyAsset;

// ********** End Class UModifierHierarchyAsset ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
