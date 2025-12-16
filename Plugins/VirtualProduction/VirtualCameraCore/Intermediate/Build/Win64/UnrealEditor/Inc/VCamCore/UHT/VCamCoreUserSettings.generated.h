// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamCoreUserSettings.h"

#ifdef VCAMCORE_VCamCoreUserSettings_generated_h
#error "VCamCoreUserSettings.generated.h already included, missing '#pragma once' in VCamCoreUserSettings.h"
#endif
#define VCAMCORE_VCamCoreUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVirtualCameraCoreUserSettings *******************************************
struct Z_Construct_UClass_UVirtualCameraCoreUserSettings_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVirtualCameraCoreUserSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamCoreUserSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCameraCoreUserSettings(); \
	friend struct ::Z_Construct_UClass_UVirtualCameraCoreUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVirtualCameraCoreUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualCameraCoreUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVirtualCameraCoreUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UVirtualCameraCoreUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("VirtualCameraCore");} \



#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamCoreUserSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCameraCoreUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualCameraCoreUserSettings(UVirtualCameraCoreUserSettings&&) = delete; \
	UVirtualCameraCoreUserSettings(const UVirtualCameraCoreUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCameraCoreUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCameraCoreUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCameraCoreUserSettings) \
	NO_API virtual ~UVirtualCameraCoreUserSettings();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamCoreUserSettings_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamCoreUserSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamCoreUserSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamCoreUserSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualCameraCoreUserSettings;

// ********** End Class UVirtualCameraCoreUserSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_VCamCoreUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
