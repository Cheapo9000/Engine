// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputSubsystems.h"

#ifdef ENHANCEDINPUT_EnhancedInputSubsystems_generated_h
#error "EnhancedInputSubsystems.generated.h already included, missing '#pragma once' in EnhancedInputSubsystems.h"
#endif
#define ENHANCEDINPUT_EnhancedInputSubsystems_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEnhancedInputUserSettings;
class UInputMappingContext;

// ********** Begin Delegate FOnControlMappingsRebuilt *********************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_52_DELEGATE \
static ENHANCEDINPUT_API void FOnControlMappingsRebuilt_DelegateWrapper(const FMulticastScriptDelegate& OnControlMappingsRebuilt);


// ********** End Delegate FOnControlMappingsRebuilt ***********************************************

// ********** Begin Delegate FOnMappingContextAdded ************************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_53_DELEGATE \
static ENHANCEDINPUT_API void FOnMappingContextAdded_DelegateWrapper(const FMulticastScriptDelegate& OnMappingContextAdded, const UInputMappingContext* MappingContext);


// ********** End Delegate FOnMappingContextAdded **************************************************

// ********** Begin Delegate FOnMappingContextRemoved **********************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_54_DELEGATE \
static ENHANCEDINPUT_API void FOnMappingContextRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnMappingContextRemoved, const UInputMappingContext* MappingContext);


// ********** End Delegate FOnMappingContextRemoved ************************************************

// ********** Begin Delegate FOnUserSettingsPostInitialized ****************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_55_DELEGATE \
static ENHANCEDINPUT_API void FOnUserSettingsPostInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnUserSettingsPostInitialized, const UEnhancedInputUserSettings* Settings);


// ********** End Delegate FOnUserSettingsPostInitialized ******************************************

// ********** Begin Class UEnhancedInputLocalPlayerSubsystem ***************************************
struct Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputLocalPlayerSubsystem(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputLocalPlayerSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputLocalPlayerSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UEnhancedInputLocalPlayerSubsystem*>(this); }


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputLocalPlayerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputLocalPlayerSubsystem(UEnhancedInputLocalPlayerSubsystem&&) = delete; \
	UEnhancedInputLocalPlayerSubsystem(const UEnhancedInputLocalPlayerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputLocalPlayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputLocalPlayerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedInputLocalPlayerSubsystem) \
	ENHANCEDINPUT_API virtual ~UEnhancedInputLocalPlayerSubsystem();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_20_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputLocalPlayerSubsystem;

// ********** End Class UEnhancedInputLocalPlayerSubsystem *****************************************

// ********** Begin Class UEnhancedInputWorldSubsystem *********************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveActorInputComponent); \
	DECLARE_FUNCTION(execAddActorInputComponent);


struct Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputWorldSubsystem_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedInputWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedInputWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputWorldSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UEnhancedInputWorldSubsystem*>(this); }


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputWorldSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputWorldSubsystem(UEnhancedInputWorldSubsystem&&) = delete; \
	UEnhancedInputWorldSubsystem(const UEnhancedInputWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedInputWorldSubsystem) \
	ENHANCEDINPUT_API virtual ~UEnhancedInputWorldSubsystem();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_107_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputWorldSubsystem;

// ********** End Class UEnhancedInputWorldSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystems_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
