// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkDeviceCapability_Recording.h"

#ifdef LIVELINKDEVICE_LiveLinkDeviceCapability_Recording_generated_h
#error "LiveLinkDeviceCapability_Recording.generated.h already included, missing '#pragma once' in LiveLinkDeviceCapability_Recording.h"
#endif
#define LIVELINKDEVICE_LiveLinkDeviceCapability_Recording_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface ULiveLinkDeviceCapability_Recording **********************************
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording);


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULiveLinkDeviceCapability_Recording_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDeviceCapability_Recording_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceCapability_Recording(ULiveLinkDeviceCapability_Recording&&) = delete; \
	ULiveLinkDeviceCapability_Recording(const ULiveLinkDeviceCapability_Recording&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceCapability_Recording); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceCapability_Recording); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkDeviceCapability_Recording) \
	virtual ~ULiveLinkDeviceCapability_Recording() = default;


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULiveLinkDeviceCapability_Recording(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceCapability_Recording_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceCapability_Recording_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceCapability_Recording, ULiveLinkDeviceCapability, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDeviceCapability_Recording_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceCapability_Recording)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILiveLinkDeviceCapability_Recording() {} \
public: \
	typedef ULiveLinkDeviceCapability_Recording UClassType; \
	typedef ILiveLinkDeviceCapability_Recording ThisClass; \
	static bool Execute_IsRecording(const UObject* O); \
	static bool Execute_StartRecording(UObject* O); \
	static bool Execute_StopRecording(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_9_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceCapability_Recording;

// ********** End Interface ULiveLinkDeviceCapability_Recording ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceCapability_Recording_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
