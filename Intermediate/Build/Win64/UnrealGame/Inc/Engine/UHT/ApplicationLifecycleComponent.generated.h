// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ApplicationLifecycleComponent.h"

#ifdef ENGINE_ApplicationLifecycleComponent_generated_h
#error "ApplicationLifecycleComponent.generated.h already included, missing '#pragma once' in ApplicationLifecycleComponent.h"
#endif
#define ENGINE_ApplicationLifecycleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETemperatureSeverityType : uint8;

// ********** Begin Delegate FApplicationLifetimeDelegate ******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_33_DELEGATE \
static ENGINE_API void FApplicationLifetimeDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationLifetimeDelegate);


// ********** End Delegate FApplicationLifetimeDelegate ********************************************

// ********** Begin Delegate FOnTemperatureChangeDelegate ******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_34_DELEGATE \
static ENGINE_API void FOnTemperatureChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTemperatureChangeDelegate, ETemperatureSeverityType Severity);


// ********** End Delegate FOnTemperatureChangeDelegate ********************************************

// ********** Begin Delegate FOnLowPowerModeDelegate ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_35_DELEGATE \
static ENGINE_API void FOnLowPowerModeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLowPowerModeDelegate, bool bInLowPowerMode);


// ********** End Delegate FOnLowPowerModeDelegate *************************************************

// ********** Begin Delegate FApplicationStartupArgumentsDelegate **********************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_67_DELEGATE \
static ENGINE_API void FApplicationStartupArgumentsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplicationStartupArgumentsDelegate, TArray<FString> const& StartupArguments);


// ********** End Delegate FApplicationStartupArgumentsDelegate ************************************

// ********** Begin Class UApplicationLifecycleComponent *******************************************
struct Z_Construct_UClass_UApplicationLifecycleComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUApplicationLifecycleComponent(); \
	friend struct ::Z_Construct_UClass_UApplicationLifecycleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UApplicationLifecycleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister) \
	DECLARE_SERIALIZER(UApplicationLifecycleComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UApplicationLifecycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UApplicationLifecycleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UApplicationLifecycleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UApplicationLifecycleComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UApplicationLifecycleComponent(UApplicationLifecycleComponent&&) = delete; \
	UApplicationLifecycleComponent(const UApplicationLifecycleComponent&) = delete; \
	ENGINE_API virtual ~UApplicationLifecycleComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UApplicationLifecycleComponent;

// ********** End Class UApplicationLifecycleComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ApplicationLifecycleComponent_h

// ********** Begin Enum ETemperatureSeverityType **************************************************
#define FOREACH_ENUM_ETEMPERATURESEVERITYTYPE(op) \
	op(ETemperatureSeverityType::Unknown) \
	op(ETemperatureSeverityType::Good) \
	op(ETemperatureSeverityType::Bad) \
	op(ETemperatureSeverityType::Serious) \
	op(ETemperatureSeverityType::Critical) \
	op(ETemperatureSeverityType::NumSeverities) 

enum class ETemperatureSeverityType : uint8;
template<> struct TIsUEnumClass<ETemperatureSeverityType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETemperatureSeverityType>();
// ********** End Enum ETemperatureSeverityType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
