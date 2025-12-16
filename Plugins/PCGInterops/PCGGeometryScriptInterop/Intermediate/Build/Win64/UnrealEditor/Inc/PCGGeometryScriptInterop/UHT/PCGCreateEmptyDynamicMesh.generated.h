// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCreateEmptyDynamicMesh.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGCreateEmptyDynamicMesh_generated_h
#error "PCGCreateEmptyDynamicMesh.generated.h already included, missing '#pragma once' in PCGCreateEmptyDynamicMesh.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGCreateEmptyDynamicMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreateEmptyDynamicMeshSettings ***************************************
struct Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreateEmptyDynamicMeshSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreateEmptyDynamicMeshSettings, UPCGDynamicMeshBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGCreateEmptyDynamicMeshSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreateEmptyDynamicMeshSettings)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGGEOMETRYSCRIPTINTEROP_API UPCGCreateEmptyDynamicMeshSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreateEmptyDynamicMeshSettings(UPCGCreateEmptyDynamicMeshSettings&&) = delete; \
	UPCGCreateEmptyDynamicMeshSettings(const UPCGCreateEmptyDynamicMeshSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGCreateEmptyDynamicMeshSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreateEmptyDynamicMeshSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCreateEmptyDynamicMeshSettings) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGCreateEmptyDynamicMeshSettings();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h_12_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreateEmptyDynamicMeshSettings;

// ********** End Class UPCGCreateEmptyDynamicMeshSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGCreateEmptyDynamicMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
