// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnlinePIESettings.h"

#ifdef ONLINESUBSYSTEMUTILS_OnlinePIESettings_generated_h
#error "OnlinePIESettings.generated.h already included, missing '#pragma once' in OnlinePIESettings.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlinePIESettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlinePIESettings *******************************************************
struct Z_Construct_UClass_UOnlinePIESettings_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlinePIESettings(); \
	friend struct ::Z_Construct_UClass_UOnlinePIESettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UOnlinePIESettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlinePIESettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UOnlinePIESettings_NoRegister) \
	DECLARE_SERIALIZER(UOnlinePIESettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlinePIESettings(UOnlinePIESettings&&) = delete; \
	UOnlinePIESettings(const UOnlinePIESettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlinePIESettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlinePIESettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlinePIESettings) \
	NO_API virtual ~UOnlinePIESettings();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlinePIESettings;

// ********** End Class UOnlinePIESettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
