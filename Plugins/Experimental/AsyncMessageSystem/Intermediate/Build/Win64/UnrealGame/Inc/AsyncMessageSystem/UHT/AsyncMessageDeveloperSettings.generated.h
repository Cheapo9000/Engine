// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncMessageDeveloperSettings.h"

#ifdef ASYNCMESSAGESYSTEM_AsyncMessageDeveloperSettings_generated_h
#error "AsyncMessageDeveloperSettings.generated.h already included, missing '#pragma once' in AsyncMessageDeveloperSettings.h"
#endif
#define ASYNCMESSAGESYSTEM_AsyncMessageDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAsyncMessageDeveloperSettings *******************************************
struct Z_Construct_UClass_UAsyncMessageDeveloperSettings_Statics;
ASYNCMESSAGESYSTEM_API UClass* Z_Construct_UClass_UAsyncMessageDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageDeveloperSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncMessageDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UAsyncMessageDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCMESSAGESYSTEM_API UClass* ::Z_Construct_UClass_UAsyncMessageDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncMessageDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsyncMessageSystem"), Z_Construct_UClass_UAsyncMessageDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UAsyncMessageDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageDeveloperSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncMessageDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncMessageDeveloperSettings(UAsyncMessageDeveloperSettings&&) = delete; \
	UAsyncMessageDeveloperSettings(const UAsyncMessageDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncMessageDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncMessageDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncMessageDeveloperSettings) \
	NO_API virtual ~UAsyncMessageDeveloperSettings();


#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageDeveloperSettings_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageDeveloperSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageDeveloperSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageDeveloperSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncMessageDeveloperSettings;

// ********** End Class UAsyncMessageDeveloperSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AsyncMessageSystem_Source_AsyncMessageSystem_Private_AsyncMessageDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
