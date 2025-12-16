// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/Text3DProjectSettings.h"

#ifdef TEXT3D_Text3DProjectSettings_generated_h
#error "Text3DProjectSettings.generated.h already included, missing '#pragma once' in Text3DProjectSettings.h"
#endif
#define TEXT3D_Text3DProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UText3DProjectSettings ***************************************************
struct Z_Construct_UClass_UText3DProjectSettings_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DProjectSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Settings_Text3DProjectSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DProjectSettings(); \
	friend struct ::Z_Construct_UClass_UText3DProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UText3DProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Text3D");} \



#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Settings_Text3DProjectSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DProjectSettings(UText3DProjectSettings&&) = delete; \
	UText3DProjectSettings(const UText3DProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DProjectSettings) \
	TEXT3D_API virtual ~UText3DProjectSettings();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Settings_Text3DProjectSettings_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Settings_Text3DProjectSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Settings_Text3DProjectSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Settings_Text3DProjectSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DProjectSettings;

// ********** End Class UText3DProjectSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Settings_Text3DProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
