// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargetDeprecated.h"

#ifdef IKRIG_IKRetargetDeprecated_generated_h
#error "IKRetargetDeprecated.generated.h already included, missing '#pragma once' in IKRetargetDeprecated.h"
#endif
#define IKRIG_IKRetargetDeprecated_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTargetChainSpeedPlantSettings ************************************
struct Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FTargetChainSpeedPlantSettings;
// ********** End ScriptStruct FTargetChainSpeedPlantSettings **************************************

// ********** Begin ScriptStruct FTargetChainFKSettings ********************************************
struct Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTargetChainFKSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FTargetChainFKSettings;
// ********** End ScriptStruct FTargetChainFKSettings **********************************************

// ********** Begin ScriptStruct FTargetChainIKSettings ********************************************
struct Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTargetChainIKSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FTargetChainIKSettings;
// ********** End ScriptStruct FTargetChainIKSettings **********************************************

// ********** Begin ScriptStruct FTargetChainSettings **********************************************
struct Z_Construct_UScriptStruct_FTargetChainSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTargetChainSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FTargetChainSettings;
// ********** End ScriptStruct FTargetChainSettings ************************************************

// ********** Begin ScriptStruct FTargetRootSettings ***********************************************
struct Z_Construct_UScriptStruct_FTargetRootSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTargetRootSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FTargetRootSettings;
// ********** End ScriptStruct FTargetRootSettings *************************************************

// ********** Begin ScriptStruct FRetargetGlobalSettings *******************************************
struct Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_158_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRetargetGlobalSettings_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FRetargetGlobalSettings;
// ********** End ScriptStruct FRetargetGlobalSettings *********************************************

// ********** Begin Class URetargetChainSettings ***************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_194_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URetargetChainSettings, IKRIG_API)


struct Z_Construct_UClass_URetargetChainSettings_Statics;
IKRIG_API UClass* Z_Construct_UClass_URetargetChainSettings_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetChainSettings(); \
	friend struct ::Z_Construct_UClass_URetargetChainSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_URetargetChainSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URetargetChainSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_URetargetChainSettings_NoRegister) \
	DECLARE_SERIALIZER(URetargetChainSettings) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_194_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API URetargetChainSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URetargetChainSettings(URetargetChainSettings&&) = delete; \
	URetargetChainSettings(const URetargetChainSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, URetargetChainSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetChainSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetChainSettings) \
	IKRIG_API virtual ~URetargetChainSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_191_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_194_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URetargetChainSettings;

// ********** End Class URetargetChainSettings *****************************************************

// ********** Begin Class URetargetRootSettings ****************************************************
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_258_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URetargetRootSettings, IKRIG_API)


struct Z_Construct_UClass_URetargetRootSettings_Statics;
IKRIG_API UClass* Z_Construct_UClass_URetargetRootSettings_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_258_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetRootSettings(); \
	friend struct ::Z_Construct_UClass_URetargetRootSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_URetargetRootSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URetargetRootSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_URetargetRootSettings_NoRegister) \
	DECLARE_SERIALIZER(URetargetRootSettings) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_258_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_258_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API URetargetRootSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URetargetRootSettings(URetargetRootSettings&&) = delete; \
	URetargetRootSettings(const URetargetRootSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, URetargetRootSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetRootSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetRootSettings) \
	IKRIG_API virtual ~URetargetRootSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_255_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_258_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_258_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_258_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URetargetRootSettings;

// ********** End Class URetargetRootSettings ******************************************************

// ********** Begin Class UIKRetargetGlobalSettings ************************************************
struct Z_Construct_UClass_UIKRetargetGlobalSettings_Statics;
IKRIG_API UClass* Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_287_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetGlobalSettings(); \
	friend struct ::Z_Construct_UClass_UIKRetargetGlobalSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IKRIG_API UClass* ::Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UIKRetargetGlobalSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister) \
	DECLARE_SERIALIZER(UIKRetargetGlobalSettings)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_287_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKRetargetGlobalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIKRetargetGlobalSettings(UIKRetargetGlobalSettings&&) = delete; \
	UIKRetargetGlobalSettings(const UIKRetargetGlobalSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKRetargetGlobalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetGlobalSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetGlobalSettings) \
	IKRIG_API virtual ~UIKRetargetGlobalSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_284_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_287_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_287_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h_287_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIKRetargetGlobalSettings;

// ********** End Class UIKRetargetGlobalSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetDeprecated_h

// ********** Begin Enum ERetargetTranslationMode **************************************************
#define FOREACH_ENUM_ERETARGETTRANSLATIONMODE(op) \
	op(ERetargetTranslationMode::None) \
	op(ERetargetTranslationMode::GloballyScaled) \
	op(ERetargetTranslationMode::Absolute) \
	op(ERetargetTranslationMode::StretchBoneLengthUniformly) \
	op(ERetargetTranslationMode::StretchBoneLengthNonUniformly) 

enum class ERetargetTranslationMode : uint8;
template<> struct TIsUEnumClass<ERetargetTranslationMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERetargetTranslationMode>();
// ********** End Enum ERetargetTranslationMode ****************************************************

// ********** Begin Enum ERetargetRotationMode *****************************************************
#define FOREACH_ENUM_ERETARGETROTATIONMODE(op) \
	op(ERetargetRotationMode::Interpolated) \
	op(ERetargetRotationMode::OneToOne) \
	op(ERetargetRotationMode::OneToOneReversed) \
	op(ERetargetRotationMode::MatchChain) \
	op(ERetargetRotationMode::MatchScaledChain) \
	op(ERetargetRotationMode::None) 

enum class ERetargetRotationMode : uint8;
template<> struct TIsUEnumClass<ERetargetRotationMode> { enum { Value = true }; };
template<> IKRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERetargetRotationMode>();
// ********** End Enum ERetargetRotationMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
