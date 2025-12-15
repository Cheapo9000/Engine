// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PIEPreviewSettings.h"

#ifdef PIEPREVIEWDEVICEPROFILESELECTOR_PIEPreviewSettings_generated_h
#error "PIEPreviewSettings.generated.h already included, missing '#pragma once' in PIEPreviewSettings.h"
#endif
#define PIEPREVIEWDEVICEPROFILESELECTOR_PIEPreviewSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPIEPreviewSettings ******************************************************
struct Z_Construct_UClass_UPIEPreviewSettings_Statics;
PIEPREVIEWDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UPIEPreviewSettings_NoRegister();

#define FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPIEPreviewSettings(); \
	friend struct ::Z_Construct_UClass_UPIEPreviewSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIEPREVIEWDEVICEPROFILESELECTOR_API UClass* ::Z_Construct_UClass_UPIEPreviewSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPIEPreviewSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PIEPreviewDeviceProfileSelector"), Z_Construct_UClass_UPIEPreviewSettings_NoRegister) \
	DECLARE_SERIALIZER(UPIEPreviewSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("PIEPreviewSettings");} \



#define FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIEPREVIEWDEVICEPROFILESELECTOR_API UPIEPreviewSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPIEPreviewSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIEPREVIEWDEVICEPROFILESELECTOR_API, UPIEPreviewSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPIEPreviewSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPIEPreviewSettings(UPIEPreviewSettings&&) = delete; \
	UPIEPreviewSettings(const UPIEPreviewSettings&) = delete; \
	PIEPREVIEWDEVICEPROFILESELECTOR_API virtual ~UPIEPreviewSettings();


#define FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_16_PROLOG
#define FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_INCLASS \
	FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPIEPreviewSettings;

// ********** End Class UPIEPreviewSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
