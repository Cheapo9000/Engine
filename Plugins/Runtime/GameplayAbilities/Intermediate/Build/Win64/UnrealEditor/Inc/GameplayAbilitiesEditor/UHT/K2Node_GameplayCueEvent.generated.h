// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_GameplayCueEvent.h"

#ifdef GAMEPLAYABILITIESEDITOR_K2Node_GameplayCueEvent_generated_h
#error "K2Node_GameplayCueEvent.generated.h already included, missing '#pragma once' in K2Node_GameplayCueEvent.h"
#endif
#define GAMEPLAYABILITIESEDITOR_K2Node_GameplayCueEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_GameplayCueEvent *************************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_GameplayCueEvent, NO_API)


struct Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics;
GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UK2Node_GameplayCueEvent_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_GameplayCueEvent(); \
	friend struct ::Z_Construct_UClass_UK2Node_GameplayCueEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIESEDITOR_API UClass* ::Z_Construct_UClass_UK2Node_GameplayCueEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_GameplayCueEvent, UK2Node_Event, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilitiesEditor"), Z_Construct_UClass_UK2Node_GameplayCueEvent_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_GameplayCueEvent) \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_16_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_GameplayCueEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_GameplayCueEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_GameplayCueEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_GameplayCueEvent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_GameplayCueEvent(UK2Node_GameplayCueEvent&&) = delete; \
	UK2Node_GameplayCueEvent(const UK2Node_GameplayCueEvent&) = delete; \
	NO_API virtual ~UK2Node_GameplayCueEvent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_GameplayCueEvent;

// ********** End Class UK2Node_GameplayCueEvent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_K2Node_GameplayCueEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
