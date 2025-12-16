// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorSettings.h"

#ifdef STATETREEEDITORMODULE_StateTreeEditorSettings_generated_h
#error "StateTreeEditorSettings.generated.h already included, missing '#pragma once' in StateTreeEditorSettings.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateTreeEditorSettings *************************************************
struct Z_Construct_UClass_UStateTreeEditorSettings_Statics;
STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeEditorSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUStateTreeEditorSettings(); \
	friend struct ::Z_Construct_UClass_UStateTreeEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEEDITORMODULE_API UClass* ::Z_Construct_UClass_UStateTreeEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), Z_Construct_UClass_UStateTreeEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEEDITORMODULE_API UStateTreeEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEEDITORMODULE_API, UStateTreeEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeEditorSettings(UStateTreeEditorSettings&&) = delete; \
	UStateTreeEditorSettings(const UStateTreeEditorSettings&) = delete; \
	STATETREEEDITORMODULE_API virtual ~UStateTreeEditorSettings();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeEditorSettings;

// ********** End Class UStateTreeEditorSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h

// ********** Begin Enum EStateTreeSaveOnCompile ***************************************************
#define FOREACH_ENUM_ESTATETREESAVEONCOMPILE(op) \
	op(EStateTreeSaveOnCompile::Never) \
	op(EStateTreeSaveOnCompile::SuccessOnly) \
	op(EStateTreeSaveOnCompile::Always) 

enum class EStateTreeSaveOnCompile : uint8;
template<> struct TIsUEnumClass<EStateTreeSaveOnCompile> { enum { Value = true }; };
template<> STATETREEEDITORMODULE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStateTreeSaveOnCompile>();
// ********** End Enum EStateTreeSaveOnCompile *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
