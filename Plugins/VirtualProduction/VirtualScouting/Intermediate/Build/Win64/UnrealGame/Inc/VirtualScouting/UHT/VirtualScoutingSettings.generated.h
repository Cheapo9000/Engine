// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualScoutingSettings.h"

#ifdef VIRTUALSCOUTING_VirtualScoutingSettings_generated_h
#error "VirtualScoutingSettings.generated.h already included, missing '#pragma once' in VirtualScoutingSettings.h"
#endif
#define VIRTUALSCOUTING_VirtualScoutingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVirtualScoutingEditorSettings;
class UVirtualScoutingSettings;

// ********** Begin Class UVirtualScoutingSettings *************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVirtualScoutingSettings);


struct Z_Construct_UClass_UVirtualScoutingSettings_Statics;
VIRTUALSCOUTING_API UClass* Z_Construct_UClass_UVirtualScoutingSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualScoutingSettings(); \
	friend struct ::Z_Construct_UClass_UVirtualScoutingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALSCOUTING_API UClass* ::Z_Construct_UClass_UVirtualScoutingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualScoutingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualScouting"), Z_Construct_UClass_UVirtualScoutingSettings_NoRegister) \
	DECLARE_SERIALIZER(UVirtualScoutingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("VirtualScoutingSettings");} \



#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualScoutingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualScoutingSettings(UVirtualScoutingSettings&&) = delete; \
	UVirtualScoutingSettings(const UVirtualScoutingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualScoutingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualScoutingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualScoutingSettings) \
	NO_API virtual ~UVirtualScoutingSettings();


#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualScoutingSettings;

// ********** End Class UVirtualScoutingSettings ***************************************************

// ********** Begin Class UVirtualScoutingEditorSettings *******************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVirtualScoutingEditorSettings);


struct Z_Construct_UClass_UVirtualScoutingEditorSettings_Statics;
VIRTUALSCOUTING_API UClass* Z_Construct_UClass_UVirtualScoutingEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualScoutingEditorSettings(); \
	friend struct ::Z_Construct_UClass_UVirtualScoutingEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALSCOUTING_API UClass* ::Z_Construct_UClass_UVirtualScoutingEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualScoutingEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualScouting"), Z_Construct_UClass_UVirtualScoutingEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UVirtualScoutingEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualScoutingEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualScoutingEditorSettings(UVirtualScoutingEditorSettings&&) = delete; \
	UVirtualScoutingEditorSettings(const UVirtualScoutingEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualScoutingEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualScoutingEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualScoutingEditorSettings) \
	NO_API virtual ~UVirtualScoutingEditorSettings();


#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_53_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualScoutingEditorSettings;

// ********** End Class UVirtualScoutingEditorSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualScouting_Source_VirtualScouting_Public_VirtualScoutingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
