// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRScribeDeveloperSettings.h"

#ifdef XRSCRIBE_XRScribeDeveloperSettings_generated_h
#error "XRScribeDeveloperSettings.generated.h already included, missing '#pragma once' in XRScribeDeveloperSettings.h"
#endif
#define XRSCRIBE_XRScribeDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UXRScribeDeveloperSettings ***********************************************
struct Z_Construct_UClass_UXRScribeDeveloperSettings_Statics;
XRSCRIBE_API UClass* Z_Construct_UClass_UXRScribeDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_XR_XRScribe_Source_XRScribe_Public_XRScribeDeveloperSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRScribeDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UXRScribeDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRSCRIBE_API UClass* ::Z_Construct_UClass_UXRScribeDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRScribeDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRScribe"), Z_Construct_UClass_UXRScribeDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UXRScribeDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_XR_XRScribe_Source_XRScribe_Public_XRScribeDeveloperSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRScribeDeveloperSettings(UXRScribeDeveloperSettings&&) = delete; \
	UXRScribeDeveloperSettings(const UXRScribeDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRScribeDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRScribeDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRScribeDeveloperSettings) \
	NO_API virtual ~UXRScribeDeveloperSettings();


#define FID_Engine_Plugins_Runtime_XR_XRScribe_Source_XRScribe_Public_XRScribeDeveloperSettings_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_XR_XRScribe_Source_XRScribe_Public_XRScribeDeveloperSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XR_XRScribe_Source_XRScribe_Public_XRScribeDeveloperSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_XR_XRScribe_Source_XRScribe_Public_XRScribeDeveloperSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRScribeDeveloperSettings;

// ********** End Class UXRScribeDeveloperSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XR_XRScribe_Source_XRScribe_Public_XRScribeDeveloperSettings_h

// ********** Begin Enum EXRScribeRunMode **********************************************************
#define FOREACH_ENUM_EXRSCRIBERUNMODE(op) \
	op(EXRScribeRunMode::Capture) \
	op(EXRScribeRunMode::Emulate) 

namespace EXRScribeRunMode { enum Type : int; }
template<> XRSCRIBE_NON_ATTRIBUTED_API UEnum* StaticEnum<EXRScribeRunMode::Type>();
// ********** End Enum EXRScribeRunMode ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
