// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshTransformFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshTransformFunctions_generated_h
#error "MeshTransformFunctions.generated.h already included, missing '#pragma once' in MeshTransformFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshTransformFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptMeshSelection;

// ********** Begin Class UGeometryScriptLibrary_MeshTransformFunctions ****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTranslatePivotToLocation); \
	DECLARE_FUNCTION(execScaleMeshSelection); \
	DECLARE_FUNCTION(execRotateMeshSelection); \
	DECLARE_FUNCTION(execTranslateMeshSelection); \
	DECLARE_FUNCTION(execInverseTransformMeshSelection); \
	DECLARE_FUNCTION(execTransformMeshSelection); \
	DECLARE_FUNCTION(execScaleMesh); \
	DECLARE_FUNCTION(execRotateMesh); \
	DECLARE_FUNCTION(execTranslateMesh); \
	DECLARE_FUNCTION(execInverseTransformMesh); \
	DECLARE_FUNCTION(execTransformMesh);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshTransformFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshTransformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshTransformFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshTransformFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshTransformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshTransformFunctions(UGeometryScriptLibrary_MeshTransformFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshTransformFunctions(const UGeometryScriptLibrary_MeshTransformFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshTransformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshTransformFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshTransformFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshTransformFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshTransformFunctions;

// ********** End Class UGeometryScriptLibrary_MeshTransformFunctions ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshTransformFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
