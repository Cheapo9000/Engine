// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeSources/PropertyAnimatorCoreWorldTimeSource.h"

#ifdef PROPERTYANIMATORCORE_PropertyAnimatorCoreWorldTimeSource_generated_h
#error "PropertyAnimatorCoreWorldTimeSource.generated.h already included, missing '#pragma once' in PropertyAnimatorCoreWorldTimeSource.h"
#endif
#define PROPERTYANIMATORCORE_PropertyAnimatorCoreWorldTimeSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyAnimatorCoreWorldTimeSource *************************************
struct Z_Construct_UClass_UPropertyAnimatorCoreWorldTimeSource_Statics;
PROPERTYANIMATORCORE_API UClass* Z_Construct_UClass_UPropertyAnimatorCoreWorldTimeSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreWorldTimeSource_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyAnimatorCoreWorldTimeSource(); \
	friend struct ::Z_Construct_UClass_UPropertyAnimatorCoreWorldTimeSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYANIMATORCORE_API UClass* ::Z_Construct_UClass_UPropertyAnimatorCoreWorldTimeSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyAnimatorCoreWorldTimeSource, UPropertyAnimatorCoreTimeSourceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PropertyAnimatorCore"), Z_Construct_UClass_UPropertyAnimatorCoreWorldTimeSource_NoRegister) \
	DECLARE_SERIALIZER(UPropertyAnimatorCoreWorldTimeSource)


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreWorldTimeSource_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyAnimatorCoreWorldTimeSource(UPropertyAnimatorCoreWorldTimeSource&&) = delete; \
	UPropertyAnimatorCoreWorldTimeSource(const UPropertyAnimatorCoreWorldTimeSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYANIMATORCORE_API, UPropertyAnimatorCoreWorldTimeSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyAnimatorCoreWorldTimeSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyAnimatorCoreWorldTimeSource) \
	PROPERTYANIMATORCORE_API virtual ~UPropertyAnimatorCoreWorldTimeSource();


#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreWorldTimeSource_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreWorldTimeSource_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreWorldTimeSource_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreWorldTimeSource_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyAnimatorCoreWorldTimeSource;

// ********** End Class UPropertyAnimatorCoreWorldTimeSource ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PropertyAnimatorCore_Source_PropertyAnimatorCore_Public_TimeSources_PropertyAnimatorCoreWorldTimeSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
