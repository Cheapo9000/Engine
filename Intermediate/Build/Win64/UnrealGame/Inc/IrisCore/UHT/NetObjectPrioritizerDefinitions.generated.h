// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizerDefinitions.h"

#ifdef IRISCORE_NetObjectPrioritizerDefinitions_generated_h
#error "NetObjectPrioritizerDefinitions.generated.h already included, missing '#pragma once' in NetObjectPrioritizerDefinitions.h"
#endif
#define IRISCORE_NetObjectPrioritizerDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetObjectPrioritizerDefinition ***********************************
struct Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetObjectPrioritizerDefinition_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FNetObjectPrioritizerDefinition;
// ********** End ScriptStruct FNetObjectPrioritizerDefinition *************************************

// ********** Begin Class UNetObjectPrioritizerDefinitions *****************************************
struct Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectPrioritizerDefinitions(); \
	friend struct ::Z_Construct_UClass_UNetObjectPrioritizerDefinitions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectPrioritizerDefinitions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectPrioritizerDefinitions_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectPrioritizerDefinitions)


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetObjectPrioritizerDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectPrioritizerDefinitions(UNetObjectPrioritizerDefinitions&&) = delete; \
	UNetObjectPrioritizerDefinitions(const UNetObjectPrioritizerDefinitions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectPrioritizerDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectPrioritizerDefinitions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectPrioritizerDefinitions) \
	NO_API virtual ~UNetObjectPrioritizerDefinitions();


#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_42_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectPrioritizerDefinitions;

// ********** End Class UNetObjectPrioritizerDefinitions *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Private_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizerDefinitions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
