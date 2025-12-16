// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSpawnDynamicMesh.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGSpawnDynamicMesh_generated_h
#error "PCGSpawnDynamicMesh.generated.h already included, missing '#pragma once' in PCGSpawnDynamicMesh.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGSpawnDynamicMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSpawnDynamicMeshSettings *********************************************
struct Z_Construct_UClass_UPCGSpawnDynamicMeshSettings_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGSpawnDynamicMeshSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpawnDynamicMeshSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSpawnDynamicMeshSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGSpawnDynamicMeshSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSpawnDynamicMeshSettings, UPCGDynamicMeshBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGSpawnDynamicMeshSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSpawnDynamicMeshSettings)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGGEOMETRYSCRIPTINTEROP_API UPCGSpawnDynamicMeshSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSpawnDynamicMeshSettings(UPCGSpawnDynamicMeshSettings&&) = delete; \
	UPCGSpawnDynamicMeshSettings(const UPCGSpawnDynamicMeshSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGSpawnDynamicMeshSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpawnDynamicMeshSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpawnDynamicMeshSettings) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGSpawnDynamicMeshSettings();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h_13_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSpawnDynamicMeshSettings;

// ********** End Class UPCGSpawnDynamicMeshSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSpawnDynamicMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
