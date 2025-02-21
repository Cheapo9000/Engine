// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaOutlinerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEOUTLINER_AvaOutlinerSettings_generated_h
#error "AvaOutlinerSettings.generated.h already included, missing '#pragma once' in AvaOutlinerSettings.h"
#endif
#define AVALANCHEOUTLINER_AvaOutlinerSettings_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Private_AvaOutlinerSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaOutlinerSettings(); \
	friend struct Z_Construct_UClass_UAvaOutlinerSettings_Statics; \
public: \
	DECLARE_CLASS(UAvaOutlinerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheOutliner"), NO_API) \
	DECLARE_SERIALIZER(UAvaOutlinerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Private_AvaOutlinerSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaOutlinerSettings(UAvaOutlinerSettings&&); \
	UAvaOutlinerSettings(const UAvaOutlinerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaOutlinerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaOutlinerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaOutlinerSettings) \
	NO_API virtual ~UAvaOutlinerSettings();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Private_AvaOutlinerSettings_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Private_AvaOutlinerSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Private_AvaOutlinerSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Private_AvaOutlinerSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEOUTLINER_API UClass* StaticClass<class UAvaOutlinerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheOutliner_Private_AvaOutlinerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
