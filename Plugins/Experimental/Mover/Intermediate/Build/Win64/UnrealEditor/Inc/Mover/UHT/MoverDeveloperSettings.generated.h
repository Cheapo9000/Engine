// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverDeveloperSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_MoverDeveloperSettings_generated_h
#error "MoverDeveloperSettings.generated.h already included, missing '#pragma once' in MoverDeveloperSettings.h"
#endif
#define MOVER_MoverDeveloperSettings_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverDeveloperSettings(); \
	friend struct Z_Construct_UClass_UMoverDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UMoverDeveloperSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverDeveloperSettings(UMoverDeveloperSettings&&); \
	UMoverDeveloperSettings(const UMoverDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverDeveloperSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverDeveloperSettings) \
	NO_API virtual ~UMoverDeveloperSettings();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverDeveloperSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
