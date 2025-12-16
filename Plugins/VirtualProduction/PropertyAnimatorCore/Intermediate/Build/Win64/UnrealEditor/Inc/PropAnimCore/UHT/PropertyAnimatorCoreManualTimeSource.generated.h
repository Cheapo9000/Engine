// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeSources/PropertyAnimatorCoreManualTimeSource.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreManualTimeSource_generated_h
#error "PropertyAnimatorCoreManualTimeSource.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreManualTimeSource.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreManualTimeSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreManualTimeSource ************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h_24_ACCESSORS \
static void GetCustomTime_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomTime_WrapperImpl(void* Object, const void* InValue); \
static void GetPlaybackState_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlaybackState_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorCoreManualTimeSource_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreManualTimeSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreManualTimeSource(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreManualTimeSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreManualTimeSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreManualTimeSource, UPropertyAnimatorCoreTimeSourceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreManualTimeSource_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreManualTimeSource)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreManualTimeSource(UPropertyAnimatorCoreManualTimeSource&&) = delete; \
	UPropertyAnimatorCoreManualTimeSource(const UPropertyAnimatorCoreManualTimeSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCoreManualTimeSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreManualTimeSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCoreManualTimeSource) \
	PROPERTYANIMATORCORE_API virtual ~UPropertyAnimatorCoreManualTimeSource();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h_24_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreManualTimeSource;

// ********** End Class UPropertyAnimatorCoreManualTimeSource **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreManualTimeSource_h

// ********** Begin Enum EPropertyAnimatorCoreManualStatus *****************************************
#define FOREACH_ENUM_EPROPERTYANIMATORCOREMANUALSTATUS(op) \
	op(EPropertyAnimatorCoreManualStatus::Stopped) \
	op(EPropertyAnimatorCoreManualStatus::Paused) \
	op(EPropertyAnimatorCoreManualStatus::PlayingForward) \
	op(EPropertyAnimatorCoreManualStatus::PlayingBackward) 

enum class EPropertyAnimatorCoreManualStatus : uint8;
template<> struct TIsUEnumClass<EPropertyAnimatorCoreManualStatus> { enum { Value = true }; };
template<> PROPERTYANIMATORCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPropertyAnimatorCoreManualStatus>();
// ********** End Enum EPropertyAnimatorCoreManualStatus *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
