// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/MassEnvQueryGenerator.h"

#ifdef MASSEQS_MassEnvQueryGenerator_generated_h
#error "MassEnvQueryGenerator.generated.h already included, missing '#pragma once' in MassEnvQueryGenerator.h"
#endif
#define MASSEQS_MassEnvQueryGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEnvQueryGenerator ***************************************************
struct Z_Construct_UClass_UMassEnvQueryGenerator_Statics;
MASSEQS_API UClass* Z_Construct_UClass_UMassEnvQueryGenerator_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Generators_MassEnvQueryGenerator_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMassEnvQueryGenerator(); \
	friend struct ::Z_Construct_UClass_UMassEnvQueryGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSEQS_API UClass* ::Z_Construct_UClass_UMassEnvQueryGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEnvQueryGenerator, UEnvQueryGenerator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MassEQS"), Z_Construct_UClass_UMassEnvQueryGenerator_NoRegister) \
	DECLARE_SERIALIZER(UMassEnvQueryGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<UMassEnvQueryGenerator*>(this); }


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Generators_MassEnvQueryGenerator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSEQS_API UMassEnvQueryGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEnvQueryGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSEQS_API, UMassEnvQueryGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEnvQueryGenerator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEnvQueryGenerator(UMassEnvQueryGenerator&&) = delete; \
	UMassEnvQueryGenerator(const UMassEnvQueryGenerator&) = delete; \
	MASSEQS_API virtual ~UMassEnvQueryGenerator();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Generators_MassEnvQueryGenerator_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Generators_MassEnvQueryGenerator_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Generators_MassEnvQueryGenerator_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Generators_MassEnvQueryGenerator_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEnvQueryGenerator;

// ********** End Class UMassEnvQueryGenerator *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_Generators_MassEnvQueryGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
