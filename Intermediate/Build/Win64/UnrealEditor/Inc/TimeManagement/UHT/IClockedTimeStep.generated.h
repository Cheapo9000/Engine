// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Estimation/IClockedTimeStep.h"

#ifdef TIMEMANAGEMENT_IClockedTimeStep_generated_h
#error "IClockedTimeStep.generated.h already included, missing '#pragma once' in IClockedTimeStep.h"
#endif
#define TIMEMANAGEMENT_IClockedTimeStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UClockedTimeStep *****************************************************
struct Z_Construct_UClass_UClockedTimeStep_Statics;
TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UClockedTimeStep_NoRegister();

#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClockedTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClockedTimeStep(UClockedTimeStep&&) = delete; \
	UClockedTimeStep(const UClockedTimeStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClockedTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClockedTimeStep); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClockedTimeStep) \
	virtual ~UClockedTimeStep() = default;


#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUClockedTimeStep(); \
	friend struct ::Z_Construct_UClass_UClockedTimeStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEMANAGEMENT_API UClass* ::Z_Construct_UClass_UClockedTimeStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UClockedTimeStep, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TimeManagement"), Z_Construct_UClass_UClockedTimeStep_NoRegister) \
	DECLARE_SERIALIZER(UClockedTimeStep)


#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IClockedTimeStep() {} \
public: \
	typedef UClockedTimeStep UClassType; \
	typedef IClockedTimeStep ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_8_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClockedTimeStep;

// ********** End Interface UClockedTimeStep *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_Estimation_IClockedTimeStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
