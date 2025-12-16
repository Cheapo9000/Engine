// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPRolesSettings.h"

#ifdef VPROLES_VPRolesSettings_generated_h
#error "VPRolesSettings.generated.h already included, missing '#pragma once' in VPRolesSettings.h"
#endif
#define VPROLES_VPRolesSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVPRolesUserSettings *****************************************************
struct Z_Construct_UClass_UVPRolesUserSettings_Statics;
VPROLES_API UClass* Z_Construct_UClass_UVPRolesUserSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPRolesUserSettings(); \
	friend struct ::Z_Construct_UClass_UVPRolesUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPROLES_API UClass* ::Z_Construct_UClass_UVPRolesUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPRolesUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPRoles"), Z_Construct_UClass_UVPRolesUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UVPRolesUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("UserVPRoles");} \



#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPRolesUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPRolesUserSettings(UVPRolesUserSettings&&) = delete; \
	UVPRolesUserSettings(const UVPRolesUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPRolesUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPRolesUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPRolesUserSettings) \
	NO_API virtual ~UVPRolesUserSettings();


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPRolesUserSettings;

// ********** End Class UVPRolesUserSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Private_VPRolesSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
