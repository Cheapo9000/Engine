// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkDeviceCapability.h"

#ifdef LIVELINKDEVICE_LiveLinkDeviceCapability_generated_h
#error "LiveLinkDeviceCapability.generated.h already included, missing '#pragma once' in LiveLinkDeviceCapability.h"
#endif
#define LIVELINKDEVICE_LiveLinkDeviceCapability_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface ULiveLinkDeviceCapability ********************************************
struct Z_Construct_UClass_ULiveLinkDeviceCapability_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDeviceCapability_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceCapability(ULiveLinkDeviceCapability&&) = delete; \
	ULiveLinkDeviceCapability(const ULiveLinkDeviceCapability&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceCapability); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceCapability); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkDeviceCapability) \
	virtual ~ULiveLinkDeviceCapability() = default;


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULiveLinkDeviceCapability(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceCapability_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceCapability_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceCapability, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDeviceCapability_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceCapability)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILiveLinkDeviceCapability() {} \
public: \
	typedef ULiveLinkDeviceCapability UClassType; \
	typedef ILiveLinkDeviceCapability ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_29_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceCapability;

// ********** End Interface ULiveLinkDeviceCapability **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
