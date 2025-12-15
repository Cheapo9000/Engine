// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerConfig.h"

#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h
#error "GameplayDebuggerConfig.generated.h already included, missing '#pragma once' in GameplayDebuggerConfig.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayDebuggerInputConfig **************************************
struct Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics;
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


struct FGameplayDebuggerInputConfig;
// ********** End ScriptStruct FGameplayDebuggerInputConfig ****************************************

// ********** Begin ScriptStruct FGameplayDebuggerCategoryConfig ***********************************
struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics;
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


struct FGameplayDebuggerCategoryConfig;
// ********** End ScriptStruct FGameplayDebuggerCategoryConfig *************************************

// ********** Begin ScriptStruct FGameplayDebuggerExtensionConfig **********************************
struct Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics;
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


struct FGameplayDebuggerExtensionConfig;
// ********** End ScriptStruct FGameplayDebuggerExtensionConfig ************************************

// ********** Begin Class UGameplayDebuggerConfig **************************************************
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGameplayDebuggerConfig, GAMEPLAYDEBUGGER_API)


struct Z_Construct_UClass_UGameplayDebuggerConfig_Statics;
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerConfig(); \
	friend struct ::Z_Construct_UClass_UGameplayDebuggerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYDEBUGGER_API UClass* ::Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister) \
	DECLARE_SERIALIZER(UGameplayDebuggerConfig) \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYDEBUGGER_API UGameplayDebuggerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYDEBUGGER_API, UGameplayDebuggerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerConfig); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayDebuggerConfig(UGameplayDebuggerConfig&&) = delete; \
	UGameplayDebuggerConfig(const UGameplayDebuggerConfig&) = delete; \
	GAMEPLAYDEBUGGER_API virtual ~UGameplayDebuggerConfig();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_112_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayDebuggerConfig;

// ********** End Class UGameplayDebuggerConfig ****************************************************

// ********** Begin Class UGameplayDebuggerUserSettings ********************************************
struct Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics;
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerUserSettings_NoRegister();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerUserSettings(); \
	friend struct ::Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYDEBUGGER_API UClass* ::Z_Construct_UClass_UGameplayDebuggerUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayDebuggerUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), Z_Construct_UClass_UGameplayDebuggerUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameplayDebuggerUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYDEBUGGER_API UGameplayDebuggerUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayDebuggerUserSettings(UGameplayDebuggerUserSettings&&) = delete; \
	UGameplayDebuggerUserSettings(const UGameplayDebuggerUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYDEBUGGER_API, UGameplayDebuggerUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerUserSettings) \
	GAMEPLAYDEBUGGER_API virtual ~UGameplayDebuggerUserSettings();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_225_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayDebuggerUserSettings;

// ********** End Class UGameplayDebuggerUserSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h

// ********** Begin Enum EGameplayDebuggerOverrideMode *********************************************
#define FOREACH_ENUM_EGAMEPLAYDEBUGGEROVERRIDEMODE(op) \
	op(EGameplayDebuggerOverrideMode::Enable) \
	op(EGameplayDebuggerOverrideMode::Disable) \
	op(EGameplayDebuggerOverrideMode::UseDefault) 

enum class EGameplayDebuggerOverrideMode : uint8;
template<> struct TIsUEnumClass<EGameplayDebuggerOverrideMode> { enum { Value = true }; };
template<> GAMEPLAYDEBUGGER_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayDebuggerOverrideMode>();
// ********** End Enum EGameplayDebuggerOverrideMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
