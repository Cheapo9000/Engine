// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/InputDeviceProperties.h"

#ifdef ENGINE_InputDeviceProperties_generated_h
#error "InputDeviceProperties.generated.h already included, missing '#pragma once' in InputDeviceProperties.h"
#endif
#define ENGINE_InputDeviceProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputDeviceId;
struct FPlatformUserId;

// ********** Begin Class UInputDeviceProperty *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyDeviceProperty); \
	DECLARE_FUNCTION(execResetDeviceProperty); \
	DECLARE_FUNCTION(execEvaluateDeviceProperty);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInputDeviceProperty_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceProperty_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceProperty(); \
	friend struct ::Z_Construct_UClass_UInputDeviceProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputDeviceProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDeviceProperty, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputDeviceProperty_NoRegister) \
	DECLARE_SERIALIZER(UInputDeviceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDeviceProperty(UInputDeviceProperty&&) = delete; \
	UInputDeviceProperty(const UInputDeviceProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputDeviceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceProperty); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceProperty) \
	ENGINE_API virtual ~UInputDeviceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDeviceProperty;

// ********** End Class UInputDeviceProperty *******************************************************

// ********** Begin ScriptStruct FDeviceColorData **************************************************
struct Z_Construct_UScriptStruct_FDeviceColorData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_167_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceColorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDeviceColorData;
// ********** End ScriptStruct FDeviceColorData ****************************************************

// ********** Begin Class UColorInputDeviceProperty ************************************************
struct Z_Construct_UClass_UColorInputDeviceProperty_Statics;
ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceProperty_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_192_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorInputDeviceProperty(); \
	friend struct ::Z_Construct_UClass_UColorInputDeviceProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UColorInputDeviceProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UColorInputDeviceProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UColorInputDeviceProperty_NoRegister) \
	DECLARE_SERIALIZER(UColorInputDeviceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_192_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorInputDeviceProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UColorInputDeviceProperty(UColorInputDeviceProperty&&) = delete; \
	UColorInputDeviceProperty(const UColorInputDeviceProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorInputDeviceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorInputDeviceProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorInputDeviceProperty) \
	NO_API virtual ~UColorInputDeviceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_189_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_192_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_192_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_192_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UColorInputDeviceProperty;

// ********** End Class UColorInputDeviceProperty **************************************************

// ********** Begin ScriptStruct FDeviceColorCurveData *********************************************
struct Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_222_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDeviceColorCurveData;
// ********** End ScriptStruct FDeviceColorCurveData ***********************************************

// ********** Begin Class UColorInputDeviceCurveProperty *******************************************
struct Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics;
ENGINE_API UClass* Z_Construct_UClass_UColorInputDeviceCurveProperty_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorInputDeviceCurveProperty(); \
	friend struct ::Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UColorInputDeviceCurveProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UColorInputDeviceCurveProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UColorInputDeviceCurveProperty_NoRegister) \
	DECLARE_SERIALIZER(UColorInputDeviceCurveProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorInputDeviceCurveProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UColorInputDeviceCurveProperty(UColorInputDeviceCurveProperty&&) = delete; \
	UColorInputDeviceCurveProperty(const UColorInputDeviceCurveProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorInputDeviceCurveProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorInputDeviceCurveProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorInputDeviceCurveProperty) \
	NO_API virtual ~UColorInputDeviceCurveProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_243_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UColorInputDeviceCurveProperty;

// ********** End Class UColorInputDeviceCurveProperty *********************************************

// ********** Begin ScriptStruct FDeviceTriggerBaseData ********************************************
struct Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_277_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDeviceTriggerBaseData;
// ********** End ScriptStruct FDeviceTriggerBaseData **********************************************

// ********** Begin Class UInputDeviceTriggerEffect ************************************************
struct Z_Construct_UClass_UInputDeviceTriggerEffect_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerEffect_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_292_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerEffect(); \
	friend struct ::Z_Construct_UClass_UInputDeviceTriggerEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputDeviceTriggerEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDeviceTriggerEffect, UInputDeviceProperty, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputDeviceTriggerEffect_NoRegister) \
	DECLARE_SERIALIZER(UInputDeviceTriggerEffect)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_292_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputDeviceTriggerEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDeviceTriggerEffect(UInputDeviceTriggerEffect&&) = delete; \
	UInputDeviceTriggerEffect(const UInputDeviceTriggerEffect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputDeviceTriggerEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerEffect); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceTriggerEffect) \
	ENGINE_API virtual ~UInputDeviceTriggerEffect();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_289_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_292_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_292_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_292_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDeviceTriggerEffect;

// ********** End Class UInputDeviceTriggerEffect **************************************************

// ********** Begin ScriptStruct FDeviceTriggerFeedbackData ****************************************
struct Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_315_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDeviceTriggerFeedbackData;
// ********** End ScriptStruct FDeviceTriggerFeedbackData ******************************************

// ********** Begin Class UInputDeviceTriggerFeedbackProperty **************************************
struct Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_335_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerFeedbackProperty(); \
	friend struct ::Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDeviceTriggerFeedbackProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_NoRegister) \
	DECLARE_SERIALIZER(UInputDeviceTriggerFeedbackProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_335_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDeviceTriggerFeedbackProperty(UInputDeviceTriggerFeedbackProperty&&) = delete; \
	UInputDeviceTriggerFeedbackProperty(const UInputDeviceTriggerFeedbackProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerFeedbackProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerFeedbackProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerFeedbackProperty) \
	NO_API virtual ~UInputDeviceTriggerFeedbackProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_332_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_335_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_335_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_335_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDeviceTriggerFeedbackProperty;

// ********** End Class UInputDeviceTriggerFeedbackProperty ****************************************

// ********** Begin ScriptStruct FDeviceTriggerTriggerResistanceData *******************************
struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_368_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDeviceTriggerTriggerResistanceData;
// ********** End ScriptStruct FDeviceTriggerTriggerResistanceData *********************************

// ********** Begin Class UInputDeviceTriggerResistanceProperty ************************************
struct Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_394_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerResistanceProperty(); \
	friend struct ::Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDeviceTriggerResistanceProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_NoRegister) \
	DECLARE_SERIALIZER(UInputDeviceTriggerResistanceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_394_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDeviceTriggerResistanceProperty(UInputDeviceTriggerResistanceProperty&&) = delete; \
	UInputDeviceTriggerResistanceProperty(const UInputDeviceTriggerResistanceProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerResistanceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerResistanceProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerResistanceProperty) \
	NO_API virtual ~UInputDeviceTriggerResistanceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_391_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_394_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_394_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_394_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDeviceTriggerResistanceProperty;

// ********** End Class UInputDeviceTriggerResistanceProperty **************************************

// ********** Begin ScriptStruct FDeviceTriggerTriggerVibrationData ********************************
struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_427_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDeviceTriggerTriggerVibrationData;
// ********** End ScriptStruct FDeviceTriggerTriggerVibrationData **********************************

// ********** Begin Class UInputDeviceTriggerVibrationProperty *************************************
struct Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_451_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerVibrationProperty(); \
	friend struct ::Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDeviceTriggerVibrationProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_NoRegister) \
	DECLARE_SERIALIZER(UInputDeviceTriggerVibrationProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_451_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDeviceTriggerVibrationProperty(UInputDeviceTriggerVibrationProperty&&) = delete; \
	UInputDeviceTriggerVibrationProperty(const UInputDeviceTriggerVibrationProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerVibrationProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerVibrationProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerVibrationProperty) \
	NO_API virtual ~UInputDeviceTriggerVibrationProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_448_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_451_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_451_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_451_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDeviceTriggerVibrationProperty;

// ********** End Class UInputDeviceTriggerVibrationProperty ***************************************

// ********** Begin ScriptStruct FAudioBasedVibrationData ******************************************
struct Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_487_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAudioBasedVibrationData;
// ********** End ScriptStruct FAudioBasedVibrationData ********************************************

// ********** Begin Class UInputDeviceAudioBasedVibrationProperty **********************************
struct Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_504_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty(); \
	friend struct ::Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputDeviceAudioBasedVibrationProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_NoRegister) \
	DECLARE_SERIALIZER(UInputDeviceAudioBasedVibrationProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_504_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceAudioBasedVibrationProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputDeviceAudioBasedVibrationProperty(UInputDeviceAudioBasedVibrationProperty&&) = delete; \
	UInputDeviceAudioBasedVibrationProperty(const UInputDeviceAudioBasedVibrationProperty&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceAudioBasedVibrationProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceAudioBasedVibrationProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceAudioBasedVibrationProperty) \
	NO_API virtual ~UInputDeviceAudioBasedVibrationProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_501_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_504_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_504_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_504_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputDeviceAudioBasedVibrationProperty;

// ********** End Class UInputDeviceAudioBasedVibrationProperty ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
