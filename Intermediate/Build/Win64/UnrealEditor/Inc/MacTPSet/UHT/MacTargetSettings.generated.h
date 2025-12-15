// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MacTargetSettings.h"

#ifdef MACTARGETPLATFORMSETTINGS_MacTargetSettings_generated_h
#error "MacTargetSettings.generated.h already included, missing '#pragma once' in MacTargetSettings.h"
#endif
#define MACTARGETPLATFORMSETTINGS_MacTargetSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMacTargetSettings *******************************************************
struct Z_Construct_UClass_UMacTargetSettings_Statics;
MACTARGETPLATFORMSETTINGS_API UClass* Z_Construct_UClass_UMacTargetSettings_NoRegister();

#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_MacTargetSettings_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUMacTargetSettings(); \
	friend struct ::Z_Construct_UClass_UMacTargetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MACTARGETPLATFORMSETTINGS_API UClass* ::Z_Construct_UClass_UMacTargetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMacTargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MacTargetPlatformSettings"), Z_Construct_UClass_UMacTargetSettings_NoRegister) \
	DECLARE_SERIALIZER(UMacTargetSettings)


#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_MacTargetSettings_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMacTargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMacTargetSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMacTargetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMacTargetSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMacTargetSettings(UMacTargetSettings&&) = delete; \
	UMacTargetSettings(const UMacTargetSettings&) = delete; \
	NO_API virtual ~UMacTargetSettings();


#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_MacTargetSettings_h_49_PROLOG
#define FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_MacTargetSettings_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_MacTargetSettings_h_55_INCLASS \
	FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_MacTargetSettings_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMacTargetSettings;

// ********** End Class UMacTargetSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Mac_MacTargetPlatformSettings_Classes_MacTargetSettings_h

// ********** Begin Enum EMacMetalShaderStandard ***************************************************
#define FOREACH_ENUM_EMACMETALSHADERSTANDARD(op) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_Minimum) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_2_2) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_2_3) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_2_4) \
	op(EMacMetalShaderStandard::MacMetalSLStandard_3_0) 

enum class EMacMetalShaderStandard : uint8;
template<> struct TIsUEnumClass<EMacMetalShaderStandard> { enum { Value = true }; };
template<> MACTARGETPLATFORMSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMacMetalShaderStandard>();
// ********** End Enum EMacMetalShaderStandard *****************************************************

// ********** Begin Enum EMacTargetArchitecture ****************************************************
#define FOREACH_ENUM_EMACTARGETARCHITECTURE(op) \
	op(EMacTargetArchitecture::MacTargetArchitectureIntel) \
	op(EMacTargetArchitecture::MacTargetArchitectureUniversal) \
	op(EMacTargetArchitecture::MacTargetArchitectureAppleSilicon) \
	op(EMacTargetArchitecture::MacTargetArchitectureHost) 

enum class EMacTargetArchitecture : uint8;
template<> struct TIsUEnumClass<EMacTargetArchitecture> { enum { Value = true }; };
template<> MACTARGETPLATFORMSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMacTargetArchitecture>();
// ********** End Enum EMacTargetArchitecture ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
