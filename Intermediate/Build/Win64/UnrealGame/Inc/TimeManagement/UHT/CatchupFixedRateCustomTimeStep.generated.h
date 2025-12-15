// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CatchupFixedRateCustomTimeStep.h"

#ifdef TIMEMANAGEMENT_CatchupFixedRateCustomTimeStep_generated_h
#error "CatchupFixedRateCustomTimeStep.generated.h already included, missing '#pragma once' in CatchupFixedRateCustomTimeStep.h"
#endif
#define TIMEMANAGEMENT_CatchupFixedRateCustomTimeStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCatchupFixedRateCustomTimeStep ******************************************
struct Z_Construct_UClass_UCatchupFixedRateCustomTimeStep_Statics;
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UCatchupFixedRateCustomTimeStep_NoRegister();

#define FID_Engine_Source_Runtime_TimeManagement_Public_CatchupFixedRateCustomTimeStep_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCatchupFixedRateCustomTimeStep(); \
	friend struct ::Z_Construct_UClass_UCatchupFixedRateCustomTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEMANAGEMENT_API UClass* ::Z_Construct_UClass_UCatchupFixedRateCustomTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UCatchupFixedRateCustomTimeStep, UFixedFrameRateCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), Z_Construct_UClass_UCatchupFixedRateCustomTimeStep_NoRegister) \
	DECLARE_SERIALIZER(UCatchupFixedRateCustomTimeStep) \
	virtual UObject* _getUObject() const override { return const_cast<UCatchupFixedRateCustomTimeStep*>(this); }


#define FID_Engine_Source_Runtime_TimeManagement_Public_CatchupFixedRateCustomTimeStep_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UCatchupFixedRateCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCatchupFixedRateCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UCatchupFixedRateCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCatchupFixedRateCustomTimeStep); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCatchupFixedRateCustomTimeStep(UCatchupFixedRateCustomTimeStep&&) = delete; \
	UCatchupFixedRateCustomTimeStep(const UCatchupFixedRateCustomTimeStep&) = delete; \
	TIMEMANAGEMENT_API virtual ~UCatchupFixedRateCustomTimeStep();


#define FID_Engine_Source_Runtime_TimeManagement_Public_CatchupFixedRateCustomTimeStep_h_21_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_CatchupFixedRateCustomTimeStep_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_CatchupFixedRateCustomTimeStep_h_24_INCLASS \
	FID_Engine_Source_Runtime_TimeManagement_Public_CatchupFixedRateCustomTimeStep_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCatchupFixedRateCustomTimeStep;

// ********** End Class UCatchupFixedRateCustomTimeStep ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_CatchupFixedRateCustomTimeStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
