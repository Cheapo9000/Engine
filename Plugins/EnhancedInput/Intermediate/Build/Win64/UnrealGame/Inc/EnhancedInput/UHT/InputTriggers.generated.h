// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputTriggers.h"

#ifdef ENHANCEDINPUT_InputTriggers_generated_h
#error "InputTriggers.generated.h already included, missing '#pragma once' in InputTriggers.h"
#endif
#define ENHANCEDINPUT_InputTriggers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedPlayerInput;
enum class ETriggerState : uint8;
enum class ETriggerType : uint8;
struct FInputActionValue;

// ********** Begin Class UInputTrigger ************************************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateState); \
	DECLARE_FUNCTION(execGetTriggerType); \
	DECLARE_FUNCTION(execIsActuated);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInputTrigger_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTrigger(); \
	friend struct ::Z_Construct_UClass_UInputTrigger_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTrigger_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTrigger, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTrigger_NoRegister) \
	DECLARE_SERIALIZER(UInputTrigger) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTrigger(UInputTrigger&&) = delete; \
	UInputTrigger(const UInputTrigger&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTrigger); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTrigger) \
	ENHANCEDINPUT_API virtual ~UInputTrigger();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_112_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTrigger;

// ********** End Class UInputTrigger **************************************************************

// ********** Begin Class UInputTriggerTimedBase ***************************************************
struct Z_Construct_UClass_UInputTriggerTimedBase_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerTimedBase_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerTimedBase(); \
	friend struct ::Z_Construct_UClass_UInputTriggerTimedBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerTimedBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerTimedBase, UInputTrigger, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerTimedBase_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerTimedBase)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTimedBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerTimedBase(UInputTriggerTimedBase&&) = delete; \
	UInputTriggerTimedBase(const UInputTriggerTimedBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTimedBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTimedBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTimedBase) \
	ENHANCEDINPUT_API virtual ~UInputTriggerTimedBase();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_187_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerTimedBase;

// ********** End Class UInputTriggerTimedBase *****************************************************

// ********** Begin Class UInputTriggerDown ********************************************************
struct Z_Construct_UClass_UInputTriggerDown_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerDown_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerDown(); \
	friend struct ::Z_Construct_UClass_UInputTriggerDown_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerDown_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerDown, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerDown_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerDown)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_238_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerDown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerDown(UInputTriggerDown&&) = delete; \
	UInputTriggerDown(const UInputTriggerDown&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerDown); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerDown) \
	ENHANCEDINPUT_API virtual ~UInputTriggerDown();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_235_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_238_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerDown;

// ********** End Class UInputTriggerDown **********************************************************

// ********** Begin Class UInputTriggerPressed *****************************************************
struct Z_Construct_UClass_UInputTriggerPressed_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerPressed_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerPressed(); \
	friend struct ::Z_Construct_UClass_UInputTriggerPressed_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerPressed_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerPressed, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerPressed_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerPressed)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPressed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerPressed(UInputTriggerPressed&&) = delete; \
	UInputTriggerPressed(const UInputTriggerPressed&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPressed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPressed); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPressed) \
	ENHANCEDINPUT_API virtual ~UInputTriggerPressed();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_252_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_255_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerPressed;

// ********** End Class UInputTriggerPressed *******************************************************

// ********** Begin Class UInputTriggerReleased ****************************************************
struct Z_Construct_UClass_UInputTriggerReleased_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerReleased_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_274_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerReleased(); \
	friend struct ::Z_Construct_UClass_UInputTriggerReleased_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerReleased_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerReleased, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerReleased_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerReleased)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_274_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerReleased(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerReleased(UInputTriggerReleased&&) = delete; \
	UInputTriggerReleased(const UInputTriggerReleased&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerReleased); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerReleased); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerReleased) \
	ENHANCEDINPUT_API virtual ~UInputTriggerReleased();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_271_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_274_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_274_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_274_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerReleased;

// ********** End Class UInputTriggerReleased ******************************************************

// ********** Begin Class UInputTriggerHold ********************************************************
struct Z_Construct_UClass_UInputTriggerHold_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerHold_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_294_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerHold(); \
	friend struct ::Z_Construct_UClass_UInputTriggerHold_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerHold_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerHold, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerHold_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerHold)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_294_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerHold(UInputTriggerHold&&) = delete; \
	UInputTriggerHold(const UInputTriggerHold&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHold); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHold) \
	ENHANCEDINPUT_API virtual ~UInputTriggerHold();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_291_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_294_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_294_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_294_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerHold;

// ********** End Class UInputTriggerHold **********************************************************

// ********** Begin Class UInputTriggerHoldAndRelease **********************************************
struct Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerHoldAndRelease_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_322_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerHoldAndRelease(); \
	friend struct ::Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerHoldAndRelease_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerHoldAndRelease, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerHoldAndRelease_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerHoldAndRelease)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_322_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerHoldAndRelease(UInputTriggerHoldAndRelease&&) = delete; \
	UInputTriggerHoldAndRelease(const UInputTriggerHoldAndRelease&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHoldAndRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHoldAndRelease); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHoldAndRelease) \
	ENHANCEDINPUT_API virtual ~UInputTriggerHoldAndRelease();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_319_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_322_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerHoldAndRelease;

// ********** End Class UInputTriggerHoldAndRelease ************************************************

// ********** Begin Class UInputTriggerTap *********************************************************
struct Z_Construct_UClass_UInputTriggerTap_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerTap_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_340_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerTap(); \
	friend struct ::Z_Construct_UClass_UInputTriggerTap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerTap_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerTap, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerTap_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerTap)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_340_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerTap(UInputTriggerTap&&) = delete; \
	UInputTriggerTap(const UInputTriggerTap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTap) \
	ENHANCEDINPUT_API virtual ~UInputTriggerTap();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_337_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_340_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_340_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_340_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerTap;

// ********** End Class UInputTriggerTap ***********************************************************

// ********** Begin Class UInputTriggerRepeatedTap *************************************************
struct Z_Construct_UClass_UInputTriggerRepeatedTap_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerRepeatedTap_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_362_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerRepeatedTap(); \
	friend struct ::Z_Construct_UClass_UInputTriggerRepeatedTap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerRepeatedTap_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerRepeatedTap, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerRepeatedTap_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerRepeatedTap)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_362_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerRepeatedTap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerRepeatedTap(UInputTriggerRepeatedTap&&) = delete; \
	UInputTriggerRepeatedTap(const UInputTriggerRepeatedTap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerRepeatedTap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerRepeatedTap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerRepeatedTap) \
	ENHANCEDINPUT_API virtual ~UInputTriggerRepeatedTap();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_359_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_362_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_362_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_362_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerRepeatedTap;

// ********** End Class UInputTriggerRepeatedTap ***************************************************

// ********** Begin Class UInputTriggerPulse *******************************************************
struct Z_Construct_UClass_UInputTriggerPulse_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerPulse_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_419_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerPulse(); \
	friend struct ::Z_Construct_UClass_UInputTriggerPulse_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerPulse_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerPulse, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerPulse_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerPulse)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_419_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPulse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerPulse(UInputTriggerPulse&&) = delete; \
	UInputTriggerPulse(const UInputTriggerPulse&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPulse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPulse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPulse) \
	ENHANCEDINPUT_API virtual ~UInputTriggerPulse();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_416_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_419_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_419_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_419_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerPulse;

// ********** End Class UInputTriggerPulse *********************************************************

// ********** Begin Class UInputTriggerChordAction *************************************************
struct Z_Construct_UClass_UInputTriggerChordAction_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerChordAction_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_455_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerChordAction(); \
	friend struct ::Z_Construct_UClass_UInputTriggerChordAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerChordAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerChordAction, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerChordAction_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerChordAction)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_455_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerChordAction(UInputTriggerChordAction&&) = delete; \
	UInputTriggerChordAction(const UInputTriggerChordAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordAction) \
	ENHANCEDINPUT_API virtual ~UInputTriggerChordAction();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_452_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_455_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_455_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_455_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerChordAction;

// ********** End Class UInputTriggerChordAction ***************************************************

// ********** Begin Class UInputTriggerChordBlocker ************************************************
struct Z_Construct_UClass_UInputTriggerChordBlocker_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerChordBlocker_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_482_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerChordBlocker(); \
	friend struct ::Z_Construct_UClass_UInputTriggerChordBlocker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerChordBlocker_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerChordBlocker, UInputTriggerChordAction, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerChordBlocker_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerChordBlocker)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_482_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerChordBlocker(UInputTriggerChordBlocker&&) = delete; \
	UInputTriggerChordBlocker(const UInputTriggerChordBlocker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordBlocker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordBlocker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordBlocker) \
	ENHANCEDINPUT_API virtual ~UInputTriggerChordBlocker();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_479_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_482_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_482_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_482_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerChordBlocker;

// ********** End Class UInputTriggerChordBlocker **************************************************

// ********** Begin ScriptStruct FInputComboStepData ***********************************************
struct Z_Construct_UScriptStruct_FInputComboStepData_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_491_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputComboStepData_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FInputComboStepData;
// ********** End ScriptStruct FInputComboStepData *************************************************

// ********** Begin ScriptStruct FInputCancelAction ************************************************
struct Z_Construct_UScriptStruct_FInputCancelAction_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_512_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputCancelAction_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FInputCancelAction;
// ********** End ScriptStruct FInputCancelAction **************************************************

// ********** Begin Class UInputTriggerCombo *******************************************************
struct Z_Construct_UClass_UInputTriggerCombo_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerCombo_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_532_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerCombo(); \
	friend struct ::Z_Construct_UClass_UInputTriggerCombo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputTriggerCombo_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputTriggerCombo, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputTriggerCombo_NoRegister) \
	DECLARE_SERIALIZER(UInputTriggerCombo)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_532_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputTriggerCombo(UInputTriggerCombo&&) = delete; \
	UInputTriggerCombo(const UInputTriggerCombo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerCombo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerCombo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputTriggerCombo) \
	ENHANCEDINPUT_API virtual ~UInputTriggerCombo();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_529_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_532_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_532_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_532_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputTriggerCombo;

// ********** End Class UInputTriggerCombo *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h

// ********** Begin Enum ETriggerState *************************************************************
#define FOREACH_ENUM_ETRIGGERSTATE(op) \
	op(ETriggerState::None) \
	op(ETriggerState::Ongoing) \
	op(ETriggerState::Triggered) 

enum class ETriggerState : uint8;
template<> struct TIsUEnumClass<ETriggerState> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETriggerState>();
// ********** End Enum ETriggerState ***************************************************************

// ********** Begin Enum ETriggerEvent *************************************************************
#define FOREACH_ENUM_ETRIGGEREVENT(op) \
	op(ETriggerEvent::None) \
	op(ETriggerEvent::Triggered) \
	op(ETriggerEvent::Started) \
	op(ETriggerEvent::Ongoing) \
	op(ETriggerEvent::Canceled) \
	op(ETriggerEvent::Completed) 

enum class ETriggerEvent : uint8;
template<> struct TIsUEnumClass<ETriggerEvent> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETriggerEvent>();
// ********** End Enum ETriggerEvent ***************************************************************

// ********** Begin Enum ETriggerType **************************************************************
#define FOREACH_ENUM_ETRIGGERTYPE(op) \
	op(ETriggerType::Explicit) \
	op(ETriggerType::Implicit) \
	op(ETriggerType::Blocker) 

enum class ETriggerType : uint8;
template<> struct TIsUEnumClass<ETriggerType> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETriggerType>();
// ********** End Enum ETriggerType ****************************************************************

// ********** Begin Enum ETriggerEventsSupported ***************************************************
#define FOREACH_ENUM_ETRIGGEREVENTSSUPPORTED(op) \
	op(ETriggerEventsSupported::None) \
	op(ETriggerEventsSupported::Instant) \
	op(ETriggerEventsSupported::Uninterruptible) \
	op(ETriggerEventsSupported::Ongoing) \
	op(ETriggerEventsSupported::All) 

enum class ETriggerEventsSupported : uint8;
template<> struct TIsUEnumClass<ETriggerEventsSupported> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<ETriggerEventsSupported>();
// ********** End Enum ETriggerEventsSupported *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
