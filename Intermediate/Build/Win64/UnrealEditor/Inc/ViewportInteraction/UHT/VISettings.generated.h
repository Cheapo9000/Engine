// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VISettings.h"

#ifdef VIEWPORTINTERACTION_VISettings_generated_h
#error "VISettings.generated.h already included, missing '#pragma once' in VISettings.h"
#endif
#define VIEWPORTINTERACTION_VISettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVISettings **************************************************************
struct Z_Construct_UClass_UVISettings_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UVISettings_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVISettings(); \
	friend struct ::Z_Construct_UClass_UVISettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UVISettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVISettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UVISettings_NoRegister) \
	DECLARE_SERIALIZER(UVISettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVISettings(UVISettings&&) = delete; \
	UVISettings(const UVISettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UVISettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVISettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVISettings) \
	VIEWPORTINTERACTION_API virtual ~UVISettings();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_13_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVISettings;

// ********** End Class UVISettings ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
