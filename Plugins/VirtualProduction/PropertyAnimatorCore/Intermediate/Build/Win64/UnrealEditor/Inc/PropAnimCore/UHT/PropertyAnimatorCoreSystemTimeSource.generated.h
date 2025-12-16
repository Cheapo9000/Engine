// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeSources/PropertyAnimatorCoreSystemTimeSource.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreSystemTimeSource_generated_h
#error "PropertyAnimatorCoreSystemTimeSource.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreSystemTimeSource.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreSystemTimeSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreSystemTimeSource ************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h_44_ACCESSORS \
static void GetMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetMode_WrapperImpl(void* Object, const void* InValue); \
static void GetbUseUtc_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseUtc_WrapperImpl(void* Object, const void* InValue); \
static void GetCountdownFormat_WrapperImpl(const void* Object, void* OutValue); \
static void SetCountdownFormat_WrapperImpl(void* Object, const void* InValue); \
static void GetCountdownDuration_WrapperImpl(const void* Object, void* OutValue); \
static void SetCountdownDuration_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorCoreSystemTimeSource_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreSystemTimeSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreSystemTimeSource(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreSystemTimeSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreSystemTimeSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreSystemTimeSource, UPropertyAnimatorCoreTimeSourceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreSystemTimeSource_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreSystemTimeSource)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreSystemTimeSource(UPropertyAnimatorCoreSystemTimeSource&&) = delete; \
	UPropertyAnimatorCoreSystemTimeSource(const UPropertyAnimatorCoreSystemTimeSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCoreSystemTimeSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreSystemTimeSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCoreSystemTimeSource) \
	PROPERTYANIMATORCORE_API virtual ~UPropertyAnimatorCoreSystemTimeSource();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h_41_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h_44_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreSystemTimeSource;

// ********** End Class UPropertyAnimatorCoreSystemTimeSource **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreSystemTimeSource_h

// ********** Begin Enum EPropertyAnimatorCoreSystemMode *******************************************
#define FOREACH_ENUM_EPROPERTYANIMATORCORESYSTEMMODE(op) \
	op(EPropertyAnimatorCoreSystemMode::LocalTime) \
	op(EPropertyAnimatorCoreSystemMode::Countdown) \
	op(EPropertyAnimatorCoreSystemMode::Stopwatch) 

enum class EPropertyAnimatorCoreSystemMode : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorCoreSystemMode> { enum { Value = true }; };
template<> PROPERTYANIMATORCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorCoreSystemMode>();
// ********** End Enum EPropertyAnimatorCoreSystemMode *********************************************

// ********** Begin Enum EPropertyAnimatorCoreSystemCountdownFormat ********************************
#define FOREACH_ENUM_EPROPERTYANIMATORCORESYSTEMCOUNTDOWNFORMAT(op) \
	op(EPropertyAnimatorCoreSystemCountdownFormat::Duration) \
	op(EPropertyAnimatorCoreSystemCountdownFormat::Target) 

enum class EPropertyAnimatorCoreSystemCountdownFormat : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorCoreSystemCountdownFormat> { enum { Value = true }; };
template<> PROPERTYANIMATORCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorCoreSystemCountdownFormat>();
// ********** End Enum EPropertyAnimatorCoreSystemCountdownFormat **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
