// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartitionBuilder/PCGBuilderSettings.h"

#ifdef PCGEDITOR_PCGBuilderSettings_generated_h
#error "PCGBuilderSettings.generated.h already included, missing '#pragma once' in PCGBuilderSettings.h"
#endif
#define PCGEDITOR_PCGBuilderSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGBuilderSettings ******************************************************
struct Z_Construct_UClass_UPCGBuilderSettings_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGBuilderSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGBuilderSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBuilderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBuilderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGBuilderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBuilderSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGBuilderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBuilderSettings)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGBuilderSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBuilderSettings(UPCGBuilderSettings&&) = delete; \
	UPCGBuilderSettings(const UPCGBuilderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGBuilderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBuilderSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGBuilderSettings) \
	NO_API virtual ~UPCGBuilderSettings();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGBuilderSettings_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGBuilderSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGBuilderSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGBuilderSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBuilderSettings;

// ********** End Class UPCGBuilderSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_WorldPartitionBuilder_PCGBuilderSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
