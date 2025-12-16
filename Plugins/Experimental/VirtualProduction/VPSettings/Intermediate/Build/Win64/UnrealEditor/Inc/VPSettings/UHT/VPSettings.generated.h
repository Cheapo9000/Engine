// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPSettings.h"

#ifdef VPSETTINGS_VPSettings_generated_h
#error "VPSettings.generated.h already included, missing '#pragma once' in VPSettings.h"
#endif
#define VPSETTINGS_VPSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVPSettings;

// ********** Begin Class UVPSettings **************************************************************
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVPSettings);


struct Z_Construct_UClass_UVPSettings_Statics;
VPSETTINGS_API UClass* Z_Construct_UClass_UVPSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPSettings(); \
	friend struct ::Z_Construct_UClass_UVPSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPSETTINGS_API UClass* ::Z_Construct_UClass_UVPSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPSettings"), Z_Construct_UClass_UVPSettings_NoRegister) \
	DECLARE_SERIALIZER(UVPSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPSettings(UVPSettings&&) = delete; \
	UVPSettings(const UVPSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPSettings) \
	NO_API virtual ~UVPSettings();


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPSettings;

// ********** End Class UVPSettings ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
