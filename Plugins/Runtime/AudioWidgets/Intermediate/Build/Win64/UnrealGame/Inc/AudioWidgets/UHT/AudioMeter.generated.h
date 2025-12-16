// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMeter.h"

#ifdef AUDIOWIDGETS_AudioMeter_generated_h
#error "AudioMeter.generated.h already included, missing '#pragma once' in AudioMeter.h"
#endif
#define AUDIOWIDGETS_AudioMeter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FMeterChannelInfo;

// ********** Begin ScriptStruct FAudioMeterDefaultColorStyle **************************************
struct Z_Construct_UScriptStruct_FAudioMeterDefaultColorStyle_Statics;
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioMeterDefaultColorStyle_Statics; \
	AUDIOWIDGETS_API static class UScriptStruct* StaticStruct(); \
	typedef FAudioMeterDefaultColorWidgetStyle Super;


struct FAudioMeterDefaultColorStyle;
// ********** End ScriptStruct FAudioMeterDefaultColorStyle ****************************************

// ********** Begin Delegate FGetMeterChannelInfo **************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_65_DELEGATE \
static AUDIOWIDGETS_API TArray<FMeterChannelInfo> FGetMeterChannelInfo_DelegateWrapper(const FScriptDelegate& GetMeterChannelInfo);


// ********** End Delegate FGetMeterChannelInfo ****************************************************

// ********** Begin Class UAudioMeter **************************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_61_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetMeterScaleLabelColor); \
	DECLARE_FUNCTION(execSetMeterScaleColor); \
	DECLARE_FUNCTION(execSetMeterClippingColor); \
	DECLARE_FUNCTION(execSetMeterPeakColor); \
	DECLARE_FUNCTION(execSetMeterValueColor); \
	DECLARE_FUNCTION(execSetMeterBackgroundColor); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execSetMeterChannelInfo); \
	DECLARE_FUNCTION(execGetMeterChannelInfo);


struct Z_Construct_UClass_UAudioMeter_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMeter_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMeter(); \
	friend struct ::Z_Construct_UClass_UAudioMeter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioMeter_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMeter, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioMeter_NoRegister) \
	DECLARE_SERIALIZER(UAudioMeter)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOWIDGETS_API UAudioMeter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMeter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioMeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMeter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMeter(UAudioMeter&&) = delete; \
	UAudioMeter(const UAudioMeter&) = delete; \
	AUDIOWIDGETS_API virtual ~UAudioMeter();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_58_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_61_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_61_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMeter;

// ********** End Class UAudioMeter ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMeter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
