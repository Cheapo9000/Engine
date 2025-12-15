// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WindowsTargetSettings.h"

#ifdef WINDOWSTARGETPLATFORMSETTINGS_WindowsTargetSettings_generated_h
#error "WindowsTargetSettings.generated.h already included, missing '#pragma once' in WindowsTargetSettings.h"
#endif
#define WINDOWSTARGETPLATFORMSETTINGS_WindowsTargetSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWindowsTargetSettings ***************************************************
struct Z_Construct_UClass_UWindowsTargetSettings_Statics;
WINDOWSTARGETPLATFORMSETTINGS_API UClass* Z_Construct_UClass_UWindowsTargetSettings_NoRegister();

#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatformSettings_Classes_WindowsTargetSettings_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUWindowsTargetSettings(); \
	friend struct ::Z_Construct_UClass_UWindowsTargetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WINDOWSTARGETPLATFORMSETTINGS_API UClass* ::Z_Construct_UClass_UWindowsTargetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWindowsTargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WindowsTargetPlatformSettings"), Z_Construct_UClass_UWindowsTargetSettings_NoRegister) \
	DECLARE_SERIALIZER(UWindowsTargetSettings)


#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatformSettings_Classes_WindowsTargetSettings_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WINDOWSTARGETPLATFORMSETTINGS_API UWindowsTargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsTargetSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WINDOWSTARGETPLATFORMSETTINGS_API, UWindowsTargetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsTargetSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWindowsTargetSettings(UWindowsTargetSettings&&) = delete; \
	UWindowsTargetSettings(const UWindowsTargetSettings&) = delete; \
	WINDOWSTARGETPLATFORMSETTINGS_API virtual ~UWindowsTargetSettings();


#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatformSettings_Classes_WindowsTargetSettings_h_41_PROLOG
#define FID_Engine_Source_Developer_Windows_WindowsTargetPlatformSettings_Classes_WindowsTargetSettings_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatformSettings_Classes_WindowsTargetSettings_h_46_INCLASS \
	FID_Engine_Source_Developer_Windows_WindowsTargetPlatformSettings_Classes_WindowsTargetSettings_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWindowsTargetSettings;

// ********** End Class UWindowsTargetSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Windows_WindowsTargetPlatformSettings_Classes_WindowsTargetSettings_h

// ********** Begin Enum ECompilerVersion **********************************************************
#define FOREACH_ENUM_ECOMPILERVERSION(op) \
	op(ECompilerVersion::Default) \
	op(ECompilerVersion::VisualStudio2015) \
	op(ECompilerVersion::VisualStudio2017) \
	op(ECompilerVersion::VisualStudio2019) \
	op(ECompilerVersion::VisualStudio2022) \
	op(ECompilerVersion::VisualStudio2026) 

enum class ECompilerVersion : uint8;
template<> struct TIsUEnumClass<ECompilerVersion> { enum { Value = true }; };
template<> WINDOWSTARGETPLATFORMSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompilerVersion>();
// ********** End Enum ECompilerVersion ************************************************************

// ********** Begin Enum EDefaultGraphicsRHI *******************************************************
#define FOREACH_ENUM_EDEFAULTGRAPHICSRHI(op) \
	op(EDefaultGraphicsRHI::DefaultGraphicsRHI_Default) \
	op(EDefaultGraphicsRHI::DefaultGraphicsRHI_DX11) \
	op(EDefaultGraphicsRHI::DefaultGraphicsRHI_DX12) \
	op(EDefaultGraphicsRHI::DefaultGraphicsRHI_Vulkan) 

enum class EDefaultGraphicsRHI : uint8;
template<> struct TIsUEnumClass<EDefaultGraphicsRHI> { enum { Value = true }; };
template<> WINDOWSTARGETPLATFORMSETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EDefaultGraphicsRHI>();
// ********** End Enum EDefaultGraphicsRHI *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
