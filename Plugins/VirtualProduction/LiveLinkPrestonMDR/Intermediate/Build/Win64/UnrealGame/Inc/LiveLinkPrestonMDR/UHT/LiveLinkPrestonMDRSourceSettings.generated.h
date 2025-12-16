// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkPrestonMDRSourceSettings.h"

#ifdef LIVELINKPRESTONMDR_LiveLinkPrestonMDRSourceSettings_generated_h
#error "LiveLinkPrestonMDRSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkPrestonMDRSourceSettings.h"
#endif
#define LIVELINKPRESTONMDR_LiveLinkPrestonMDRSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEncoderRange *****************************************************
struct Z_Construct_UScriptStruct_FEncoderRange_Statics;
#define FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEncoderRange_Statics; \
	LIVELINKPRESTONMDR_API static class UScriptStruct* StaticStruct();


struct FEncoderRange;
// ********** End ScriptStruct FEncoderRange *******************************************************

// ********** Begin Class ULiveLinkPrestonMDRSourceSettings ****************************************
struct Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics;
LIVELINKPRESTONMDR_API UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkPrestonMDRSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKPRESTONMDR_API UClass* ::Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkPrestonMDRSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkPrestonMDR"), Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkPrestonMDRSourceSettings)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkPrestonMDRSourceSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkPrestonMDRSourceSettings(ULiveLinkPrestonMDRSourceSettings&&) = delete; \
	ULiveLinkPrestonMDRSourceSettings(const ULiveLinkPrestonMDRSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkPrestonMDRSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkPrestonMDRSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkPrestonMDRSourceSettings) \
	NO_API virtual ~ULiveLinkPrestonMDRSourceSettings();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_35_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkPrestonMDRSourceSettings;

// ********** End Class ULiveLinkPrestonMDRSourceSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h

// ********** Begin Enum EFIZDataMode **************************************************************
#define FOREACH_ENUM_EFIZDATAMODE(op) \
	op(EFIZDataMode::EncoderData) \
	op(EFIZDataMode::CalibratedData) 

enum class EFIZDataMode : uint8;
template<> struct TIsUEnumClass<EFIZDataMode> { enum { Value = true }; };
template<> LIVELINKPRESTONMDR_NON_ATTRIBUTED_API UEnum* StaticEnum<EFIZDataMode>();
// ********** End Enum EFIZDataMode ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
