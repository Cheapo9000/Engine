// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenColorIOSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENCOLORIO_OpenColorIOSettings_generated_h
#error "OpenColorIOSettings.generated.h already included, missing '#pragma once' in OpenColorIOSettings.h"
#endif
#define OPENCOLORIO_OpenColorIOSettings_generated_h

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenColorIOSettings(); \
	friend struct Z_Construct_UClass_UOpenColorIOSettings_Statics; \
public: \
	DECLARE_CLASS(UOpenColorIOSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenColorIO"), NO_API) \
	DECLARE_SERIALIZER(UOpenColorIOSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOpenColorIOSettings(UOpenColorIOSettings&&); \
	UOpenColorIOSettings(const UOpenColorIOSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenColorIOSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIOSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenColorIOSettings) \
	NO_API virtual ~UOpenColorIOSettings();


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_15_PROLOG
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENCOLORIO_API UClass* StaticClass<class UOpenColorIOSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
