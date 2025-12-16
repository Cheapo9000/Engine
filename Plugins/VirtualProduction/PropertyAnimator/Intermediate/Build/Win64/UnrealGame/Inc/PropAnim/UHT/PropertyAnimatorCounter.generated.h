// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animators/PropertyAnimatorCounter.h"

#ifdef PROPERTYANIMATOR_PropertyAnimatorCounter_generated_h
#error "PropertyAnimatorCounter.generated.h already included, missing '#pragma once' in PropertyAnimatorCounter.h"
#endif
#define PROPERTYANIMATOR_PropertyAnimatorCounter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropertyAnimatorCounterFormat ************************************
struct Z_Construct_UScriptStruct_FPropertyAnimatorCounterFormat_Statics;
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropertyAnimatorCounterFormat_Statics; \
	PROPERTYANIMATOR_API static class UScriptStruct* StaticStruct();


struct FPropertyAnimatorCounterFormat;
// ********** End ScriptStruct FPropertyAnimatorCounterFormat **************************************

// ********** Begin Class UPropertyAnimatorCounter *************************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvailableFormatNames);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSaveCustomFormatAsPreset); \
	DECLARE_FUNCTION(execOpenPropertyAnimatorSettings);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_ACCESSORS \
static void GetDisplayPattern_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplayPattern_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseCustomFormat_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseCustomFormat_WrapperImpl(void* Object, const void* InValue); \
static void GetPresetFormatName_WrapperImpl(const void* Object, void* OutValue); \
static void SetPresetFormatName_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorCounter_Statics;
PROPERTYANIMATOR_API UClass* Z_Construct_UClass_UPropertyAnimatorCounter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCounter(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCounter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATOR_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCounter_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCounter, UPropertyAnimatorTextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimator"), Z_Construct_UClass_UPropertyAnimatorCounter_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCounter)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCounter(UPropertyAnimatorCounter&&) = delete; \
	UPropertyAnimatorCounter(const UPropertyAnimatorCounter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATOR_API, UPropertyAnimatorCounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCounter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCounter) \
	PROPERTYANIMATOR_API virtual ~UPropertyAnimatorCounter();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_94_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCounter;

// ********** End Class UPropertyAnimatorCounter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimator_Source_PropertyAnimator_Public_Animators_PropertyAnimatorCounter_h

// ********** Begin Enum EPropertyAnimatorCounterRoundingMode **************************************
#define FOREACH_ENUM_EPROPERTYANIMATORCOUNTERROUNDINGMODE(op) \
	op(EPropertyAnimatorCounterRoundingMode::None) \
	op(EPropertyAnimatorCounterRoundingMode::Round) \
	op(EPropertyAnimatorCounterRoundingMode::Floor) \
	op(EPropertyAnimatorCounterRoundingMode::Ceil) 

enum class EPropertyAnimatorCounterRoundingMode : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorCounterRoundingMode> { enum { Value = true }; };
template<> PROPERTYANIMATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorCounterRoundingMode>();
// ********** End Enum EPropertyAnimatorCounterRoundingMode ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
