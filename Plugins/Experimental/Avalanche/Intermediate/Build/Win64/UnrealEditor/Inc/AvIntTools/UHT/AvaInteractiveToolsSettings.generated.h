// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaInteractiveToolsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsSettings_generated_h
#error "AvaInteractiveToolsSettings.generated.h already included, missing '#pragma once' in AvaInteractiveToolsSettings.h"
#endif
#define AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsSettings_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaInteractiveToolsSettings(); \
	friend struct Z_Construct_UClass_UAvaInteractiveToolsSettings_Statics; \
public: \
	DECLARE_CLASS(UAvaInteractiveToolsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheInteractiveTools"), NO_API) \
	DECLARE_SERIALIZER(UAvaInteractiveToolsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaInteractiveToolsSettings(UAvaInteractiveToolsSettings&&); \
	UAvaInteractiveToolsSettings(const UAvaInteractiveToolsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaInteractiveToolsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaInteractiveToolsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaInteractiveToolsSettings) \
	NO_API virtual ~UAvaInteractiveToolsSettings();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEINTERACTIVETOOLS_API UClass* StaticClass<class UAvaInteractiveToolsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h


#define FOREACH_ENUM_EAVAINTERACTIVETOOLSDEFAULTACTIONALIGNMENT(op) \
	op(EAvaInteractiveToolsDefaultActionAlignment::Axis) \
	op(EAvaInteractiveToolsDefaultActionAlignment::Camera) 

enum class EAvaInteractiveToolsDefaultActionAlignment;
template<> struct TIsUEnumClass<EAvaInteractiveToolsDefaultActionAlignment> { enum { Value = true }; };
template<> AVALANCHEINTERACTIVETOOLS_API UEnum* StaticEnum<EAvaInteractiveToolsDefaultActionAlignment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
