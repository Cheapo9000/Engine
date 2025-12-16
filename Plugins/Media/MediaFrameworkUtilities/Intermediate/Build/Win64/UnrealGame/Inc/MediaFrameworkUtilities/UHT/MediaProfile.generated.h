// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Profile/MediaProfile.h"

#ifdef MEDIAFRAMEWORKUTILITIES_MediaProfile_generated_h
#error "MediaProfile.generated.h already included, missing '#pragma once' in MediaProfile.h"
#endif
#define MEDIAFRAMEWORKUTILITIES_MediaProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMediaProfile ************************************************************
struct Z_Construct_UClass_UMediaProfile_Statics;
MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaProfile_NoRegister();

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaProfile(); \
	friend struct ::Z_Construct_UClass_UMediaProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAFRAMEWORKUTILITIES_API UClass* ::Z_Construct_UClass_UMediaProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), Z_Construct_UClass_UMediaProfile_NoRegister) \
	DECLARE_SERIALIZER(UMediaProfile)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaProfile(UMediaProfile&&) = delete; \
	UMediaProfile(const UMediaProfile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaProfile) \
	NO_API virtual ~UMediaProfile();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_20_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaProfile;

// ********** End Class UMediaProfile **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_Profile_MediaProfile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
