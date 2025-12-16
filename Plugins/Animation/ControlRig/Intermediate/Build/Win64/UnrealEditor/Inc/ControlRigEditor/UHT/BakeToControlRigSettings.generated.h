// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BakeToControlRigSettings.h"

#ifdef CONTROLRIGEDITOR_BakeToControlRigSettings_generated_h
#error "BakeToControlRigSettings.generated.h already included, missing '#pragma once' in BakeToControlRigSettings.h"
#endif
#define CONTROLRIGEDITOR_BakeToControlRigSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBakeToControlRigSettings ************************************************
struct Z_Construct_UClass_UBakeToControlRigSettings_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UBakeToControlRigSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBakeToControlRigSettings(); \
	friend struct ::Z_Construct_UClass_UBakeToControlRigSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UBakeToControlRigSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBakeToControlRigSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UBakeToControlRigSettings_NoRegister) \
	DECLARE_SERIALIZER(UBakeToControlRigSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBakeToControlRigSettings(UBakeToControlRigSettings&&) = delete; \
	UBakeToControlRigSettings(const UBakeToControlRigSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBakeToControlRigSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBakeToControlRigSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBakeToControlRigSettings) \
	NO_API virtual ~UBakeToControlRigSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_10_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBakeToControlRigSettings;

// ********** End Class UBakeToControlRigSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
