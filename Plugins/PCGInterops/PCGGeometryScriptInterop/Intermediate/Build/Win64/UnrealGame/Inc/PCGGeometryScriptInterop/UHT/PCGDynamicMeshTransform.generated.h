// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDynamicMeshTransform.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGDynamicMeshTransform_generated_h
#error "PCGDynamicMeshTransform.generated.h already included, missing '#pragma once' in PCGDynamicMeshTransform.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGDynamicMeshTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDynamicMeshTransformSettings *****************************************
struct Z_Construct_UClass_UPCGDynamicMeshTransformSettings_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGDynamicMeshTransformSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDynamicMeshTransformSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDynamicMeshTransformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGDynamicMeshTransformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDynamicMeshTransformSettings, UPCGDynamicMeshBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGDynamicMeshTransformSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDynamicMeshTransformSettings)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGGEOMETRYSCRIPTINTEROP_API UPCGDynamicMeshTransformSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDynamicMeshTransformSettings(UPCGDynamicMeshTransformSettings&&) = delete; \
	UPCGDynamicMeshTransformSettings(const UPCGDynamicMeshTransformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGDynamicMeshTransformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDynamicMeshTransformSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDynamicMeshTransformSettings) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGDynamicMeshTransformSettings();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h_12_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDynamicMeshTransformSettings;

// ********** End Class UPCGDynamicMeshTransformSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGDynamicMeshTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
