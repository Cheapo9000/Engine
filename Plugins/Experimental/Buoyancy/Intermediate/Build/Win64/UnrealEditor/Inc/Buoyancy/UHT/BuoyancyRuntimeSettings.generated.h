// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyRuntimeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUOYANCY_BuoyancyRuntimeSettings_generated_h
#error "BuoyancyRuntimeSettings.generated.h already included, missing '#pragma once' in BuoyancyRuntimeSettings.h"
#endif
#define BUOYANCY_BuoyancyRuntimeSettings_generated_h

#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuoyancyRuntimeSettings(); \
	friend struct Z_Construct_UClass_UBuoyancyRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UBuoyancyRuntimeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Buoyancy"), NO_API) \
	DECLARE_SERIALIZER(UBuoyancyRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuoyancyRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBuoyancyRuntimeSettings(UBuoyancyRuntimeSettings&&); \
	UBuoyancyRuntimeSettings(const UBuoyancyRuntimeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuoyancyRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancyRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyancyRuntimeSettings) \
	NO_API virtual ~UBuoyancyRuntimeSettings();


#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUOYANCY_API UClass* StaticClass<class UBuoyancyRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Buoyancy_Source_Runtime_Public_BuoyancyRuntimeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
