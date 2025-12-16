// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Viewmodels/AudioComponentViewModel.h"

#ifdef TECHAUDIOTOOLS_AudioComponentViewModel_generated_h
#error "AudioComponentViewModel.generated.h already included, missing '#pragma once' in AudioComponentViewModel.h"
#endif
#define TECHAUDIOTOOLS_AudioComponentViewModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
enum class EAudioComponentPlayState : uint8;

// ********** Begin Class UAudioComponentViewModel *************************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPlayState); \
	DECLARE_FUNCTION(execOnVirtualizationChanged); \
	DECLARE_FUNCTION(execOnAudioFinished); \
	DECLARE_FUNCTION(execSetAudioComponent);


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_ACCESSORS \
static void GetPlayState_WrapperImpl(const void* Object, void* OutValue); \
static void GetbIsPlaying_WrapperImpl(const void* Object, void* OutValue); \
static void GetbIsStopped_WrapperImpl(const void* Object, void* OutValue); \
static void GetbIsFadingIn_WrapperImpl(const void* Object, void* OutValue); \
static void GetbIsFadingOut_WrapperImpl(const void* Object, void* OutValue); \
static void GetbIsVirtualized_WrapperImpl(const void* Object, void* OutValue);


struct Z_Construct_UClass_UAudioComponentViewModel_Statics;
TECHAUDIOTOOLS_API UClass* Z_Construct_UClass_UAudioComponentViewModel_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioComponentViewModel(); \
	friend struct ::Z_Construct_UClass_UAudioComponentViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLS_API UClass* ::Z_Construct_UClass_UAudioComponentViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioComponentViewModel, UMVVMViewModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechAudioTools"), Z_Construct_UClass_UAudioComponentViewModel_NoRegister) \
	DECLARE_SERIALIZER(UAudioComponentViewModel)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLS_API UAudioComponentViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioComponentViewModel(UAudioComponentViewModel&&) = delete; \
	UAudioComponentViewModel(const UAudioComponentViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLS_API, UAudioComponentViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponentViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponentViewModel) \
	TECHAUDIOTOOLS_API virtual ~UAudioComponentViewModel();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(TECHAUDIOTOOLS_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PlayState,TECHAUDIOTOOLS_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsPlaying,TECHAUDIOTOOLS_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsStopped,TECHAUDIOTOOLS_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsFadingIn,TECHAUDIOTOOLS_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsFadingOut,TECHAUDIOTOOLS_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsVirtualized,TECHAUDIOTOOLS_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(PlayState) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsPlaying) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsStopped) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsFadingIn) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsFadingOut) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsVirtualized) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_ENHANCED_CONSTRUCTORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h_16_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioComponentViewModel;

// ********** End Class UAudioComponentViewModel ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_Viewmodels_AudioComponentViewModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
