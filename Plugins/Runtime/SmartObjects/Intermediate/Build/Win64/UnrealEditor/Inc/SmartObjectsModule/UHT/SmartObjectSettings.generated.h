// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectSettings.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectSettings_generated_h
#error "SmartObjectSettings.generated.h already included, missing '#pragma once' in SmartObjectSettings.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmartObjectSettings *****************************************************
struct Z_Construct_UClass_USmartObjectSettings_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectSettings(); \
	friend struct ::Z_Construct_UClass_USmartObjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectSettings_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("SmartObjects");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SMARTOBJECTSMODULE_API USmartObjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectSettings(USmartObjectSettings&&) = delete; \
	USmartObjectSettings(const USmartObjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectSettings) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectSettings();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectSettings;

// ********** End Class USmartObjectSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
