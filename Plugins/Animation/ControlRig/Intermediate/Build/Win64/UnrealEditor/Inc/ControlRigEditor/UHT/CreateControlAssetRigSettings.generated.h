// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/CreateControlAssetRigSettings.h"

#ifdef CONTROLRIGEDITOR_CreateControlAssetRigSettings_generated_h
#error "CreateControlAssetRigSettings.generated.h already included, missing '#pragma once' in CreateControlAssetRigSettings.h"
#endif
#define CONTROLRIGEDITOR_CreateControlAssetRigSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCreateControlPoseAssetRigSettings ***************************************
struct Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UCreateControlPoseAssetRigSettings_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateControlPoseAssetRigSettings(); \
	friend struct ::Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UCreateControlPoseAssetRigSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCreateControlPoseAssetRigSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UCreateControlPoseAssetRigSettings_NoRegister) \
	DECLARE_SERIALIZER(UCreateControlPoseAssetRigSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCreateControlPoseAssetRigSettings(UCreateControlPoseAssetRigSettings&&) = delete; \
	UCreateControlPoseAssetRigSettings(const UCreateControlPoseAssetRigSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateControlPoseAssetRigSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateControlPoseAssetRigSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateControlPoseAssetRigSettings) \
	NO_API virtual ~UCreateControlPoseAssetRigSettings();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_14_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCreateControlPoseAssetRigSettings;

// ********** End Class UCreateControlPoseAssetRigSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
