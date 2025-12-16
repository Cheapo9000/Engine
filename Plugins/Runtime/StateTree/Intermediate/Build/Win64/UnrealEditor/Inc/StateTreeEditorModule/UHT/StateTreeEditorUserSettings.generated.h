// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorUserSettings.h"

#ifdef STATETREEEDITORMODULE_StateTreeEditorUserSettings_generated_h
#error "StateTreeEditorUserSettings.generated.h already included, missing '#pragma once' in StateTreeEditorUserSettings.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeEditorUserSettings *********************************************
struct Z_Construct_UClass_UStateTreeEditorUserSettings_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorUserSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUserSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditorUserSettings(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditorUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditorUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditorUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditorUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditorUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUserSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditorUserSettings(UStateTreeEditorUserSettings&&) = delete; \
	UStateTreeEditorUserSettings(const UStateTreeEditorUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeEditorUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateTreeEditorUserSettings) \
	STATETREEEDITORMODULE_API virtual ~UStateTreeEditorUserSettings();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUserSettings_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUserSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUserSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUserSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditorUserSettings;

// ********** End Class UStateTreeEditorUserSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeEditorUserSettings_h

// ********** Begin Enum EStateTreeEditorUserSettingsNodeType **************************************
#define FOREACH_ENUM_ESTATETREEEDITORUSERSETTINGSNODETYPE(op) \
	op(EStateTreeEditorUserSettingsNodeType::Condition) \
	op(EStateTreeEditorUserSettingsNodeType::Task) \
	op(EStateTreeEditorUserSettingsNodeType::Transition) \
	op(EStateTreeEditorUserSettingsNodeType::Flag) \
	op(EStateTreeEditorUserSettingsNodeType::All) 

enum class EStateTreeEditorUserSettingsNodeType : uint8;
template<> struct TIsUEnumClass<EStateTreeEditorUserSettingsNodeType> { enum { Value = true }; };
template<> STATETREEEDITORMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeEditorUserSettingsNodeType>();
// ********** End Enum EStateTreeEditorUserSettingsNodeType ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
