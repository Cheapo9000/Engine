// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EpicRtcSessionObserver.h"

#ifdef PIXELSTREAMING2RTC_EpicRtcSessionObserver_generated_h
#error "EpicRtcSessionObserver.generated.h already included, missing '#pragma once' in EpicRtcSessionObserver.h"
#endif
#define PIXELSTREAMING2RTC_EpicRtcSessionObserver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPixelStreaming2SessionObserver **************************************
struct Z_Construct_UClass_UPixelStreaming2SessionObserver_Statics;
PIXELSTREAMING2RTC_API UClass* Z_Construct_UClass_UPixelStreaming2SessionObserver_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2RTC_API UPixelStreaming2SessionObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2SessionObserver(UPixelStreaming2SessionObserver&&) = delete; \
	UPixelStreaming2SessionObserver(const UPixelStreaming2SessionObserver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2RTC_API, UPixelStreaming2SessionObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2SessionObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2SessionObserver) \
	virtual ~UPixelStreaming2SessionObserver() = default;


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPixelStreaming2SessionObserver(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2SessionObserver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2RTC_API UClass* ::Z_Construct_UClass_UPixelStreaming2SessionObserver_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2SessionObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PixelStreaming2RTC"), Z_Construct_UClass_UPixelStreaming2SessionObserver_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2SessionObserver)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPixelStreaming2SessionObserver() {} \
public: \
	typedef UPixelStreaming2SessionObserver UClassType; \
	typedef IPixelStreaming2SessionObserver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_14_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2SessionObserver;

// ********** End Interface UPixelStreaming2SessionObserver ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2RTC_Internal_EpicRtcSessionObserver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
