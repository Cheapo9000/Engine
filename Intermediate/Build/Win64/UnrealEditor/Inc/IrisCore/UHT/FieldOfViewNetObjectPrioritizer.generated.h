// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Prioritization/FieldOfViewNetObjectPrioritizer.h"

#ifdef IRISCORE_FieldOfViewNetObjectPrioritizer_generated_h
#error "FieldOfViewNetObjectPrioritizer.generated.h already included, missing '#pragma once' in FieldOfViewNetObjectPrioritizer.h"
#endif
#define IRISCORE_FieldOfViewNetObjectPrioritizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFieldOfViewNetObjectPrioritizerConfig ***********************************
struct Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldOfViewNetObjectPrioritizerConfig(); \
	friend struct ::Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UFieldOfViewNetObjectPrioritizerConfig, UNetObjectPrioritizerConfig, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UFieldOfViewNetObjectPrioritizerConfig_NoRegister) \
	DECLARE_SERIALIZER(UFieldOfViewNetObjectPrioritizerConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldOfViewNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFieldOfViewNetObjectPrioritizerConfig(UFieldOfViewNetObjectPrioritizerConfig&&) = delete; \
	UFieldOfViewNetObjectPrioritizerConfig(const UFieldOfViewNetObjectPrioritizerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldOfViewNetObjectPrioritizerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldOfViewNetObjectPrioritizerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldOfViewNetObjectPrioritizerConfig) \
	NO_API virtual ~UFieldOfViewNetObjectPrioritizerConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_13_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFieldOfViewNetObjectPrioritizerConfig;

// ********** End Class UFieldOfViewNetObjectPrioritizerConfig *************************************

// ********** Begin Class UFieldOfViewNetObjectPrioritizer *****************************************
struct Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldOfViewNetObjectPrioritizer(); \
	friend struct ::Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_NoRegister(); \
public: \
	DECLARE_CLASS2(UFieldOfViewNetObjectPrioritizer, ULocationBasedNetObjectPrioritizer, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UFieldOfViewNetObjectPrioritizer_NoRegister) \
	DECLARE_SERIALIZER(UFieldOfViewNetObjectPrioritizer)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UFieldOfViewNetObjectPrioritizer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFieldOfViewNetObjectPrioritizer(UFieldOfViewNetObjectPrioritizer&&) = delete; \
	UFieldOfViewNetObjectPrioritizer(const UFieldOfViewNetObjectPrioritizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UFieldOfViewNetObjectPrioritizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldOfViewNetObjectPrioritizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFieldOfViewNetObjectPrioritizer) \
	IRISCORE_API virtual ~UFieldOfViewNetObjectPrioritizer();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_74_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFieldOfViewNetObjectPrioritizer;

// ********** End Class UFieldOfViewNetObjectPrioritizer *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Prioritization_FieldOfViewNetObjectPrioritizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
