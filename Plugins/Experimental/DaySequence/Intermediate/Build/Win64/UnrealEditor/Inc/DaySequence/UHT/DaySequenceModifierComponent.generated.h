// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceModifierComponent.h"

#ifdef DAYSEQUENCE_DaySequenceModifierComponent_generated_h
#error "DaySequenceModifierComponent.generated.h already included, missing '#pragma once' in DaySequenceModifierComponent.h"
#endif
#define DAYSEQUENCE_DaySequenceModifierComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADaySequenceActor;
class APlayerController;

// ********** Begin Class UDaySequenceModifierEasingFunction ***************************************
struct Z_Construct_UClass_UDaySequenceModifierEasingFunction_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UDaySequenceModifierEasingFunction_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceModifierEasingFunction(); \
	friend struct ::Z_Construct_UClass_UDaySequenceModifierEasingFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UDaySequenceModifierEasingFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceModifierEasingFunction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UDaySequenceModifierEasingFunction_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceModifierEasingFunction) \
	virtual UObject* _getUObject() const override { return const_cast<UDaySequenceModifierEasingFunction*>(this); }


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDaySequenceModifierEasingFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceModifierEasingFunction(UDaySequenceModifierEasingFunction&&) = delete; \
	UDaySequenceModifierEasingFunction(const UDaySequenceModifierEasingFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceModifierEasingFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceModifierEasingFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceModifierEasingFunction) \
	NO_API virtual ~UDaySequenceModifierEasingFunction();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_112_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_118_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_118_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequenceModifierEasingFunction;

// ********** End Class UDaySequenceModifierEasingFunction *****************************************

// ********** Begin Delegate FOnPostReinitializeSubSequences ***************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_134_DELEGATE \
DAYSEQUENCE_API void FOnPostReinitializeSubSequences_DelegateWrapper(const FMulticastScriptDelegate& OnPostReinitializeSubSequences);


// ********** End Delegate FOnPostReinitializeSubSequences *****************************************

// ********** Begin Delegate FOnPostEnableModifier *************************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_135_DELEGATE \
DAYSEQUENCE_API void FOnPostEnableModifier_DelegateWrapper(const FMulticastScriptDelegate& OnPostEnableModifier);


// ********** End Delegate FOnPostEnableModifier ***************************************************

// ********** Begin Class UDaySequenceModifierComponent ********************************************
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlendWeight); \
	DECLARE_FUNCTION(execSetBlendTarget); \
	DECLARE_FUNCTION(execDisableComponent); \
	DECLARE_FUNCTION(execEnableComponent); \
	DECLARE_FUNCTION(execUnbindFromDaySequenceActor); \
	DECLARE_FUNCTION(execBindToDaySequenceActor);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_ACCESSORS \
static void GetUserDaySequence_WrapperImpl(const void* Object, void* OutValue); \
static void SetUserDaySequence_WrapperImpl(void* Object, const void* InValue); \
static void GetTransientSequence_WrapperImpl(const void* Object, void* OutValue); \
static void SetTransientSequence_WrapperImpl(void* Object, const void* InValue); \
static void GetBias_WrapperImpl(const void* Object, void* OutValue); \
static void SetBias_WrapperImpl(void* Object, const void* InValue); \
static void GetDayNightCycleTime_WrapperImpl(const void* Object, void* OutValue); \
static void SetDayNightCycleTime_WrapperImpl(void* Object, const void* InValue); \
static void GetUserBlendWeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetUserBlendWeight_WrapperImpl(void* Object, const void* InValue); \
static void GetDayNightCycle_WrapperImpl(const void* Object, void* OutValue); \
static void SetDayNightCycle_WrapperImpl(void* Object, const void* InValue); \
static void GetMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetMode_WrapperImpl(void* Object, const void* InValue); \
static void GetBlendPolicy_WrapperImpl(const void* Object, void* OutValue); \
static void SetBlendPolicy_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UDaySequenceModifierComponent_Statics;
DAYSEQUENCE_API UClass* Z_Construct_UClass_UDaySequenceModifierComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceModifierComponent(); \
	friend struct ::Z_Construct_UClass_UDaySequenceModifierComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DAYSEQUENCE_API UClass* ::Z_Construct_UClass_UDaySequenceModifierComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDaySequenceModifierComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequence"), Z_Construct_UClass_UDaySequenceModifierComponent_NoRegister) \
	DECLARE_SERIALIZER(UDaySequenceModifierComponent) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDaySequenceModifierComponent(UDaySequenceModifierComponent&&) = delete; \
	UDaySequenceModifierComponent(const UDaySequenceModifierComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, UDaySequenceModifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceModifierComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceModifierComponent) \
	DAYSEQUENCE_API virtual ~UDaySequenceModifierComponent();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_137_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_ACCESSORS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_143_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDaySequenceModifierComponent;

// ********** End Class UDaySequenceModifierComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h

// ********** Begin Enum EDayNightCycleMode ********************************************************
#define FOREACH_ENUM_EDAYNIGHTCYCLEMODE(op) \
	op(EDayNightCycleMode::Default) \
	op(EDayNightCycleMode::FixedTime) \
	op(EDayNightCycleMode::StartAtSpecifiedTime) \
	op(EDayNightCycleMode::RandomFixedTime) \
	op(EDayNightCycleMode::RandomStartTime) \
	op(EDayNightCycleMode::LocalFixedTime) 

enum class EDayNightCycleMode : uint8;
template<> struct TIsUEnumClass<EDayNightCycleMode> { enum { Value = true }; };
template<> DAYSEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDayNightCycleMode>();
// ********** End Enum EDayNightCycleMode **********************************************************

// ********** Begin Enum EDaySequenceModifierMode **************************************************
#define FOREACH_ENUM_EDAYSEQUENCEMODIFIERMODE(op) \
	op(EDaySequenceModifierMode::Global) \
	op(EDaySequenceModifierMode::Volume) \
	op(EDaySequenceModifierMode::Time) 

enum class EDaySequenceModifierMode : uint8;
template<> struct TIsUEnumClass<EDaySequenceModifierMode> { enum { Value = true }; };
template<> DAYSEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDaySequenceModifierMode>();
// ********** End Enum EDaySequenceModifierMode ****************************************************

// ********** Begin Enum EDaySequenceModifierUserBlendPolicy ***************************************
#define FOREACH_ENUM_EDAYSEQUENCEMODIFIERUSERBLENDPOLICY(op) \
	op(EDaySequenceModifierUserBlendPolicy::Ignored) \
	op(EDaySequenceModifierUserBlendPolicy::Minimum) \
	op(EDaySequenceModifierUserBlendPolicy::Maximum) \
	op(EDaySequenceModifierUserBlendPolicy::Override) 

enum class EDaySequenceModifierUserBlendPolicy : uint8;
template<> struct TIsUEnumClass<EDaySequenceModifierUserBlendPolicy> { enum { Value = true }; };
template<> DAYSEQUENCE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDaySequenceModifierUserBlendPolicy>();
// ********** End Enum EDaySequenceModifierUserBlendPolicy *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
