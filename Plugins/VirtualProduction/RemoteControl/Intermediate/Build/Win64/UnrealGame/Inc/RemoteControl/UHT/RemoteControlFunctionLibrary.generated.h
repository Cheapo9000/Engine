// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlFunctionLibrary.h"

#ifdef REMOTECONTROL_RemoteControlFunctionLibrary_generated_h
#error "RemoteControlFunctionLibrary.generated.h already included, missing '#pragma once' in RemoteControlFunctionLibrary.h"
#endif
#define REMOTECONTROL_RemoteControlFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class URemoteControlPreset;
struct FColorGradingWheelColor;
struct FColorWheelColor;
struct FRemoteControlOptionalExposeArgs;

// ********** Begin ScriptStruct FRemoteControlOptionalExposeArgs **********************************
struct Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRemoteControlOptionalExposeArgs;
// ********** End ScriptStruct FRemoteControlOptionalExposeArgs ************************************

// ********** Begin ScriptStruct FColorWheelColorBase **********************************************
struct Z_Construct_UScriptStruct_FColorWheelColorBase_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FColorWheelColorBase_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FColorWheelColorBase;
// ********** End ScriptStruct FColorWheelColorBase ************************************************

// ********** Begin ScriptStruct FColorWheelColor **************************************************
struct Z_Construct_UScriptStruct_FColorWheelColor_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FColorWheelColor_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct(); \
	typedef FColorWheelColorBase Super;


struct FColorWheelColor;
// ********** End ScriptStruct FColorWheelColor ****************************************************

// ********** Begin ScriptStruct FColorGradingWheelColor *******************************************
struct Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct(); \
	typedef FColorWheelColorBase Super;


struct FColorGradingWheelColor;
// ********** End ScriptStruct FColorGradingWheelColor *********************************************

// ********** Begin Class URemoteControlFunctionLibrary ********************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyColorGradingWheelDelta); \
	DECLARE_FUNCTION(execApplyColorWheelDelta); \
	DECLARE_FUNCTION(execExposeActor); \
	DECLARE_FUNCTION(execExposeFunction); \
	DECLARE_FUNCTION(execExposeProperty);


struct Z_Construct_UClass_URemoteControlFunctionLibrary_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_URemoteControlFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URemoteControlFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URemoteControlFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlFunctionLibrary(URemoteControlFunctionLibrary&&) = delete; \
	URemoteControlFunctionLibrary(const URemoteControlFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlFunctionLibrary) \
	NO_API virtual ~URemoteControlFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_77_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlFunctionLibrary;

// ********** End Class URemoteControlFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
