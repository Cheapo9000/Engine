// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/DMXPixelMappingEditorSettings.h"

#ifdef DMXPIXELMAPPINGEDITOR_DMXPixelMappingEditorSettings_generated_h
#error "DMXPixelMappingEditorSettings.generated.h already included, missing '#pragma once' in DMXPixelMappingEditorSettings.h"
#endif
#define DMXPIXELMAPPINGEDITOR_DMXPixelMappingEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDMXPixelMappingHierarchySettings *********************************
struct Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXPixelMappingHierarchySettings_Statics; \
	DMXPIXELMAPPINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXPixelMappingHierarchySettings;
// ********** End ScriptStruct FDMXPixelMappingHierarchySettings ***********************************

// ********** Begin ScriptStruct FDMXPixelMappingDesignerSettings **********************************
struct Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXPixelMappingDesignerSettings_Statics; \
	DMXPIXELMAPPINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FDMXPixelMappingDesignerSettings;
// ********** End ScriptStruct FDMXPixelMappingDesignerSettings ************************************

// ********** Begin Class UDMXPixelMappingEditorSettings *******************************************
struct Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics;
DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingEditorSettings(); \
	friend struct ::Z_Construct_UClass_UDMXPixelMappingEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPIXELMAPPINGEDITOR_API UClass* ::Z_Construct_UClass_UDMXPixelMappingEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXPixelMappingEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXPixelMappingEditor"), Z_Construct_UClass_UDMXPixelMappingEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UDMXPixelMappingEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("DMXPixelMappingEditor");} \



#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXPixelMappingEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXPixelMappingEditorSettings(UDMXPixelMappingEditorSettings&&) = delete; \
	UDMXPixelMappingEditorSettings(const UDMXPixelMappingEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXPixelMappingEditorSettings) \
	NO_API virtual ~UDMXPixelMappingEditorSettings();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_77_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXPixelMappingEditorSettings;

// ********** End Class UDMXPixelMappingEditorSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_Settings_DMXPixelMappingEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
