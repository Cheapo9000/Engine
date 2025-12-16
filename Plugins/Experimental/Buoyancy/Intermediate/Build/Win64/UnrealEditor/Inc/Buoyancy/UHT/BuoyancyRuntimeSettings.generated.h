// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyRuntimeSettings.h"

#ifdef BUOYANCY_BuoyancyRuntimeSettings_generated_h
#error "BuoyancyRuntimeSettings.generated.h already included, missing '#pragma once' in BuoyancyRuntimeSettings.h"
#endif
#define BUOYANCY_BuoyancyRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBuoyancyRuntimeSettings *************************************************
struct Z_Construct_UClass_UBuoyancyRuntimeSettings_Statics;
BUOYANCY_API UClass* Z_Construct_UClass_UBuoyancyRuntimeSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuoyancyRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UBuoyancyRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BUOYANCY_API UClass* ::Z_Construct_UClass_UBuoyancyRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuoyancyRuntimeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Buoyancy"), Z_Construct_UClass_UBuoyancyRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UBuoyancyRuntimeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BUOYANCY_API UBuoyancyRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuoyancyRuntimeSettings(UBuoyancyRuntimeSettings&&) = delete; \
	UBuoyancyRuntimeSettings(const UBuoyancyRuntimeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BUOYANCY_API, UBuoyancyRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancyRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyancyRuntimeSettings) \
	BUOYANCY_API virtual ~UBuoyancyRuntimeSettings();


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuoyancyRuntimeSettings;

// ********** End Class UBuoyancyRuntimeSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
