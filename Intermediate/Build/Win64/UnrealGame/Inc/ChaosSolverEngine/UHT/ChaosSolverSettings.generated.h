// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosSolverSettings.h"

#ifdef CHAOSSOLVERENGINE_ChaosSolverSettings_generated_h
#error "ChaosSolverSettings.generated.h already included, missing '#pragma once' in ChaosSolverSettings.h"
#endif
#define CHAOSSOLVERENGINE_ChaosSolverSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChaosSolverSettings *****************************************************
struct Z_Construct_UClass_UChaosSolverSettings_Statics;
CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolverSettings_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosSolverSettings(); \
	friend struct ::Z_Construct_UClass_UChaosSolverSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSSOLVERENGINE_API UClass* ::Z_Construct_UClass_UChaosSolverSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosSolverSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), Z_Construct_UClass_UChaosSolverSettings_NoRegister) \
	DECLARE_SERIALIZER(UChaosSolverSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosSolverSettings(UChaosSolverSettings&&) = delete; \
	UChaosSolverSettings(const UChaosSolverSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSSOLVERENGINE_API, UChaosSolverSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolverSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosSolverSettings) \
	CHAOSSOLVERENGINE_API virtual ~UChaosSolverSettings();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_13_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosSolverSettings;

// ********** End Class UChaosSolverSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
