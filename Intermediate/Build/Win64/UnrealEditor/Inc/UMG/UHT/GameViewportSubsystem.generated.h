// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/GameViewportSubsystem.h"

#ifdef UMG_GameViewportSubsystem_generated_h
#error "GameViewportSubsystem.generated.h already included, missing '#pragma once' in GameViewportSubsystem.h"
#endif
#define UMG_GameViewportSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULocalPlayer;
class UWidget;
struct FGameViewportWidgetSlot;

// ********** Begin ScriptStruct FGameViewportWidgetSlot *******************************************
struct Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FGameViewportWidgetSlot;
// ********** End ScriptStruct FGameViewportWidgetSlot *********************************************

// ********** Begin Class UGameViewportSubsystem ***************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWidgetSlotDesiredSize); \
	DECLARE_FUNCTION(execSetWidgetSlotPosition); \
	DECLARE_FUNCTION(execSetWidgetSlot); \
	DECLARE_FUNCTION(execGetWidgetSlot); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidgetForPlayer); \
	DECLARE_FUNCTION(execAddWidget); \
	DECLARE_FUNCTION(execIsWidgetAdded);


struct Z_Construct_UClass_UGameViewportSubsystem_Statics;
UMG_API UClass* Z_Construct_UClass_UGameViewportSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameViewportSubsystem(); \
	friend struct ::Z_Construct_UClass_UGameViewportSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UGameViewportSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameViewportSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UGameViewportSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UGameViewportSubsystem)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UGameViewportSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameViewportSubsystem(UGameViewportSubsystem&&) = delete; \
	UGameViewportSubsystem(const UGameViewportSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UGameViewportSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameViewportSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameViewportSubsystem) \
	UMG_API virtual ~UGameViewportSubsystem();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_51_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameViewportSubsystem;

// ********** End Class UGameViewportSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
