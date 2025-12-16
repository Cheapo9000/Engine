// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectMixerFilterFactory.h"

#ifdef OBJECTMIXEREDITOR_ObjectMixerFilterFactory_generated_h
#error "ObjectMixerFilterFactory.generated.h already included, missing '#pragma once' in ObjectMixerFilterFactory.h"
#endif
#define OBJECTMIXEREDITOR_ObjectMixerFilterFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectMixerBlueprintFilterFactory ***************************************
struct Z_Construct_UClass_UObjectMixerBlueprintFilterFactory_Statics;
OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerBlueprintFilterFactory_NoRegister();

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerFilterFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectMixerBlueprintFilterFactory(); \
	friend struct ::Z_Construct_UClass_UObjectMixerBlueprintFilterFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTMIXEREDITOR_API UClass* ::Z_Construct_UClass_UObjectMixerBlueprintFilterFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectMixerBlueprintFilterFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectMixerEditor"), Z_Construct_UClass_UObjectMixerBlueprintFilterFactory_NoRegister) \
	DECLARE_SERIALIZER(UObjectMixerBlueprintFilterFactory)


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerFilterFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectMixerBlueprintFilterFactory(UObjectMixerBlueprintFilterFactory&&) = delete; \
	UObjectMixerBlueprintFilterFactory(const UObjectMixerBlueprintFilterFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBJECTMIXEREDITOR_API, UObjectMixerBlueprintFilterFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectMixerBlueprintFilterFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectMixerBlueprintFilterFactory) \
	OBJECTMIXEREDITOR_API virtual ~UObjectMixerBlueprintFilterFactory();


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerFilterFactory_h_11_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerFilterFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerFilterFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerFilterFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectMixerBlueprintFilterFactory;

// ********** End Class UObjectMixerBlueprintFilterFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerFilterFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
