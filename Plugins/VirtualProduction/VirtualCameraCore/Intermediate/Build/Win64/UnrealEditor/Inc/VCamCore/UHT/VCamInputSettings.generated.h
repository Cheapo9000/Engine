// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/VCamInputSettings.h"

#ifdef VCAMCORE_VCamInputSettings_generated_h
#error "VCamInputSettings.generated.h already included, missing '#pragma once' in VCamInputSettings.h"
#endif
#define VCAMCORE_VCamInputSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamInputSettings;
struct FVCamInputProfile;

// ********** Begin ScriptStruct FVCamInputProfile *************************************************
struct Z_Construct_UScriptStruct_FVCamInputProfile_Statics;
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVCamInputProfile_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVCamInputProfile;
// ********** End ScriptStruct FVCamInputProfile ***************************************************

// ********** Begin Class UVCamInputSettings *******************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputProfileNames); \
	DECLARE_FUNCTION(execSetInputProfiles); \
	DECLARE_FUNCTION(execSetDefaultInputProfile); \
	DECLARE_FUNCTION(execGetVCamInputSettings);


struct Z_Construct_UClass_UVCamInputSettings_Statics;
VCAMCORE_API UClass* Z_Construct_UClass_UVCamInputSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamInputSettings(); \
	friend struct ::Z_Construct_UClass_UVCamInputSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCORE_API UClass* ::Z_Construct_UClass_UVCamInputSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamInputSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VCamCore"), Z_Construct_UClass_UVCamInputSettings_NoRegister) \
	DECLARE_SERIALIZER(UVCamInputSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamInputSettings(UVCamInputSettings&&) = delete; \
	UVCamInputSettings(const UVCamInputSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamInputSettings) \
	NO_API virtual ~UVCamInputSettings();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_29_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamInputSettings;

// ********** End Class UVCamInputSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_Input_VCamInputSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
