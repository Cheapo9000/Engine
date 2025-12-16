// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaInteractiveToolsSettings.h"

#ifdef AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsSettings_generated_h
#error "AvaInteractiveToolsSettings.generated.h already included, missing '#pragma once' in AvaInteractiveToolsSettings.h"
#endif
#define AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaInteractiveToolsSettings *********************************************
struct Z_Construct_UClass_UAvaInteractiveToolsSettings_Statics;
AVALANCHEINTERACTIVETOOLS_API UClass* Z_Construct_UClass_UAvaInteractiveToolsSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaInteractiveToolsSettings(); \
	friend struct ::Z_Construct_UClass_UAvaInteractiveToolsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEINTERACTIVETOOLS_API UClass* ::Z_Construct_UClass_UAvaInteractiveToolsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaInteractiveToolsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheInteractiveTools"), Z_Construct_UClass_UAvaInteractiveToolsSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaInteractiveToolsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaInteractiveToolsSettings(UAvaInteractiveToolsSettings&&) = delete; \
	UAvaInteractiveToolsSettings(const UAvaInteractiveToolsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaInteractiveToolsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaInteractiveToolsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaInteractiveToolsSettings) \
	NO_API virtual ~UAvaInteractiveToolsSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_30_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaInteractiveToolsSettings;

// ********** End Class UAvaInteractiveToolsSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_AvaInteractiveToolsSettings_h

// ********** Begin Enum EAvaInteractiveToolsDefaultActionAlignment ********************************
#define FOREACH_ENUM_EAVAINTERACTIVETOOLSDEFAULTACTIONALIGNMENT(op) \
	op(EAvaInteractiveToolsDefaultActionAlignment::Axis) \
	op(EAvaInteractiveToolsDefaultActionAlignment::Camera) 

enum class EAvaInteractiveToolsDefaultActionAlignment : uint8;
template<> struct TIsUEnumClass<EAvaInteractiveToolsDefaultActionAlignment> { enum { Value = true }; };
template<> AVALANCHEINTERACTIVETOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaInteractiveToolsDefaultActionAlignment>();
// ********** End Enum EAvaInteractiveToolsDefaultActionAlignment **********************************

// ********** Begin Enum EAvaInteractiveToolsViewportToolbarPosition *******************************
#define FOREACH_ENUM_EAVAINTERACTIVETOOLSVIEWPORTTOOLBARPOSITION(op) \
	op(EAvaInteractiveToolsViewportToolbarPosition::None) \
	op(EAvaInteractiveToolsViewportToolbarPosition::Bottom) \
	op(EAvaInteractiveToolsViewportToolbarPosition::Top) \
	op(EAvaInteractiveToolsViewportToolbarPosition::Left) \
	op(EAvaInteractiveToolsViewportToolbarPosition::Right) 

enum class EAvaInteractiveToolsViewportToolbarPosition : uint8;
template<> struct TIsUEnumClass<EAvaInteractiveToolsViewportToolbarPosition> { enum { Value = true }; };
template<> AVALANCHEINTERACTIVETOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaInteractiveToolsViewportToolbarPosition>();
// ********** End Enum EAvaInteractiveToolsViewportToolbarPosition *********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
