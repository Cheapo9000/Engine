// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMaterialSlate/AudioMaterialButton.h"

#ifdef AUDIOWIDGETS_AudioMaterialButton_generated_h
#error "AudioMaterialButton.generated.h already included, missing '#pragma once' in AudioMaterialButton.h"
#endif
#define AUDIOWIDGETS_AudioMaterialButton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnButtonPressedChangedEvent ******************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_15_DELEGATE \
AUDIOWIDGETS_API void FOnButtonPressedChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnButtonPressedChangedEvent, bool bIsPressed);


// ********** End Delegate FOnButtonPressedChangedEvent ********************************************

// ********** Begin Class UAudioMaterialButton *****************************************************
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetIsPressed); \
	DECLARE_FUNCTION(execGetIsPressed);


struct Z_Construct_UClass_UAudioMaterialButton_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialButton_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMaterialButton(); \
	friend struct ::Z_Construct_UClass_UAudioMaterialButton_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioMaterialButton_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMaterialButton, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioMaterialButton_NoRegister) \
	DECLARE_SERIALIZER(UAudioMaterialButton)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMaterialButton(UAudioMaterialButton&&) = delete; \
	UAudioMaterialButton(const UAudioMaterialButton&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioMaterialButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMaterialButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioMaterialButton) \
	AUDIOWIDGETS_API virtual ~UAudioMaterialButton();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMaterialButton;

// ********** End Class UAudioMaterialButton *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialButton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
