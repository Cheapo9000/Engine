// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Processors/MassEnvQueryProcessorBase.h"

#ifdef MASSEQS_MassEnvQueryProcessorBase_generated_h
#error "MassEnvQueryProcessorBase.generated.h already included, missing '#pragma once' in MassEnvQueryProcessorBase.h"
#endif
#define MASSEQS_MassEnvQueryProcessorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEnvQueryProcessorBase ***********************************************
struct Z_Construct_UClass_UMassEnvQueryProcessorBase_Statics;
MASSEQS_API UClass* Z_Construct_UClass_UMassEnvQueryProcessorBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Processors_MassEnvQueryProcessorBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEnvQueryProcessorBase(); \
	friend struct ::Z_Construct_UClass_UMassEnvQueryProcessorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSEQS_API UClass* ::Z_Construct_UClass_UMassEnvQueryProcessorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEnvQueryProcessorBase, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassEQS"), Z_Construct_UClass_UMassEnvQueryProcessorBase_NoRegister) \
	DECLARE_SERIALIZER(UMassEnvQueryProcessorBase)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Processors_MassEnvQueryProcessorBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSEQS_API UMassEnvQueryProcessorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEnvQueryProcessorBase(UMassEnvQueryProcessorBase&&) = delete; \
	UMassEnvQueryProcessorBase(const UMassEnvQueryProcessorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSEQS_API, UMassEnvQueryProcessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEnvQueryProcessorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEnvQueryProcessorBase) \
	MASSEQS_API virtual ~UMassEnvQueryProcessorBase();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Processors_MassEnvQueryProcessorBase_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Processors_MassEnvQueryProcessorBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Processors_MassEnvQueryProcessorBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Processors_MassEnvQueryProcessorBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEnvQueryProcessorBase;

// ********** End Class UMassEnvQueryProcessorBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Processors_MassEnvQueryProcessorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
