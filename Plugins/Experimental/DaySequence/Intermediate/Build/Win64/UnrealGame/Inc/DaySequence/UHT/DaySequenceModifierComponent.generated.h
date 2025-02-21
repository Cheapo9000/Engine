// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DaySequenceModifierComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADaySequenceActor;
class APlayerController;
#ifdef DAYSEQUENCE_DaySequenceModifierComponent_generated_h
#error "DaySequenceModifierComponent.generated.h already included, missing '#pragma once' in DaySequenceModifierComponent.h"
#endif
#define DAYSEQUENCE_DaySequenceModifierComponent_generated_h

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceModifierEasingFunction(); \
	friend struct Z_Construct_UClass_UDaySequenceModifierEasingFunction_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceModifierEasingFunction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DaySequence"), NO_API) \
	DECLARE_SERIALIZER(UDaySequenceModifierEasingFunction) \
	virtual UObject* _getUObject() const override { return const_cast<UDaySequenceModifierEasingFunction*>(this); }


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDaySequenceModifierEasingFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceModifierEasingFunction(UDaySequenceModifierEasingFunction&&); \
	UDaySequenceModifierEasingFunction(const UDaySequenceModifierEasingFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDaySequenceModifierEasingFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceModifierEasingFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceModifierEasingFunction) \
	NO_API virtual ~UDaySequenceModifierEasingFunction();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_100_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_106_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequenceModifierEasingFunction>();

#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_122_DELEGATE \
DAYSEQUENCE_API void FOnPostReinitializeSubSequences_DelegateWrapper(const FMulticastScriptDelegate& OnPostReinitializeSubSequences);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_123_DELEGATE \
DAYSEQUENCE_API void FOnPostEnableModifier_DelegateWrapper(const FMulticastScriptDelegate& OnPostEnableModifier);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBlendWeight); \
	DECLARE_FUNCTION(execSetBlendTarget); \
	DECLARE_FUNCTION(execDisableComponent); \
	DECLARE_FUNCTION(execEnableComponent); \
	DECLARE_FUNCTION(execUnbindFromDaySequenceActor); \
	DECLARE_FUNCTION(execBindToDaySequenceActor);


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_ACCESSORS \
static void GetUserDaySequence_WrapperImpl(const void* Object, void* OutValue); \
static void SetUserDaySequence_WrapperImpl(void* Object, const void* InValue); \
static void GetTransientSequence_WrapperImpl(const void* Object, void* OutValue); \
static void SetTransientSequence_WrapperImpl(void* Object, const void* InValue); \
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


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDaySequenceModifierComponent(); \
	friend struct Z_Construct_UClass_UDaySequenceModifierComponent_Statics; \
public: \
	DECLARE_CLASS(UDaySequenceModifierComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DaySequence"), DAYSEQUENCE_API) \
	DECLARE_SERIALIZER(UDaySequenceModifierComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDaySequenceModifierComponent(UDaySequenceModifierComponent&&); \
	UDaySequenceModifierComponent(const UDaySequenceModifierComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DAYSEQUENCE_API, UDaySequenceModifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDaySequenceModifierComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDaySequenceModifierComponent) \
	DAYSEQUENCE_API virtual ~UDaySequenceModifierComponent();


#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_125_PROLOG
#define FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_ACCESSORS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h_131_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAYSEQUENCE_API UClass* StaticClass<class UDaySequenceModifierComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DaySequence_Source_DaySequence_Public_DaySequenceModifierComponent_h


#define FOREACH_ENUM_EDAYNIGHTCYCLEMODE(op) \
	op(EDayNightCycleMode::Default) \
	op(EDayNightCycleMode::FixedTime) \
	op(EDayNightCycleMode::StartAtSpecifiedTime) \
	op(EDayNightCycleMode::RandomFixedTime) \
	op(EDayNightCycleMode::RandomStartTime) 

enum class EDayNightCycleMode : uint8;
template<> struct TIsUEnumClass<EDayNightCycleMode> { enum { Value = true }; };
template<> DAYSEQUENCE_API UEnum* StaticEnum<EDayNightCycleMode>();

#define FOREACH_ENUM_EDAYSEQUENCEMODIFIERMODE(op) \
	op(EDaySequenceModifierMode::Global) \
	op(EDaySequenceModifierMode::Volume) 

enum class EDaySequenceModifierMode : uint8;
template<> struct TIsUEnumClass<EDaySequenceModifierMode> { enum { Value = true }; };
template<> DAYSEQUENCE_API UEnum* StaticEnum<EDaySequenceModifierMode>();

#define FOREACH_ENUM_EDAYSEQUENCEMODIFIERUSERBLENDPOLICY(op) \
	op(EDaySequenceModifierUserBlendPolicy::Ignored) \
	op(EDaySequenceModifierUserBlendPolicy::Minimum) \
	op(EDaySequenceModifierUserBlendPolicy::Maximum) \
	op(EDaySequenceModifierUserBlendPolicy::Override) 

enum class EDaySequenceModifierUserBlendPolicy : uint8;
template<> struct TIsUEnumClass<EDaySequenceModifierUserBlendPolicy> { enum { Value = true }; };
template<> DAYSEQUENCE_API UEnum* StaticEnum<EDaySequenceModifierUserBlendPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
