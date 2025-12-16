// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSmartObjectSettings.h"

#ifdef MASSSMARTOBJECTS_MassSmartObjectSettings_generated_h
#error "MassSmartObjectSettings.generated.h already included, missing '#pragma once' in MassSmartObjectSettings.h"
#endif
#define MASSSMARTOBJECTS_MassSmartObjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassSmartObjectSettings *************************************************
struct Z_Construct_UClass_UMassSmartObjectSettings_Statics;
MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSmartObjectSettings(); \
	friend struct ::Z_Construct_UClass_UMassSmartObjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSSMARTOBJECTS_API UClass* ::Z_Construct_UClass_UMassSmartObjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassSmartObjectSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassSmartObjects"), Z_Construct_UClass_UMassSmartObjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassSmartObjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSSMARTOBJECTS_API UMassSmartObjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassSmartObjectSettings(UMassSmartObjectSettings&&) = delete; \
	UMassSmartObjectSettings(const UMassSmartObjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSSMARTOBJECTS_API, UMassSmartObjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSmartObjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSmartObjectSettings) \
	MASSSMARTOBJECTS_API virtual ~UMassSmartObjectSettings();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassSmartObjectSettings;

// ********** End Class UMassSmartObjectSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
