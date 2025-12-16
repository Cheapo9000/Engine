// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSkinnedMeshSpawner.h"

#ifdef PCG_PCGSkinnedMeshSpawner_generated_h
#error "PCGSkinnedMeshSpawner.generated.h already included, missing '#pragma once' in PCGSkinnedMeshSpawner.h"
#endif
#define PCG_PCGSkinnedMeshSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGSkinnedMeshInstanceDataPackerBase;

// ********** Begin Class UPCGSkinnedMeshSpawnerSettings *******************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInstancePackerType);


struct Z_Construct_UClass_UPCGSkinnedMeshSpawnerSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSkinnedMeshSpawnerSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSkinnedMeshSpawnerSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSkinnedMeshSpawnerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSkinnedMeshSpawnerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSkinnedMeshSpawnerSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSkinnedMeshSpawnerSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSkinnedMeshSpawnerSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSkinnedMeshSpawnerSettings(UPCGSkinnedMeshSpawnerSettings&&) = delete; \
	UPCGSkinnedMeshSpawnerSettings(const UPCGSkinnedMeshSpawnerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSkinnedMeshSpawnerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSkinnedMeshSpawnerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSkinnedMeshSpawnerSettings) \
	PCG_API virtual ~UPCGSkinnedMeshSpawnerSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h_22_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSkinnedMeshSpawnerSettings;

// ********** End Class UPCGSkinnedMeshSpawnerSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSkinnedMeshSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
