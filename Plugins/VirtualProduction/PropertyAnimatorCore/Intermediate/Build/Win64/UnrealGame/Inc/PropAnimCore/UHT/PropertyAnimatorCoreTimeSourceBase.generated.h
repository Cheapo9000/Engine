// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeSources/PropertyAnimatorCoreTimeSourceBase.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreTimeSourceBase_generated_h
#error "PropertyAnimatorCoreTimeSourceBase.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreTimeSourceBase.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreTimeSourceBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreTimeSourceBase **************************************
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h_38_ACCESSORS \
static void GetbUseFrameRate_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUseFrameRate_WrapperImpl(void* Object, const void* InValue); \
static void GetFrameRate_WrapperImpl(const void* Object, void* OutValue); \
static void SetFrameRate_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UPropertyAnimatorCoreTimeSourceBase_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreTimeSourceBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreTimeSourceBase(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreTimeSourceBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreTimeSourceBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreTimeSourceBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreTimeSourceBase_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreTimeSourceBase) \
	virtual UObject* _getUObject() const override { return const_cast<UPropertyAnimatorCoreTimeSourceBase*>(this); }


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreTimeSourceBase(UPropertyAnimatorCoreTimeSourceBase&&) = delete; \
	UPropertyAnimatorCoreTimeSourceBase(const UPropertyAnimatorCoreTimeSourceBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCoreTimeSourceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreTimeSourceBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCoreTimeSourceBase) \
	PROPERTYANIMATORCORE_API virtual ~UPropertyAnimatorCoreTimeSourceBase();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h_35_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h_38_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreTimeSourceBase;

// ********** End Class UPropertyAnimatorCoreTimeSourceBase ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreTimeSourceBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
