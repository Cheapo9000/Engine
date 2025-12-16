// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaViewportSettings.h"

#ifdef AVALANCHEVIEWPORT_AvaViewportSettings_generated_h
#error "AvaViewportSettings.generated.h already included, missing '#pragma once' in AvaViewportSettings.h"
#endif
#define AVALANCHEVIEWPORT_AvaViewportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaViewportSnapState : uint8;

// ********** Begin ScriptStruct FAvaLevelViewportSafeFrame ****************************************
struct Z_Construct_UScriptStruct_FAvaLevelViewportSafeFrame_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaLevelViewportSafeFrame_Statics; \
	AVALANCHEVIEWPORT_API static class UScriptStruct* StaticStruct();


struct FAvaLevelViewportSafeFrame;
// ********** End ScriptStruct FAvaLevelViewportSafeFrame ******************************************

// ********** Begin ScriptStruct FAvaShapeEditorViewportControlPosition ****************************
struct Z_Construct_UScriptStruct_FAvaShapeEditorViewportControlPosition_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaShapeEditorViewportControlPosition_Statics; \
	AVALANCHEVIEWPORT_API static class UScriptStruct* StaticStruct();


struct FAvaShapeEditorViewportControlPosition;
// ********** End ScriptStruct FAvaShapeEditorViewportControlPosition ******************************

// ********** Begin Class UAvaViewportSettings *****************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSnapState); \
	DECLARE_FUNCTION(execHasSnapState); \
	DECLARE_FUNCTION(execGetSnapState);


struct Z_Construct_UClass_UAvaViewportSettings_Statics;
AVALANCHEVIEWPORT_API UClass* Z_Construct_UClass_UAvaViewportSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaViewportSettings(); \
	friend struct ::Z_Construct_UClass_UAvaViewportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEVIEWPORT_API UClass* ::Z_Construct_UClass_UAvaViewportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaViewportSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheViewport"), Z_Construct_UClass_UAvaViewportSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaViewportSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaViewportSettings(UAvaViewportSettings&&) = delete; \
	UAvaViewportSettings(const UAvaViewportSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaViewportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaViewportSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaViewportSettings) \
	NO_API virtual ~UAvaViewportSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_52_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaViewportSettings;

// ********** End Class UAvaViewportSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h

// ********** Begin Enum EAvaShapeEditorOverlayType ************************************************
#define FOREACH_ENUM_EAVASHAPEEDITOROVERLAYTYPE(op) \
	op(EAvaShapeEditorOverlayType::ComponentVisualizerOnly) \
	op(EAvaShapeEditorOverlayType::FullDetails) 

enum class EAvaShapeEditorOverlayType : uint8;
template<> struct TIsUEnumClass<EAvaShapeEditorOverlayType> { enum { Value = true }; };
template<> AVALANCHEVIEWPORT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaShapeEditorOverlayType>();
// ********** End Enum EAvaShapeEditorOverlayType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
