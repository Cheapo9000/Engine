// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGEngineSettings.h"

#ifdef PCG_PCGEngineSettings_generated_h
#error "PCGEngineSettings.generated.h already included, missing '#pragma once' in PCGEngineSettings.h"
#endif
#define PCG_PCGEngineSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEngineSettings *******************************************************
struct Z_Construct_UClass_UPCGEngineSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGEngineSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEngineSettings(); \
	friend struct ::Z_Construct_UClass_UPCGEngineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGEngineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEngineSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGEngineSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGEngineSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGEngineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEngineSettings(UPCGEngineSettings&&) = delete; \
	UPCGEngineSettings(const UPCGEngineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGEngineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEngineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEngineSettings) \
	PCG_API virtual ~UPCGEngineSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEngineSettings;

// ********** End Class UPCGEngineSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEngineSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
