// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkSubjectSettings.h"

#ifdef LIVELINKINTERFACE_LiveLinkSubjectSettings_generated_h
#error "LiveLinkSubjectSettings.generated.h already included, missing '#pragma once' in LiveLinkSubjectSettings.h"
#endif
#define LIVELINKINTERFACE_LiveLinkSubjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkDefaultSubjectSettings ******************************************
struct Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkDefaultSubjectSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDefaultSubjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDefaultSubjectSettings)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkDefaultSubjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDefaultSubjectSettings(ULiveLinkDefaultSubjectSettings&&) = delete; \
	ULiveLinkDefaultSubjectSettings(const ULiveLinkDefaultSubjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDefaultSubjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDefaultSubjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkDefaultSubjectSettings) \
	NO_API virtual ~ULiveLinkDefaultSubjectSettings();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_29_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDefaultSubjectSettings;

// ********** End Class ULiveLinkDefaultSubjectSettings ********************************************

// ********** Begin Class ULiveLinkSubjectSettings *************************************************
struct Z_Construct_UClass_ULiveLinkSubjectSettings_Statics;
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();

#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSubjectSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkSubjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINTERFACE_API UClass* ::Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkSubjectSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInterface"), Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkSubjectSettings)


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkSubjectSettings(ULiveLinkSubjectSettings&&) = delete; \
	ULiveLinkSubjectSettings(const ULiveLinkSubjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKINTERFACE_API, ULiveLinkSubjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSubjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkSubjectSettings) \
	LIVELINKINTERFACE_API virtual ~ULiveLinkSubjectSettings();


#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_52_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_56_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkSubjectSettings;

// ********** End Class ULiveLinkSubjectSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
