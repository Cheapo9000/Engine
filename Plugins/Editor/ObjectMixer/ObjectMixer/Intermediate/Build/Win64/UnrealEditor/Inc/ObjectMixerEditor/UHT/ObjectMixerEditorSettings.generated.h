// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectMixerEditorSettings.h"

#ifdef OBJECTMIXEREDITOR_ObjectMixerEditorSettings_generated_h
#error "ObjectMixerEditorSettings.generated.h already included, missing '#pragma once' in ObjectMixerEditorSettings.h"
#endif
#define OBJECTMIXEREDITOR_ObjectMixerEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectMixerEditorSettings ***********************************************
struct Z_Construct_UClass_UObjectMixerEditorSettings_Statics;
OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorSettings_NoRegister();

#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectMixerEditorSettings(); \
	friend struct ::Z_Construct_UClass_UObjectMixerEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTMIXEREDITOR_API UClass* ::Z_Construct_UClass_UObjectMixerEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectMixerEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectMixerEditor"), Z_Construct_UClass_UObjectMixerEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UObjectMixerEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("ObjectMixer");} \



#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBJECTMIXEREDITOR_API UObjectMixerEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectMixerEditorSettings(UObjectMixerEditorSettings&&) = delete; \
	UObjectMixerEditorSettings(const UObjectMixerEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBJECTMIXEREDITOR_API, UObjectMixerEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectMixerEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectMixerEditorSettings) \
	OBJECTMIXEREDITOR_API virtual ~UObjectMixerEditorSettings();


#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_17_PROLOG
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectMixerEditorSettings;

// ********** End Class UObjectMixerEditorSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectMixerEditorSettings_h

// ********** Begin Enum EObjectMixerHybridMode ****************************************************
#define FOREACH_ENUM_EOBJECTMIXERHYBRIDMODE(op) \
	op(EObjectMixerHybridMode::HybridActor) \
	op(EObjectMixerHybridMode::HybridComponent) \
	op(EObjectMixerHybridMode::HybridNone) 

enum class EObjectMixerHybridMode : uint8;
template<> struct TIsUEnumClass<EObjectMixerHybridMode> { enum { Value = true }; };
template<> OBJECTMIXEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EObjectMixerHybridMode>();
// ********** End Enum EObjectMixerHybridMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
