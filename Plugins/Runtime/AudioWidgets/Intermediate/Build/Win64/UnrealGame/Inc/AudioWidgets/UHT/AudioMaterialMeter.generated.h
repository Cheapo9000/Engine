// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMaterialSlate/AudioMaterialMeter.h"

#ifdef AUDIOWIDGETS_AudioMaterialMeter_generated_h
#error "AudioMaterialMeter.generated.h already included, missing '#pragma once' in AudioMaterialMeter.h"
#endif
#define AUDIOWIDGETS_AudioMaterialMeter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeterChannelInfo;

// ********** Begin Delegate FGetMeterChannelInfo **************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_63_DELEGATE \
static AUDIOWIDGETS_API TArray<FMeterChannelInfo> FGetMeterChannelInfo_DelegateWrapper(const FScriptDelegate& GetMeterChannelInfo);


// ********** End Delegate FGetMeterChannelInfo ****************************************************

// ********** Begin Class UAudioMaterialMeter ******************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMeterChannelInfo); \
	DECLARE_FUNCTION(execGetMeterChannelInfo);


struct Z_Construct_UClass_UAudioMaterialMeter_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialMeter_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMaterialMeter(); \
	friend struct ::Z_Construct_UClass_UAudioMaterialMeter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioMaterialMeter_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMaterialMeter, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioMaterialMeter_NoRegister) \
	DECLARE_SERIALIZER(UAudioMaterialMeter)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMaterialMeter(UAudioMaterialMeter&&) = delete; \
	UAudioMaterialMeter(const UAudioMaterialMeter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioMaterialMeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMaterialMeter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioMaterialMeter) \
	AUDIOWIDGETS_API virtual ~UAudioMaterialMeter();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMaterialMeter;

// ********** End Class UAudioMaterialMeter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
