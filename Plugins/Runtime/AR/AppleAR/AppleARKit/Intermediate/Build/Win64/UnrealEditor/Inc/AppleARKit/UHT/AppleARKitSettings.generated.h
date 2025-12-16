// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppleARKitSettings.h"

#ifdef APPLEARKIT_AppleARKitSettings_generated_h
#error "AppleARKitSettings.generated.h already included, missing '#pragma once' in AppleARKitSettings.h"
#endif
#define APPLEARKIT_AppleARKitSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAppleARKitSettings ******************************************************
struct Z_Construct_UClass_UAppleARKitSettings_Statics;
APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppleARKitSettings(); \
	friend struct ::Z_Construct_UClass_UAppleARKitSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APPLEARKIT_API UClass* ::Z_Construct_UClass_UAppleARKitSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAppleARKitSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AppleARKit"), Z_Construct_UClass_UAppleARKitSettings_NoRegister) \
	DECLARE_SERIALIZER(UAppleARKitSettings)


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAppleARKitSettings(UAppleARKitSettings&&) = delete; \
	UAppleARKitSettings(const UAppleARKitSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppleARKitSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleARKitSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAppleARKitSettings) \
	NO_API virtual ~UAppleARKitSettings();


#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_35_PROLOG
#define FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAppleARKitSettings;

// ********** End Class UAppleARKitSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h

// ********** Begin Enum EARFaceTrackingFileWriterType *********************************************
#define FOREACH_ENUM_EARFACETRACKINGFILEWRITERTYPE(op) \
	op(EARFaceTrackingFileWriterType::None) \
	op(EARFaceTrackingFileWriterType::CSV) \
	op(EARFaceTrackingFileWriterType::JSON) 

enum class EARFaceTrackingFileWriterType : uint8;
template<> struct TIsUEnumClass<EARFaceTrackingFileWriterType> { enum { Value = true }; };
template<> APPLEARKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EARFaceTrackingFileWriterType>();
// ********** End Enum EARFaceTrackingFileWriterType ***********************************************

// ********** Begin Enum ELivelinkTrackingType *****************************************************
#define FOREACH_ENUM_ELIVELINKTRACKINGTYPE(op) \
	op(ELivelinkTrackingType::FaceTracking) \
	op(ELivelinkTrackingType::PoseTracking) 

enum class ELivelinkTrackingType : uint8;
template<> struct TIsUEnumClass<ELivelinkTrackingType> { enum { Value = true }; };
template<> APPLEARKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELivelinkTrackingType>();
// ********** End Enum ELivelinkTrackingType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
