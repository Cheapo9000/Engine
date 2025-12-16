// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppleProResEncoderProtocol.h"

#ifdef APPLEPRORESMEDIA_AppleProResEncoderProtocol_generated_h
#error "AppleProResEncoderProtocol.generated.h already included, missing '#pragma once' in AppleProResEncoderProtocol.h"
#endif
#define APPLEPRORESMEDIA_AppleProResEncoderProtocol_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAppleProResEncoderProtocol **********************************************
struct Z_Construct_UClass_UAppleProResEncoderProtocol_Statics;
APPLEPRORESMEDIA_API UClass* Z_Construct_UClass_UAppleProResEncoderProtocol_NoRegister();

#define FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleProResEncoderProtocol(); \
	friend struct ::Z_Construct_UClass_UAppleProResEncoderProtocol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APPLEPRORESMEDIA_API UClass* ::Z_Construct_UClass_UAppleProResEncoderProtocol_NoRegister(); \
public: \
	DECLARE_CLASS2(UAppleProResEncoderProtocol, UFrameGrabberProtocol, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleProResMedia"), Z_Construct_UClass_UAppleProResEncoderProtocol_NoRegister) \
	DECLARE_SERIALIZER(UAppleProResEncoderProtocol)


#define FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAppleProResEncoderProtocol(UAppleProResEncoderProtocol&&) = delete; \
	UAppleProResEncoderProtocol(const UAppleProResEncoderProtocol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleProResEncoderProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleProResEncoderProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleProResEncoderProtocol) \
	NO_API virtual ~UAppleProResEncoderProtocol();


#define FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_48_PROLOG
#define FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h_52_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAppleProResEncoderProtocol;

// ********** End Class UAppleProResEncoderProtocol ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_AppleProResEncoderProtocol_h

// ********** Begin Enum EAppleProResEncoderFormats ************************************************
#define FOREACH_ENUM_EAPPLEPRORESENCODERFORMATS(op) \
	op(EAppleProResEncoderFormats::F_422HQ) \
	op(EAppleProResEncoderFormats::F_422) \
	op(EAppleProResEncoderFormats::F_422LT) \
	op(EAppleProResEncoderFormats::F_422Proxy) \
	op(EAppleProResEncoderFormats::F_4444) \
	op(EAppleProResEncoderFormats::F_4444XQ) 

enum class EAppleProResEncoderFormats : uint8;
template<> struct TIsUEnumClass<EAppleProResEncoderFormats> { enum { Value = true }; };
template<> APPLEPRORESMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAppleProResEncoderFormats>();
// ********** End Enum EAppleProResEncoderFormats **************************************************

// ********** Begin Enum EAppleProResEncoderColorDescription ***************************************
#define FOREACH_ENUM_EAPPLEPRORESENCODERCOLORDESCRIPTION(op) \
	op(EAppleProResEncoderColorDescription::CD_SDREC601_525_60HZ) \
	op(EAppleProResEncoderColorDescription::CD_SDREC601_625_50HZ) \
	op(EAppleProResEncoderColorDescription::CD_HDREC709) 

enum class EAppleProResEncoderColorDescription : uint8;
template<> struct TIsUEnumClass<EAppleProResEncoderColorDescription> { enum { Value = true }; };
template<> APPLEPRORESMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAppleProResEncoderColorDescription>();
// ********** End Enum EAppleProResEncoderColorDescription *****************************************

// ********** Begin Enum EAppleProResEncoderScanType ***********************************************
#define FOREACH_ENUM_EAPPLEPRORESENCODERSCANTYPE(op) \
	op(EAppleProResEncoderScanType::IM_PROGRESSIVE_SCAN) \
	op(EAppleProResEncoderScanType::IM_INTERLACED_TOP_FIELD_FIRST) \
	op(EAppleProResEncoderScanType::IM_INTERLATED_BOTTOM_FIRST_FIRST) 

enum class EAppleProResEncoderScanType : uint8;
template<> struct TIsUEnumClass<EAppleProResEncoderScanType> { enum { Value = true }; };
template<> APPLEPRORESMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAppleProResEncoderScanType>();
// ********** End Enum EAppleProResEncoderScanType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
