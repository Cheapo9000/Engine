// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeFbxSettings.h"

#ifdef INTERCHANGEFBXPARSER_InterchangeFbxSettings_generated_h
#error "InterchangeFbxSettings.generated.h already included, missing '#pragma once' in InterchangeFbxSettings.h"
#endif
#define INTERCHANGEFBXPARSER_InterchangeFbxSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeFbxSettings **************************************************
struct Z_Construct_UClass_UInterchangeFbxSettings_Statics;
INTERCHANGEFBXPARSER_API UClass* Z_Construct_UClass_UInterchangeFbxSettings_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_Fbx_Public_InterchangeFbxSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFbxSettings(); \
	friend struct ::Z_Construct_UClass_UInterchangeFbxSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFBXPARSER_API UClass* ::Z_Construct_UClass_UInterchangeFbxSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeFbxSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InterchangeFbxParser"), Z_Construct_UClass_UInterchangeFbxSettings_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeFbxSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Interchange");} \



#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_Fbx_Public_InterchangeFbxSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeFbxSettings(UInterchangeFbxSettings&&) = delete; \
	UInterchangeFbxSettings(const UInterchangeFbxSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFBXPARSER_API, UInterchangeFbxSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFbxSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeFbxSettings) \
	INTERCHANGEFBXPARSER_API virtual ~UInterchangeFbxSettings();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_Fbx_Public_InterchangeFbxSettings_h_17_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_Fbx_Public_InterchangeFbxSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_Fbx_Public_InterchangeFbxSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_Fbx_Public_InterchangeFbxSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeFbxSettings;

// ********** End Class UInterchangeFbxSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_Fbx_Public_InterchangeFbxSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
