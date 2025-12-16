// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedPerfTestGameModeBase.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedPerfTestGameModeBase_generated_h
#error "AutomatedPerfTestGameModeBase.generated.h already included, missing '#pragma once' in AutomatedPerfTestGameModeBase.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedPerfTestGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAutomatedPerfTestGameModeBase *******************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h_16_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AAutomatedPerfTestGameModeBase_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_AAutomatedPerfTestGameModeBase_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutomatedPerfTestGameModeBase(); \
	friend struct ::Z_Construct_UClass_AAutomatedPerfTestGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_AAutomatedPerfTestGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AAutomatedPerfTestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_AAutomatedPerfTestGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AAutomatedPerfTestGameModeBase) \
	virtual UObject* _getUObject() const override { return const_cast<AAutomatedPerfTestGameModeBase*>(this); }


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutomatedPerfTestGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAutomatedPerfTestGameModeBase(AAutomatedPerfTestGameModeBase&&) = delete; \
	AAutomatedPerfTestGameModeBase(const AAutomatedPerfTestGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutomatedPerfTestGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutomatedPerfTestGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutomatedPerfTestGameModeBase) \
	NO_API virtual ~AAutomatedPerfTestGameModeBase();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h_13_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAutomatedPerfTestGameModeBase;

// ********** End Class AAutomatedPerfTestGameModeBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
