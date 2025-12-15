// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HardwareTargetingSettings.h"

#ifdef HARDWARETARGETING_HardwareTargetingSettings_generated_h
#error "HardwareTargetingSettings.generated.h already included, missing '#pragma once' in HardwareTargetingSettings.h"
#endif
#define HARDWARETARGETING_HardwareTargetingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHardwareTargetingSettings ***********************************************
struct Z_Construct_UClass_UHardwareTargetingSettings_Statics;
HARDWARETARGETING_API UClass* Z_Construct_UClass_UHardwareTargetingSettings_NoRegister();

#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUHardwareTargetingSettings(); \
	friend struct ::Z_Construct_UClass_UHardwareTargetingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARDWARETARGETING_API UClass* ::Z_Construct_UClass_UHardwareTargetingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHardwareTargetingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardwareTargeting"), Z_Construct_UClass_UHardwareTargetingSettings_NoRegister) \
	DECLARE_SERIALIZER(UHardwareTargetingSettings)


#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARDWARETARGETING_API UHardwareTargetingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHardwareTargetingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARDWARETARGETING_API, UHardwareTargetingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHardwareTargetingSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHardwareTargetingSettings(UHardwareTargetingSettings&&) = delete; \
	UHardwareTargetingSettings(const UHardwareTargetingSettings&) = delete; \
	HARDWARETARGETING_API virtual ~UHardwareTargetingSettings();


#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_45_PROLOG
#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_INCLASS \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHardwareTargetingSettings;

// ********** End Class UHardwareTargetingSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h

// ********** Begin Enum EHardwareClass ************************************************************
#define FOREACH_ENUM_EHARDWARECLASS(op) \
	op(EHardwareClass::Unspecified) \
	op(EHardwareClass::Desktop) \
	op(EHardwareClass::Mobile) 

enum class EHardwareClass : uint8;
template<> struct TIsUEnumClass<EHardwareClass> { enum { Value = true }; };
template<> HARDWARETARGETING_NON_ATTRIBUTED_API UEnum* StaticEnum<EHardwareClass>();
// ********** End Enum EHardwareClass **************************************************************

// ********** Begin Enum EGraphicsPreset ***********************************************************
#define FOREACH_ENUM_EGRAPHICSPRESET(op) \
	op(EGraphicsPreset::Unspecified) \
	op(EGraphicsPreset::Maximum) \
	op(EGraphicsPreset::Scalable) 

enum class EGraphicsPreset : uint8;
template<> struct TIsUEnumClass<EGraphicsPreset> { enum { Value = true }; };
template<> HARDWARETARGETING_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphicsPreset>();
// ********** End Enum EGraphicsPreset *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
