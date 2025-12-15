// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GenlockedFixedRateCustomTimeStep.h"

#ifdef TIMEMANAGEMENT_GenlockedFixedRateCustomTimeStep_generated_h
#error "GenlockedFixedRateCustomTimeStep.generated.h already included, missing '#pragma once' in GenlockedFixedRateCustomTimeStep.h"
#endif
#define TIMEMANAGEMENT_GenlockedFixedRateCustomTimeStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGenlockedFixedRateCustomTimeStep ****************************************
struct Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics;
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister();

#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUGenlockedFixedRateCustomTimeStep(); \
	friend struct ::Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEMANAGEMENT_API UClass* ::Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenlockedFixedRateCustomTimeStep, UGenlockedCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeManagement"), Z_Construct_UClass_UGenlockedFixedRateCustomTimeStep_NoRegister) \
	DECLARE_SERIALIZER(UGenlockedFixedRateCustomTimeStep)


#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UGenlockedFixedRateCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenlockedFixedRateCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UGenlockedFixedRateCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenlockedFixedRateCustomTimeStep); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenlockedFixedRateCustomTimeStep(UGenlockedFixedRateCustomTimeStep&&) = delete; \
	UGenlockedFixedRateCustomTimeStep(const UGenlockedFixedRateCustomTimeStep&) = delete; \
	TIMEMANAGEMENT_API virtual ~UGenlockedFixedRateCustomTimeStep();


#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_32_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_INCLASS \
	FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenlockedFixedRateCustomTimeStep;

// ********** End Class UGenlockedFixedRateCustomTimeStep ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedFixedRateCustomTimeStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
