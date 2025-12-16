// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSaveDynamicMeshToAsset.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGSaveDynamicMeshToAsset_generated_h
#error "PCGSaveDynamicMeshToAsset.generated.h already included, missing '#pragma once' in PCGSaveDynamicMeshToAsset.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGSaveDynamicMeshToAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSaveDynamicMeshToAssetSettings ***************************************
struct Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSaveDynamicMeshToAssetSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSaveDynamicMeshToAssetSettings, UPCGDynamicMeshBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGSaveDynamicMeshToAssetSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSaveDynamicMeshToAssetSettings)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGGEOMETRYSCRIPTINTEROP_API UPCGSaveDynamicMeshToAssetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSaveDynamicMeshToAssetSettings(UPCGSaveDynamicMeshToAssetSettings&&) = delete; \
	UPCGSaveDynamicMeshToAssetSettings(const UPCGSaveDynamicMeshToAssetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGSaveDynamicMeshToAssetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSaveDynamicMeshToAssetSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSaveDynamicMeshToAssetSettings) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGSaveDynamicMeshToAssetSettings();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h_15_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSaveDynamicMeshToAssetSettings;

// ********** End Class UPCGSaveDynamicMeshToAssetSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGSaveDynamicMeshToAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
