// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEQSBlueprintLibrary.h"

#ifdef MASSEQS_MassEQSBlueprintLibrary_generated_h
#error "MassEQSBlueprintLibrary.generated.h already included, missing '#pragma once' in MassEQSBlueprintLibrary.h"
#endif
#define MASSEQS_MassEQSBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEnvQueryInstanceBlueprintWrapper;
struct FMassEnvQueryEntityInfoBlueprintWrapper;

// ********** Begin ScriptStruct FMassEnvQueryEntityInfoBlueprintWrapper ***************************
struct Z_Construct_UScriptStruct_FMassEnvQueryEntityInfoBlueprintWrapper_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassEnvQueryEntityInfoBlueprintWrapper_Statics; \
	MASSEQS_API static class UScriptStruct* StaticStruct();


struct FMassEnvQueryEntityInfoBlueprintWrapper;
// ********** End ScriptStruct FMassEnvQueryEntityInfoBlueprintWrapper *****************************

// ********** Begin Class UMassEQSBlueprintLibrary *************************************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_43_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetEnviromentQueryResultAsEntityInfo); \
	DECLARE_FUNCTION(execContainsEntity); \
	DECLARE_FUNCTION(execEntityComparison); \
	DECLARE_FUNCTION(execGetCurrentEntityPosition); \
	DECLARE_FUNCTION(execGetCachedEntityPosition); \
	DECLARE_FUNCTION(execEntityToString); \
	DECLARE_FUNCTION(execSendSignalToEntity);


struct Z_Construct_UClass_UMassEQSBlueprintLibrary_Statics;
MASSEQS_API UClass* Z_Construct_UClass_UMassEQSBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMassEQSBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMassEQSBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSEQS_API UClass* ::Z_Construct_UClass_UMassEQSBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEQSBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassEQS"), Z_Construct_UClass_UMassEQSBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMassEQSBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassEQSBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassEQSBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassEQSBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEQSBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEQSBlueprintLibrary(UMassEQSBlueprintLibrary&&) = delete; \
	UMassEQSBlueprintLibrary(const UMassEQSBlueprintLibrary&) = delete; \
	NO_API virtual ~UMassEQSBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_43_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEQSBlueprintLibrary;

// ********** End Class UMassEQSBlueprintLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassEQS_Public_MassEQSBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
