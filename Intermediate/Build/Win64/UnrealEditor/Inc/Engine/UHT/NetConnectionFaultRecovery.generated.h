// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/NetConnectionFaultRecovery.h"

#ifdef ENGINE_NetConnectionFaultRecovery_generated_h
#error "NetConnectionFaultRecovery.generated.h already included, missing '#pragma once' in NetConnectionFaultRecovery.h"
#endif
#define ENGINE_NetConnectionFaultRecovery_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetFaultConfig **********************************************************
struct Z_Construct_UClass_UNetFaultConfig_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetFaultConfig_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetFaultConfig(); \
	friend struct ::Z_Construct_UClass_UNetFaultConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetFaultConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetFaultConfig, UEscalationManagerConfig, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetFaultConfig_NoRegister) \
	DECLARE_SERIALIZER(UNetFaultConfig)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetFaultConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetFaultConfig(UNetFaultConfig&&) = delete; \
	UNetFaultConfig(const UNetFaultConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetFaultConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetFaultConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetFaultConfig) \
	NO_API virtual ~UNetFaultConfig();


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetFaultConfig;

// ********** End Class UNetFaultConfig ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_NetConnectionFaultRecovery_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
