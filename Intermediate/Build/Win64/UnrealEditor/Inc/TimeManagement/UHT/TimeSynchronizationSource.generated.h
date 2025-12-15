// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeSynchronizationSource.h"

#ifdef TIMEMANAGEMENT_TimeSynchronizationSource_generated_h
#error "TimeSynchronizationSource.generated.h already included, missing '#pragma once' in TimeSynchronizationSource.h"
#endif
#define TIMEMANAGEMENT_TimeSynchronizationSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTimeSynchronizationSource ***********************************************
struct Z_Construct_UClass_UTimeSynchronizationSource_Statics;
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource_NoRegister();

#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUTimeSynchronizationSource(); \
	friend struct ::Z_Construct_UClass_UTimeSynchronizationSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEMANAGEMENT_API UClass* ::Z_Construct_UClass_UTimeSynchronizationSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimeSynchronizationSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TimeManagement"), Z_Construct_UClass_UTimeSynchronizationSource_NoRegister) \
	DECLARE_SERIALIZER(UTimeSynchronizationSource)


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UTimeSynchronizationSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeSynchronizationSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UTimeSynchronizationSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSynchronizationSource); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimeSynchronizationSource(UTimeSynchronizationSource&&) = delete; \
	UTimeSynchronizationSource(const UTimeSynchronizationSource&) = delete; \
	TIMEMANAGEMENT_API virtual ~UTimeSynchronizationSource();


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_52_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_INCLASS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimeSynchronizationSource;

// ********** End Class UTimeSynchronizationSource *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
