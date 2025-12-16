// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Resources/PCGDynamicMeshManagedComponent.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGDynamicMeshManagedComponent_generated_h
#error "PCGDynamicMeshManagedComponent.generated.h already included, missing '#pragma once' in PCGDynamicMeshManagedComponent.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGDynamicMeshManagedComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDynamicMeshManagedComponent ******************************************
struct Z_Construct_UClass_UPCGDynamicMeshManagedComponent_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGDynamicMeshManagedComponent_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDynamicMeshManagedComponent(); \
	friend struct ::Z_Construct_UClass_UPCGDynamicMeshManagedComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGDynamicMeshManagedComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDynamicMeshManagedComponent, UPCGManagedComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGDynamicMeshManagedComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGDynamicMeshManagedComponent)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGGEOMETRYSCRIPTINTEROP_API UPCGDynamicMeshManagedComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDynamicMeshManagedComponent(UPCGDynamicMeshManagedComponent&&) = delete; \
	UPCGDynamicMeshManagedComponent(const UPCGDynamicMeshManagedComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGDynamicMeshManagedComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDynamicMeshManagedComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDynamicMeshManagedComponent) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGDynamicMeshManagedComponent();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h_17_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDynamicMeshManagedComponent;

// ********** End Class UPCGDynamicMeshManagedComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Resources_PCGDynamicMeshManagedComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
