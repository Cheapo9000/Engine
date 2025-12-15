// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"

#ifdef IRISCORE_NetObjectPrioritizer_generated_h
#error "NetObjectPrioritizer.generated.h already included, missing '#pragma once' in NetObjectPrioritizer.h"
#endif
#define IRISCORE_NetObjectPrioritizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetObjectPrioritizerConfig **********************************************
struct Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectPrioritizerConfig(); \
	friend struct ::Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectPrioritizerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectPrioritizerConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectPrioritizerConfig(UNetObjectPrioritizerConfig&&) = delete; \
	UNetObjectPrioritizerConfig(const UNetObjectPrioritizerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectPrioritizerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectPrioritizerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectPrioritizerConfig) \
	IRISCORE_API virtual ~UNetObjectPrioritizerConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_90_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectPrioritizerConfig;

// ********** End Class UNetObjectPrioritizerConfig ************************************************

// ********** Begin Class UNetObjectPrioritizer ****************************************************
struct Z_Construct_UClass_UNetObjectPrioritizer_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectPrioritizer(); \
	friend struct ::Z_Construct_UClass_UNetObjectPrioritizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectPrioritizer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectPrioritizer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectPrioritizer_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectPrioritizer)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_159_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectPrioritizer(UNetObjectPrioritizer&&) = delete; \
	UNetObjectPrioritizer(const UNetObjectPrioritizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectPrioritizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectPrioritizer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetObjectPrioritizer) \
	NO_API virtual ~UNetObjectPrioritizer();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_156_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectPrioritizer;

// ********** End Class UNetObjectPrioritizer ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
