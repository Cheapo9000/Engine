// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorMode/Tools/PCGInteractiveToolSettings.h"

#ifdef PCGEDITOR_PCGInteractiveToolSettings_generated_h
#error "PCGInteractiveToolSettings.generated.h already included, missing '#pragma once' in PCGInteractiveToolSettings.h"
#endif
#define PCGEDITOR_PCGInteractiveToolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;

// ********** Begin Class UPCGInteractiveToolSettings **********************************************
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValidDataInstanceNamesForGraph); \
	DECLARE_FUNCTION(execGetDataInstanceNamesForGraph); \
	DECLARE_FUNCTION(execHasGeneratedPCGComponent); \
	DECLARE_FUNCTION(execHasSpawnedActor); \
	DECLARE_FUNCTION(execGraphAssetFilter);


struct Z_Construct_UClass_UPCGInteractiveToolSettings_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGInteractiveToolSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInteractiveToolSettings(); \
	friend struct ::Z_Construct_UClass_UPCGInteractiveToolSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGInteractiveToolSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGInteractiveToolSettings, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGInteractiveToolSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGInteractiveToolSettings)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGInteractiveToolSettings(UPCGInteractiveToolSettings&&) = delete; \
	UPCGInteractiveToolSettings(const UPCGInteractiveToolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGInteractiveToolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInteractiveToolSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPCGInteractiveToolSettings)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h_24_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGInteractiveToolSettings;

// ********** End Class UPCGInteractiveToolSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_Tools_PCGInteractiveToolSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
