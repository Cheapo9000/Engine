// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGInputOutputSettings.h"

#ifdef PCG_PCGInputOutputSettings_generated_h
#error "PCGInputOutputSettings.generated.h already included, missing '#pragma once' in PCGInputOutputSettings.h"
#endif
#define PCG_PCGInputOutputSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGraphInputOutputSettings *********************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSupportsComposition);
#else // WITH_EDITOR
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGraphInputOutputSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGraphInputOutputSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGraphInputOutputSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGraphInputOutputSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGraphInputOutputSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGraphInputOutputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGraphInputOutputSettings(UPCGGraphInputOutputSettings&&) = delete; \
	UPCGGraphInputOutputSettings(const UPCGGraphInputOutputSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGraphInputOutputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGraphInputOutputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGraphInputOutputSettings) \
	PCG_API virtual ~UPCGGraphInputOutputSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_28_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_31_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGraphInputOutputSettings;

// ********** End Class UPCGGraphInputOutputSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGInputOutputSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
