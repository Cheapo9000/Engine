// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGStaticMeshToDynamicMeshElement.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGStaticMeshToDynamicMeshElement_generated_h
#error "PCGStaticMeshToDynamicMeshElement.generated.h already included, missing '#pragma once' in PCGStaticMeshToDynamicMeshElement.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGStaticMeshToDynamicMeshElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGStaticMeshToDynamicMeshSettings **************************************
struct Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGStaticMeshToDynamicMeshSettings(); \
	friend struct ::Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGStaticMeshToDynamicMeshSettings, UPCGDynamicMeshBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGStaticMeshToDynamicMeshSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGStaticMeshToDynamicMeshSettings)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGGEOMETRYSCRIPTINTEROP_API UPCGStaticMeshToDynamicMeshSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGStaticMeshToDynamicMeshSettings(UPCGStaticMeshToDynamicMeshSettings&&) = delete; \
	UPCGStaticMeshToDynamicMeshSettings(const UPCGStaticMeshToDynamicMeshSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGStaticMeshToDynamicMeshSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGStaticMeshToDynamicMeshSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGStaticMeshToDynamicMeshSettings) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGStaticMeshToDynamicMeshSettings();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h_18_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGStaticMeshToDynamicMeshSettings;

// ********** End Class UPCGStaticMeshToDynamicMeshSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGStaticMeshToDynamicMeshElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
