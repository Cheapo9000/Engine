// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h"

#ifdef IRISCORE_NetObjectFilterDefinitions_generated_h
#error "NetObjectFilterDefinitions.generated.h already included, missing '#pragma once' in NetObjectFilterDefinitions.h"
#endif
#define IRISCORE_NetObjectFilterDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetObjectFilterDefinition ****************************************
struct Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FNetObjectFilterDefinition;
// ********** End ScriptStruct FNetObjectFilterDefinition ******************************************

// ********** Begin Class UNetObjectFilterDefinitions **********************************************
struct Z_Construct_UClass_UNetObjectFilterDefinitions_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectFilterDefinitions(); \
	friend struct ::Z_Construct_UClass_UNetObjectFilterDefinitions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectFilterDefinitions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectFilterDefinitions)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetObjectFilterDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectFilterDefinitions(UNetObjectFilterDefinitions&&) = delete; \
	UNetObjectFilterDefinitions(const UNetObjectFilterDefinitions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectFilterDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectFilterDefinitions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectFilterDefinitions) \
	NO_API virtual ~UNetObjectFilterDefinitions();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_35_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectFilterDefinitions;

// ********** End Class UNetObjectFilterDefinitions ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
