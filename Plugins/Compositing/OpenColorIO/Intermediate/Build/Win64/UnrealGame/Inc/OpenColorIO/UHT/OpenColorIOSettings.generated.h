// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenColorIOSettings.h"

#ifdef OPENCOLORIO_OpenColorIOSettings_generated_h
#error "OpenColorIOSettings.generated.h already included, missing '#pragma once' in OpenColorIOSettings.h"
#endif
#define OPENCOLORIO_OpenColorIOSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOpenColorIOSettings *****************************************************
struct Z_Construct_UClass_UOpenColorIOSettings_Statics;
OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOSettings_NoRegister();

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenColorIOSettings(); \
	friend struct ::Z_Construct_UClass_UOpenColorIOSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENCOLORIO_API UClass* ::Z_Construct_UClass_UOpenColorIOSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenColorIOSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenColorIO"), Z_Construct_UClass_UOpenColorIOSettings_NoRegister) \
	DECLARE_SERIALIZER(UOpenColorIOSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenColorIOSettings(UOpenColorIOSettings&&) = delete; \
	UOpenColorIOSettings(const UOpenColorIOSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPENCOLORIO_API, UOpenColorIOSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIOSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenColorIOSettings) \
	OPENCOLORIO_API virtual ~UOpenColorIOSettings();


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_17_PROLOG
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenColorIOSettings;

// ********** End Class UOpenColorIOSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
