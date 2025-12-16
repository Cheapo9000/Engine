// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGeometryBlueprintElement.h"

#ifdef PCGGEOMETRYSCRIPTINTEROP_PCGGeometryBlueprintElement_generated_h
#error "PCGGeometryBlueprintElement.generated.h already included, missing '#pragma once' in PCGGeometryBlueprintElement.h"
#endif
#define PCGGEOMETRYSCRIPTINTEROP_PCGGeometryBlueprintElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UPCGDynamicMeshData;
struct FPCGTaggedData;

// ********** Begin Class UPCGGeometryBlueprintElement *********************************************
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyOrStealInputData);


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGGeometryBlueprintElement_Statics;
PCGGEOMETRYSCRIPTINTEROP_API UClass* Z_Construct_UClass_UPCGGeometryBlueprintElement_NoRegister();

#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGeometryBlueprintElement(); \
	friend struct ::Z_Construct_UClass_UPCGGeometryBlueprintElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGGEOMETRYSCRIPTINTEROP_API UClass* ::Z_Construct_UClass_UPCGGeometryBlueprintElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGeometryBlueprintElement, UPCGBlueprintBaseElement, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGGeometryScriptInterop"), Z_Construct_UClass_UPCGGeometryBlueprintElement_NoRegister) \
	DECLARE_SERIALIZER(UPCGGeometryBlueprintElement)


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGeometryBlueprintElement(UPCGGeometryBlueprintElement&&) = delete; \
	UPCGGeometryBlueprintElement(const UPCGGeometryBlueprintElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGGEOMETRYSCRIPTINTEROP_API, UPCGGeometryBlueprintElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGeometryBlueprintElement); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPCGGeometryBlueprintElement) \
	PCGGEOMETRYSCRIPTINTEROP_API virtual ~UPCGGeometryBlueprintElement();


#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_18_PROLOG
#define FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGeometryBlueprintElement;

// ********** End Class UPCGGeometryBlueprintElement ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCGInterops_PCGGeometryScriptInterop_Source_PCGGeometryScriptInterop_Public_Elements_PCGGeometryBlueprintElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
