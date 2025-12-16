// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hierarchies/BaseModifierGroup.h"

#ifdef VCAMEXTENSIONS_BaseModifierGroup_generated_h
#error "BaseModifierGroup.generated.h already included, missing '#pragma once' in BaseModifierGroup.h"
#endif
#define VCAMEXTENSIONS_BaseModifierGroup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseModifierGroup *******************************************************
struct Z_Construct_UClass_UBaseModifierGroup_Statics;
VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UBaseModifierGroup_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseModifierGroup(); \
	friend struct ::Z_Construct_UClass_UBaseModifierGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMEXTENSIONS_API UClass* ::Z_Construct_UClass_UBaseModifierGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseModifierGroup, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamExtensions"), Z_Construct_UClass_UBaseModifierGroup_NoRegister) \
	DECLARE_SERIALIZER(UBaseModifierGroup)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseModifierGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseModifierGroup(UBaseModifierGroup&&) = delete; \
	UBaseModifierGroup(const UBaseModifierGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseModifierGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseModifierGroup); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseModifierGroup) \
	NO_API virtual ~UBaseModifierGroup();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseModifierGroup;

// ********** End Class UBaseModifierGroup *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VCamExtensions_Public_Hierarchies_BaseModifierGroup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
