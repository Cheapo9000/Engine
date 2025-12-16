// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGStaticMeshSpawner.h"

#ifdef PCG_PCGStaticMeshSpawner_generated_h
#error "PCGStaticMeshSpawner.generated.h already included, missing '#pragma once' in PCGStaticMeshSpawner.h"
#endif
#define PCG_PCGStaticMeshSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGInstanceDataPackerBase;
class UPCGMeshSelectorBase;

// ********** Begin Class UPCGStaticMeshSpawnerSettings ********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInstancePackerType); \
	DECLARE_FUNCTION(execSetMeshSelectorType);


struct Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGStaticMeshSpawnerSettings(); \
	friend struct ::Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGStaticMeshSpawnerSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGStaticMeshSpawnerSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGStaticMeshSpawnerSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGStaticMeshSpawnerSettings(UPCGStaticMeshSpawnerSettings&&) = delete; \
	UPCGStaticMeshSpawnerSettings(const UPCGStaticMeshSpawnerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGStaticMeshSpawnerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGStaticMeshSpawnerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGStaticMeshSpawnerSettings) \
	PCG_API virtual ~UPCGStaticMeshSpawnerSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_21_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGStaticMeshSpawnerSettings;

// ********** End Class UPCGStaticMeshSpawnerSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGStaticMeshSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
