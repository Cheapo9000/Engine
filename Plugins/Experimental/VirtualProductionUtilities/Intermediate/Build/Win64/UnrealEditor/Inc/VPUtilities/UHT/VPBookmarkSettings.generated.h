// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBookmarkSettings.h"

#ifdef VPUTILITIES_VPBookmarkSettings_generated_h
#error "VPBookmarkSettings.generated.h already included, missing '#pragma once' in VPBookmarkSettings.h"
#endif
#define VPUTILITIES_VPBookmarkSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVPBookmarkSettings ******************************************************
struct Z_Construct_UClass_UVPBookmarkSettings_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_UVPBookmarkSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBookmarkSettings(); \
	friend struct ::Z_Construct_UClass_UVPBookmarkSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_UVPBookmarkSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPBookmarkSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_UVPBookmarkSettings_NoRegister) \
	DECLARE_SERIALIZER(UVPBookmarkSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("VirtualProductionUtilities");} \



#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPBookmarkSettings(UVPBookmarkSettings&&) = delete; \
	UVPBookmarkSettings(const UVPBookmarkSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkSettings) \
	NO_API virtual ~UVPBookmarkSettings();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPBookmarkSettings;

// ********** End Class UVPBookmarkSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
