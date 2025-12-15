// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Estimation/TimecodeRegressionProvider.h"

#ifdef TIMEMANAGEMENT_TimecodeRegressionProvider_generated_h
#error "TimecodeRegressionProvider.generated.h already included, missing '#pragma once' in TimecodeRegressionProvider.h"
#endif
#define TIMEMANAGEMENT_TimecodeRegressionProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTimecodeRegressionProvider **********************************************
struct Z_Construct_UClass_UTimecodeRegressionProvider_Statics;
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimecodeRegressionProvider_NoRegister();

#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_TimecodeRegressionProvider_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimecodeRegressionProvider(); \
	friend struct ::Z_Construct_UClass_UTimecodeRegressionProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEMANAGEMENT_API UClass* ::Z_Construct_UClass_UTimecodeRegressionProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimecodeRegressionProvider, UTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), Z_Construct_UClass_UTimecodeRegressionProvider_NoRegister) \
	DECLARE_SERIALIZER(UTimecodeRegressionProvider)


#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_TimecodeRegressionProvider_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UTimecodeRegressionProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimecodeRegressionProvider(UTimecodeRegressionProvider&&) = delete; \
	UTimecodeRegressionProvider(const UTimecodeRegressionProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UTimecodeRegressionProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimecodeRegressionProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimecodeRegressionProvider) \
	TIMEMANAGEMENT_API virtual ~UTimecodeRegressionProvider();


#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_TimecodeRegressionProvider_h_22_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_TimecodeRegressionProvider_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_TimecodeRegressionProvider_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_TimecodeRegressionProvider_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimecodeRegressionProvider;

// ********** End Class UTimecodeRegressionProvider ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_TimecodeRegressionProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
