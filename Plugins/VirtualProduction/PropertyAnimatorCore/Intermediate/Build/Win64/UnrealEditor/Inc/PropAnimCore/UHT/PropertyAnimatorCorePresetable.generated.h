// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Presets/PropertyAnimatorCorePresetable.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCorePresetable_generated_h
#error "PropertyAnimatorCorePresetable.generated.h already included, missing '#pragma once' in PropertyAnimatorCorePresetable.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCorePresetable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPropertyAnimatorCorePresetable **************************************
struct Z_Construct_UClass_UPropertyAnimatorCorePresetable_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCorePresetable_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYANIMATORCORE_API UPropertyAnimatorCorePresetable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCorePresetable(UPropertyAnimatorCorePresetable&&) = delete; \
	UPropertyAnimatorCorePresetable(const UPropertyAnimatorCorePresetable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCorePresetable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCorePresetable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyAnimatorCorePresetable) \
	virtual ~UPropertyAnimatorCorePresetable() = default;


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCorePresetable(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCorePresetable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCorePresetable_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCorePresetable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCorePresetable_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCorePresetable)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPropertyAnimatorCorePresetable() {} \
public: \
	typedef UPropertyAnimatorCorePresetable UClassType; \
	typedef IPropertyAnimatorCorePresetable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCorePresetable;

// ********** End Interface UPropertyAnimatorCorePresetable ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_Presets_PropertyAnimatorCorePresetable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
