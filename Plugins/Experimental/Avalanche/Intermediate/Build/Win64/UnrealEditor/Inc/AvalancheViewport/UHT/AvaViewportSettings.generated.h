// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaViewportSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaViewportSnapState : uint8;
#ifdef AVALANCHEVIEWPORT_AvaViewportSettings_generated_h
#error "AvaViewportSettings.generated.h already included, missing '#pragma once' in AvaViewportSettings.h"
#endif
#define AVALANCHEVIEWPORT_AvaViewportSettings_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaLevelViewportSafeFrame_Statics; \
	AVALANCHEVIEWPORT_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEVIEWPORT_API UScriptStruct* StaticStruct<struct FAvaLevelViewportSafeFrame>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaShapeEditorViewportControlPosition_Statics; \
	AVALANCHEVIEWPORT_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEVIEWPORT_API UScriptStruct* StaticStruct<struct FAvaShapeEditorViewportControlPosition>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSnapState); \
	DECLARE_FUNCTION(execHasSnapState); \
	DECLARE_FUNCTION(execGetSnapState);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaViewportSettings(); \
	friend struct Z_Construct_UClass_UAvaViewportSettings_Statics; \
public: \
	DECLARE_CLASS(UAvaViewportSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheViewport"), NO_API) \
	DECLARE_SERIALIZER(UAvaViewportSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaViewportSettings(UAvaViewportSettings&&); \
	UAvaViewportSettings(const UAvaViewportSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaViewportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaViewportSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaViewportSettings) \
	NO_API virtual ~UAvaViewportSettings();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_52_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEVIEWPORT_API UClass* StaticClass<class UAvaViewportSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheViewport_Public_AvaViewportSettings_h


#define FOREACH_ENUM_EAVASHAPEEDITOROVERLAYTYPE(op) \
	op(EAvaShapeEditorOverlayType::ComponentVisualizerOnly) \
	op(EAvaShapeEditorOverlayType::FullDetails) 

enum class EAvaShapeEditorOverlayType : uint8;
template<> struct TIsUEnumClass<EAvaShapeEditorOverlayType> { enum { Value = true }; };
template<> AVALANCHEVIEWPORT_API UEnum* StaticEnum<EAvaShapeEditorOverlayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
