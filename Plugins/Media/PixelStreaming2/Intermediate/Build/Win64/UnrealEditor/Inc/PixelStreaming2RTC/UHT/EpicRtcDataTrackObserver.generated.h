// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EpicRtcDataTrackObserver.h"

#ifdef PIXELSTREAMING2RTC_EpicRtcDataTrackObserver_generated_h
#error "EpicRtcDataTrackObserver.generated.h already included, missing '#pragma once' in EpicRtcDataTrackObserver.h"
#endif
#define PIXELSTREAMING2RTC_EpicRtcDataTrackObserver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPixelStreaming2DataTrackObserver ************************************
struct Z_Construct_UClass_UPixelStreaming2DataTrackObserver_Statics;
PIXELSTREAMING2RTC_API UClass* Z_Construct_UClass_UPixelStreaming2DataTrackObserver_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2RTC_API UPixelStreaming2DataTrackObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2DataTrackObserver(UPixelStreaming2DataTrackObserver&&) = delete; \
	UPixelStreaming2DataTrackObserver(const UPixelStreaming2DataTrackObserver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2RTC_API, UPixelStreaming2DataTrackObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2DataTrackObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2DataTrackObserver) \
	virtual ~UPixelStreaming2DataTrackObserver() = default;


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPixelStreaming2DataTrackObserver(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2DataTrackObserver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2RTC_API UClass* ::Z_Construct_UClass_UPixelStreaming2DataTrackObserver_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2DataTrackObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PixelStreaming2RTC"), Z_Construct_UClass_UPixelStreaming2DataTrackObserver_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2DataTrackObserver)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPixelStreaming2DataTrackObserver() {} \
public: \
	typedef UPixelStreaming2DataTrackObserver UClassType; \
	typedef IPixelStreaming2DataTrackObserver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_14_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2DataTrackObserver;

// ********** End Interface UPixelStreaming2DataTrackObserver **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcDataTrackObserver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
