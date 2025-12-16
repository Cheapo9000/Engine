// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputModifiers.h"

#ifdef ENHANCEDINPUT_InputModifiers_generated_h
#error "InputModifiers.generated.h already included, missing '#pragma once' in InputModifiers.h"
#endif
#define ENHANCEDINPUT_InputModifiers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedPlayerInput;
struct FInputActionValue;
struct FLinearColor;

// ********** Begin Class UInputModifier ***********************************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVisualizationColor); \
	DECLARE_FUNCTION(execModifyRaw);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInputModifier_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifier(); \
	friend struct ::Z_Construct_UClass_UInputModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifier_NoRegister) \
	DECLARE_SERIALIZER(UInputModifier) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifier(UInputModifier&&) = delete; \
	UInputModifier(const UInputModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifier) \
	ENHANCEDINPUT_API virtual ~UInputModifier();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_15_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifier;

// ********** End Class UInputModifier *************************************************************

// ********** Begin Class UInputModifierSmoothDelta ************************************************
struct Z_Construct_UClass_UInputModifierSmoothDelta_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSmoothDelta_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSmoothDelta(); \
	friend struct ::Z_Construct_UClass_UInputModifierSmoothDelta_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierSmoothDelta_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierSmoothDelta, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierSmoothDelta_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierSmoothDelta)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSmoothDelta(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierSmoothDelta(UInputModifierSmoothDelta&&) = delete; \
	UInputModifierSmoothDelta(const UInputModifierSmoothDelta&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSmoothDelta); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSmoothDelta); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSmoothDelta) \
	ENHANCEDINPUT_API virtual ~UInputModifierSmoothDelta();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_85_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierSmoothDelta;

// ********** End Class UInputModifierSmoothDelta **************************************************

// ********** Begin Class UInputModifierDeadZone ***************************************************
struct Z_Construct_UClass_UInputModifierDeadZone_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierDeadZone_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierDeadZone(); \
	friend struct ::Z_Construct_UClass_UInputModifierDeadZone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierDeadZone_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierDeadZone, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierDeadZone_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierDeadZone)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierDeadZone(UInputModifierDeadZone&&) = delete; \
	UInputModifierDeadZone(const UInputModifierDeadZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierDeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierDeadZone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierDeadZone) \
	ENHANCEDINPUT_API virtual ~UInputModifierDeadZone();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_146_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_149_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierDeadZone;

// ********** End Class UInputModifierDeadZone *****************************************************

// ********** Begin Class UInputModifierScalar *****************************************************
struct Z_Construct_UClass_UInputModifierScalar_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierScalar_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierScalar(); \
	friend struct ::Z_Construct_UClass_UInputModifierScalar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierScalar_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierScalar, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierScalar_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierScalar)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScalar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierScalar(UInputModifierScalar&&) = delete; \
	UInputModifierScalar(const UInputModifierScalar&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScalar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScalar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScalar) \
	ENHANCEDINPUT_API virtual ~UInputModifierScalar();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_182_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_185_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_185_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierScalar;

// ********** End Class UInputModifierScalar *******************************************************

// ********** Begin Class UInputModifierScaleByDeltaTime *******************************************
struct Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierScaleByDeltaTime_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierScaleByDeltaTime(); \
	friend struct ::Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierScaleByDeltaTime_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierScaleByDeltaTime, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierScaleByDeltaTime_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierScaleByDeltaTime)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_213_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScaleByDeltaTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierScaleByDeltaTime(UInputModifierScaleByDeltaTime&&) = delete; \
	UInputModifierScaleByDeltaTime(const UInputModifierScaleByDeltaTime&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScaleByDeltaTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScaleByDeltaTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScaleByDeltaTime) \
	ENHANCEDINPUT_API virtual ~UInputModifierScaleByDeltaTime();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_210_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_213_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierScaleByDeltaTime;

// ********** End Class UInputModifierScaleByDeltaTime *********************************************

// ********** Begin Class UInputModifierNegate *****************************************************
struct Z_Construct_UClass_UInputModifierNegate_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierNegate_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierNegate(); \
	friend struct ::Z_Construct_UClass_UInputModifierNegate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierNegate_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierNegate, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierNegate_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierNegate)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierNegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierNegate(UInputModifierNegate&&) = delete; \
	UInputModifierNegate(const UInputModifierNegate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierNegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierNegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierNegate) \
	ENHANCEDINPUT_API virtual ~UInputModifierNegate();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_222_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_225_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierNegate;

// ********** End Class UInputModifierNegate *******************************************************

// ********** Begin Class UInputModifierSmooth *****************************************************
struct Z_Construct_UClass_UInputModifierSmooth_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSmooth_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_247_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSmooth(); \
	friend struct ::Z_Construct_UClass_UInputModifierSmooth_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierSmooth_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierSmooth, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierSmooth_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierSmooth)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_247_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSmooth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierSmooth(UInputModifierSmooth&&) = delete; \
	UInputModifierSmooth(const UInputModifierSmooth&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSmooth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSmooth); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSmooth) \
	ENHANCEDINPUT_API virtual ~UInputModifierSmooth();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_244_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_247_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_247_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_247_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierSmooth;

// ********** End Class UInputModifierSmooth *******************************************************

// ********** Begin Class UInputModifierResponseCurveExponential ***********************************
struct Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveExponential_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveExponential(); \
	friend struct ::Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierResponseCurveExponential_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierResponseCurveExponential, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierResponseCurveExponential_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveExponential)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierResponseCurveExponential(UInputModifierResponseCurveExponential&&) = delete; \
	UInputModifierResponseCurveExponential(const UInputModifierResponseCurveExponential&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveExponential); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveExponential); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveExponential) \
	ENHANCEDINPUT_API virtual ~UInputModifierResponseCurveExponential();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_274_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_277_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierResponseCurveExponential;

// ********** End Class UInputModifierResponseCurveExponential *************************************

// ********** Begin Class UInputModifierResponseCurveUser ******************************************
struct Z_Construct_UClass_UInputModifierResponseCurveUser_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierResponseCurveUser_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_296_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveUser(); \
	friend struct ::Z_Construct_UClass_UInputModifierResponseCurveUser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierResponseCurveUser_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierResponseCurveUser, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierResponseCurveUser_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveUser)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_296_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierResponseCurveUser(UInputModifierResponseCurveUser&&) = delete; \
	UInputModifierResponseCurveUser(const UInputModifierResponseCurveUser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveUser) \
	ENHANCEDINPUT_API virtual ~UInputModifierResponseCurveUser();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_293_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_296_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_296_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_296_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierResponseCurveUser;

// ********** End Class UInputModifierResponseCurveUser ********************************************

// ********** Begin Class UInputModifierFOVScaling *************************************************
struct Z_Construct_UClass_UInputModifierFOVScaling_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierFOVScaling_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_327_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierFOVScaling(); \
	friend struct ::Z_Construct_UClass_UInputModifierFOVScaling_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierFOVScaling_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierFOVScaling, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierFOVScaling_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierFOVScaling)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_327_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierFOVScaling(UInputModifierFOVScaling&&) = delete; \
	UInputModifierFOVScaling(const UInputModifierFOVScaling&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierFOVScaling); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierFOVScaling); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierFOVScaling) \
	ENHANCEDINPUT_API virtual ~UInputModifierFOVScaling();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_324_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_327_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_327_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_327_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierFOVScaling;

// ********** End Class UInputModifierFOVScaling ***************************************************

// ********** Begin Class UInputModifierToWorldSpace ***********************************************
struct Z_Construct_UClass_UInputModifierToWorldSpace_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierToWorldSpace_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_350_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierToWorldSpace(); \
	friend struct ::Z_Construct_UClass_UInputModifierToWorldSpace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierToWorldSpace_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierToWorldSpace, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierToWorldSpace_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierToWorldSpace)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_350_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierToWorldSpace(UInputModifierToWorldSpace&&) = delete; \
	UInputModifierToWorldSpace(const UInputModifierToWorldSpace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierToWorldSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierToWorldSpace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierToWorldSpace) \
	ENHANCEDINPUT_API virtual ~UInputModifierToWorldSpace();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_347_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_350_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_350_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_350_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierToWorldSpace;

// ********** End Class UInputModifierToWorldSpace *************************************************

// ********** Begin Class UInputModifierSwizzleAxis ************************************************
struct Z_Construct_UClass_UInputModifierSwizzleAxis_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifierSwizzleAxis_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_383_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSwizzleAxis(); \
	friend struct ::Z_Construct_UClass_UInputModifierSwizzleAxis_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputModifierSwizzleAxis_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierSwizzleAxis, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputModifierSwizzleAxis_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierSwizzleAxis)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_383_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierSwizzleAxis(UInputModifierSwizzleAxis&&) = delete; \
	UInputModifierSwizzleAxis(const UInputModifierSwizzleAxis&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSwizzleAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSwizzleAxis); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSwizzleAxis) \
	ENHANCEDINPUT_API virtual ~UInputModifierSwizzleAxis();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_380_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_383_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_383_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_383_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierSwizzleAxis;

// ********** End Class UInputModifierSwizzleAxis **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h

// ********** Begin Enum ENormalizeInputSmoothingType **********************************************
#define FOREACH_ENUM_ENORMALIZEINPUTSMOOTHINGTYPE(op) \
	op(ENormalizeInputSmoothingType::None) \
	op(ENormalizeInputSmoothingType::Lerp) \
	op(ENormalizeInputSmoothingType::Interp_To) \
	op(ENormalizeInputSmoothingType::Interp_Constant_To) \
	op(ENormalizeInputSmoothingType::Interp_Circular_In) \
	op(ENormalizeInputSmoothingType::Interp_Circular_Out) \
	op(ENormalizeInputSmoothingType::Interp_Circular_In_Out) \
	op(ENormalizeInputSmoothingType::Interp_Ease_In) \
	op(ENormalizeInputSmoothingType::Interp_Ease_Out) \
	op(ENormalizeInputSmoothingType::Interp_Ease_In_Out) \
	op(ENormalizeInputSmoothingType::Interp_Expo_In) \
	op(ENormalizeInputSmoothingType::Interp_Expo_Out) \
	op(ENormalizeInputSmoothingType::Interp_Expo_In_Out) \
	op(ENormalizeInputSmoothingType::Interp_Sin_In) \
	op(ENormalizeInputSmoothingType::Interp_Sin_Out) \
	op(ENormalizeInputSmoothingType::Interp_Sin_In_Out) 

enum class ENormalizeInputSmoothingType : uint8;
template<> struct TIsUEnumClass<ENormalizeInputSmoothingType> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<ENormalizeInputSmoothingType>();
// ********** End Enum ENormalizeInputSmoothingType ************************************************

// ********** Begin Enum EDeadZoneType *************************************************************
#define FOREACH_ENUM_EDEADZONETYPE(op) \
	op(EDeadZoneType::Axial) \
	op(EDeadZoneType::Radial) \
	op(EDeadZoneType::UnscaledRadial) 

enum class EDeadZoneType : uint8;
template<> struct TIsUEnumClass<EDeadZoneType> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EDeadZoneType>();
// ********** End Enum EDeadZoneType ***************************************************************

// ********** Begin Enum EFOVScalingType ***********************************************************
#define FOREACH_ENUM_EFOVSCALINGTYPE(op) \
	op(EFOVScalingType::Standard) \
	op(EFOVScalingType::UE4_BackCompat) 

enum class EFOVScalingType : uint8;
template<> struct TIsUEnumClass<EFOVScalingType> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EFOVScalingType>();
// ********** End Enum EFOVScalingType *************************************************************

// ********** Begin Enum EInputAxisSwizzle *********************************************************
#define FOREACH_ENUM_EINPUTAXISSWIZZLE(op) \
	op(EInputAxisSwizzle::YXZ) \
	op(EInputAxisSwizzle::ZYX) \
	op(EInputAxisSwizzle::XZY) \
	op(EInputAxisSwizzle::YZX) \
	op(EInputAxisSwizzle::ZXY) 

enum class EInputAxisSwizzle : uint8;
template<> struct TIsUEnumClass<EInputAxisSwizzle> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputAxisSwizzle>();
// ********** End Enum EInputAxisSwizzle ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
