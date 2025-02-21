// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/MultiUserReplicationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIUSERCLIENT_MultiUserReplicationSettings_generated_h
#error "MultiUserReplicationSettings.generated.h already included, missing '#pragma once' in MultiUserReplicationSettings.h"
#endif
#define MULTIUSERCLIENT_MultiUserReplicationSettings_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Settings_MultiUserReplicationSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserReplicationSettings(); \
	friend struct Z_Construct_UClass_UMultiUserReplicationSettings_Statics; \
public: \
	DECLARE_CLASS(UMultiUserReplicationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiUserClient"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserReplicationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MultiUserClient");} \



#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Settings_MultiUserReplicationSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserReplicationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiUserReplicationSettings(UMultiUserReplicationSettings&&); \
	UMultiUserReplicationSettings(const UMultiUserReplicationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserReplicationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserReplicationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserReplicationSettings) \
	NO_API virtual ~UMultiUserReplicationSettings();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Settings_MultiUserReplicationSettings_h_13_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Settings_MultiUserReplicationSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Settings_MultiUserReplicationSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Settings_MultiUserReplicationSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERCLIENT_API UClass* StaticClass<class UMultiUserReplicationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClient_Private_Settings_MultiUserReplicationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
