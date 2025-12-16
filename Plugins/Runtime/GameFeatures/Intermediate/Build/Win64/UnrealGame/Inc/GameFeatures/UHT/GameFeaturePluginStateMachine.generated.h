// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeaturePluginStateMachine.h"

#ifdef GAMEFEATURES_GameFeaturePluginStateMachine_generated_h
#error "GameFeaturePluginStateMachine.generated.h already included, missing '#pragma once' in GameFeaturePluginStateMachine.h"
#endif
#define GAMEFEATURES_GameFeaturePluginStateMachine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameFeaturePluginStateMachineProperties **************************
struct Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics;
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_275_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameFeaturePluginStateMachineProperties_Statics; \
	GAMEFEATURES_API static class UScriptStruct* StaticStruct();


struct FGameFeaturePluginStateMachineProperties;
// ********** End ScriptStruct FGameFeaturePluginStateMachineProperties ****************************

// ********** Begin Class UGameFeaturePluginStateMachine *******************************************
struct Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics;
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturePluginStateMachine_NoRegister();

#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_489_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameFeaturePluginStateMachine(); \
	friend struct ::Z_Construct_UClass_UGameFeaturePluginStateMachine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEFEATURES_API UClass* ::Z_Construct_UClass_UGameFeaturePluginStateMachine_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameFeaturePluginStateMachine, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFeatures"), Z_Construct_UClass_UGameFeaturePluginStateMachine_NoRegister) \
	DECLARE_SERIALIZER(UGameFeaturePluginStateMachine)


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_489_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameFeaturePluginStateMachine(UGameFeaturePluginStateMachine&&) = delete; \
	UGameFeaturePluginStateMachine(const UGameFeaturePluginStateMachine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameFeaturePluginStateMachine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeaturePluginStateMachine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeaturePluginStateMachine) \
	NO_API virtual ~UGameFeaturePluginStateMachine();


#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_486_PROLOG
#define FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_489_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_489_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h_489_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameFeaturePluginStateMachine;

// ********** End Class UGameFeaturePluginStateMachine *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameFeatures_Source_GameFeatures_Private_GameFeaturePluginStateMachine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
