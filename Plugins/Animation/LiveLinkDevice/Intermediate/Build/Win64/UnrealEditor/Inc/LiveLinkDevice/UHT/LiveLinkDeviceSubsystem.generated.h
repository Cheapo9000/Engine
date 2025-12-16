// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkDeviceSubsystem.h"

#ifdef LIVELINKDEVICE_LiveLinkDeviceSubsystem_generated_h
#error "LiveLinkDeviceSubsystem.generated.h already included, missing '#pragma once' in LiveLinkDeviceSubsystem.h"
#endif
#define LIVELINKDEVICE_LiveLinkDeviceSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULiveLinkDevice;
class ULiveLinkDeviceCapability;

// ********** Begin ScriptStruct FLiveLinkDeviceCreateResult ***************************************
struct Z_Construct_UScriptStruct_FLiveLinkDeviceCreateResult_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkDeviceCreateResult_Statics; \
	LIVELINKDEVICE_API static class UScriptStruct* StaticStruct();


struct FLiveLinkDeviceCreateResult;
// ********** End ScriptStruct FLiveLinkDeviceCreateResult *****************************************

// ********** Begin ScriptStruct FLiveLinkDeviceCreateError ****************************************
struct Z_Construct_UScriptStruct_FLiveLinkDeviceCreateError_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkDeviceCreateError_Statics; \
	LIVELINKDEVICE_API static class UScriptStruct* StaticStruct();


struct FLiveLinkDeviceCreateError;
// ********** End ScriptStruct FLiveLinkDeviceCreateError ******************************************

// ********** Begin Class ULiveLinkDeviceSubsystem *************************************************
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDevicesByCapability); \
	DECLARE_FUNCTION(execGetDevicesByClass);


struct Z_Construct_UClass_ULiveLinkDeviceSubsystem_Statics;
LIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkDeviceSubsystem_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDeviceSubsystem(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkDevice"), Z_Construct_UClass_ULiveLinkDeviceSubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceSubsystem)


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDeviceSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceSubsystem(ULiveLinkDeviceSubsystem&&) = delete; \
	ULiveLinkDeviceSubsystem(const ULiveLinkDeviceSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkDeviceSubsystem) \
	NO_API virtual ~ULiveLinkDeviceSubsystem();


#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_42_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceSubsystem;

// ********** End Class ULiveLinkDeviceSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkDevice_Source_LiveLinkDevice_Public_LiveLinkDeviceSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
