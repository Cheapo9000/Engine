// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h"

#ifdef IRISCORE_SphereNetObjectPrioritizer_generated_h
#error "SphereNetObjectPrioritizer.generated.h already included, missing '#pragma once' in SphereNetObjectPrioritizer.h"
#endif
#define IRISCORE_SphereNetObjectPrioritizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USphereNetObjectPrioritizerConfig ****************************************
struct Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_USphereNetObjectPrioritizerConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSphereNetObjectPrioritizerConfig(); \
	friend struct ::Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_USphereNetObjectPrioritizerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(USphereNetObjectPrioritizerConfig, UNetObjectPrioritizerConfig, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_USphereNetObjectPrioritizerConfig_NoRegister) \
	DECLARE_SERIALIZER(USphereNetObjectPrioritizerConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API USphereNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USphereNetObjectPrioritizerConfig(USphereNetObjectPrioritizerConfig&&) = delete; \
	USphereNetObjectPrioritizerConfig(const USphereNetObjectPrioritizerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, USphereNetObjectPrioritizerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereNetObjectPrioritizerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphereNetObjectPrioritizerConfig) \
	IRISCORE_API virtual ~USphereNetObjectPrioritizerConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_13_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USphereNetObjectPrioritizerConfig;

// ********** End Class USphereNetObjectPrioritizerConfig ******************************************

// ********** Begin Class USphereNetObjectPrioritizer **********************************************
struct Z_Construct_UClass_USphereNetObjectPrioritizer_Statics;
IRISCORE_API UClass* Z_Construct_UClass_USphereNetObjectPrioritizer_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSphereNetObjectPrioritizer(); \
	friend struct ::Z_Construct_UClass_USphereNetObjectPrioritizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_USphereNetObjectPrioritizer_NoRegister(); \
public: \
	DECLARE_CLASS2(USphereNetObjectPrioritizer, ULocationBasedNetObjectPrioritizer, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_USphereNetObjectPrioritizer_NoRegister) \
	DECLARE_SERIALIZER(USphereNetObjectPrioritizer)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API USphereNetObjectPrioritizer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USphereNetObjectPrioritizer(USphereNetObjectPrioritizer&&) = delete; \
	USphereNetObjectPrioritizer(const USphereNetObjectPrioritizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, USphereNetObjectPrioritizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereNetObjectPrioritizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USphereNetObjectPrioritizer) \
	IRISCORE_API virtual ~USphereNetObjectPrioritizer();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_38_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USphereNetObjectPrioritizer;

// ********** End Class USphereNetObjectPrioritizer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
