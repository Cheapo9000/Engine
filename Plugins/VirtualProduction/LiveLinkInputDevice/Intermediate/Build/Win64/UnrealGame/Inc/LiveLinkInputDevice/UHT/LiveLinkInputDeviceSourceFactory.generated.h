// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkInputDeviceSourceFactory.h"

#ifdef LIVELINKINPUTDEVICE_LiveLinkInputDeviceSourceFactory_generated_h
#error "LiveLinkInputDeviceSourceFactory.generated.h already included, missing '#pragma once' in LiveLinkInputDeviceSourceFactory.h"
#endif
#define LIVELINKINPUTDEVICE_LiveLinkInputDeviceSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkInputDeviceSourceFactory ****************************************
struct Z_Construct_UClass_ULiveLinkInputDeviceSourceFactory_Statics;
LIVELINKINPUTDEVICE_API UClass* Z_Construct_UClass_ULiveLinkInputDeviceSourceFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkInputDeviceSourceFactory(); \
	friend struct ::Z_Construct_UClass_ULiveLinkInputDeviceSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINPUTDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkInputDeviceSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkInputDeviceSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInputDevice"), Z_Construct_UClass_ULiveLinkInputDeviceSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkInputDeviceSourceFactory)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkInputDeviceSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkInputDeviceSourceFactory(ULiveLinkInputDeviceSourceFactory&&) = delete; \
	ULiveLinkInputDeviceSourceFactory(const ULiveLinkInputDeviceSourceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkInputDeviceSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInputDeviceSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkInputDeviceSourceFactory) \
	NO_API virtual ~ULiveLinkInputDeviceSourceFactory();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceFactory_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceFactory_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkInputDeviceSourceFactory;

// ********** End Class ULiveLinkInputDeviceSourceFactory ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
