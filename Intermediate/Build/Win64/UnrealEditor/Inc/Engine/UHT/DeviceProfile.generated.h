// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeviceProfiles/DeviceProfile.h"

#ifdef ENGINE_DeviceProfile_generated_h
#error "DeviceProfile.generated.h already included, missing '#pragma once' in DeviceProfile.h"
#endif
#define ENGINE_DeviceProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDeviceProfile ***********************************************************
struct Z_Construct_UClass_UDeviceProfile_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDeviceProfile(); \
	friend struct ::Z_Construct_UClass_UDeviceProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDeviceProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(UDeviceProfile, UTextureLODSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDeviceProfile_NoRegister) \
	DECLARE_SERIALIZER(UDeviceProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDeviceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDeviceProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfile); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDeviceProfile(UDeviceProfile&&) = delete; \
	UDeviceProfile(const UDeviceProfile&) = delete; \
	ENGINE_API virtual ~UDeviceProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDeviceProfile;

// ********** End Class UDeviceProfile *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
