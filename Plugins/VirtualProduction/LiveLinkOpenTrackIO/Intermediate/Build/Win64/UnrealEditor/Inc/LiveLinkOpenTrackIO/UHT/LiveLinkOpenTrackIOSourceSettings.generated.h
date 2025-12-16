// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkOpenTrackIOSourceSettings.h"

#ifdef LIVELINKOPENTRACKIO_LiveLinkOpenTrackIOSourceSettings_generated_h
#error "LiveLinkOpenTrackIOSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkOpenTrackIOSourceSettings.h"
#endif
#define LIVELINKOPENTRACKIO_LiveLinkOpenTrackIOSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkOpenTrackIOSourceSettings ***************************************
struct Z_Construct_UClass_ULiveLinkOpenTrackIOSourceSettings_Statics;
LIVELINKOPENTRACKIO_API UClass* Z_Construct_UClass_ULiveLinkOpenTrackIOSourceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Public_LiveLinkOpenTrackIOSourceSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkOpenTrackIOSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkOpenTrackIOSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKOPENTRACKIO_API UClass* ::Z_Construct_UClass_ULiveLinkOpenTrackIOSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkOpenTrackIOSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkOpenTrackIO"), Z_Construct_UClass_ULiveLinkOpenTrackIOSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkOpenTrackIOSourceSettings)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Public_LiveLinkOpenTrackIOSourceSettings_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkOpenTrackIOSourceSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkOpenTrackIOSourceSettings(ULiveLinkOpenTrackIOSourceSettings&&) = delete; \
	ULiveLinkOpenTrackIOSourceSettings(const ULiveLinkOpenTrackIOSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkOpenTrackIOSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkOpenTrackIOSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkOpenTrackIOSourceSettings) \
	NO_API virtual ~ULiveLinkOpenTrackIOSourceSettings();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Public_LiveLinkOpenTrackIOSourceSettings_h_19_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Public_LiveLinkOpenTrackIOSourceSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Public_LiveLinkOpenTrackIOSourceSettings_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Public_LiveLinkOpenTrackIOSourceSettings_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkOpenTrackIOSourceSettings;

// ********** End Class ULiveLinkOpenTrackIOSourceSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkOpenTrackIO_Source_LiveLinkOpenTrackIO_Public_LiveLinkOpenTrackIOSourceSettings_h

// ********** Begin Enum ELiveLinkOpenTrackIOTransformSubjects *************************************
#define FOREACH_ENUM_ELIVELINKOPENTRACKIOTRANSFORMSUBJECTS(op) \
	op(ELiveLinkOpenTrackIOTransformSubjects::NoTransformSubjects) \
	op(ELiveLinkOpenTrackIOTransformSubjects::EnableTransformSubjects) \
	op(ELiveLinkOpenTrackIOTransformSubjects::EnableTransformSubjectsNoCameraXForm) 

enum class ELiveLinkOpenTrackIOTransformSubjects;
template<> struct TIsUEnumClass<ELiveLinkOpenTrackIOTransformSubjects> { enum { Value = true }; };
template<> LIVELINKOPENTRACKIO_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkOpenTrackIOTransformSubjects>();
// ********** End Enum ELiveLinkOpenTrackIOTransformSubjects ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
