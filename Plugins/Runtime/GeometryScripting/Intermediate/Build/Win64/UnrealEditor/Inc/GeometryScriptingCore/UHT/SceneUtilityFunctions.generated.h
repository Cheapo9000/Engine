// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/SceneUtilityFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_SceneUtilityFunctions_generated_h
#error "SceneUtilityFunctions.generated.h already included, missing '#pragma once' in SceneUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_SceneUtilityFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshPool;
class UGeometryScriptDebug;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
enum class EGeometryScriptOutcomePins : uint8;
struct FGeometryScriptCopyMeshFromComponentOptions;
struct FGeometryScriptDetermineMeshOcclusionOptions;

// ********** Begin ScriptStruct FGeometryScriptCopyMeshFromComponentOptions ***********************
struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCopyMeshFromComponentOptions;
// ********** End ScriptStruct FGeometryScriptCopyMeshFromComponentOptions *************************

// ********** Begin ScriptStruct FGeometryScriptDetermineMeshOcclusionOptions **********************
struct Z_Construct_UScriptStruct_FGeometryScriptDetermineMeshOcclusionOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptDetermineMeshOcclusionOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptDetermineMeshOcclusionOptions;
// ********** End ScriptStruct FGeometryScriptDetermineMeshOcclusionOptions ************************

// ********** Begin Class UGeometryScriptLibrary_SceneUtilityFunctions *****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDetermineMeshOcclusion); \
	DECLARE_FUNCTION(execCopyCollisionMeshesFromObject); \
	DECLARE_FUNCTION(execSetComponentMaterialList); \
	DECLARE_FUNCTION(execCopyMeshFromComponent); \
	DECLARE_FUNCTION(execCreateDynamicMeshPool);


struct Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_SceneUtilityFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_SceneUtilityFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_SceneUtilityFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_SceneUtilityFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_SceneUtilityFunctions(UGeometryScriptLibrary_SceneUtilityFunctions&&) = delete; \
	UGeometryScriptLibrary_SceneUtilityFunctions(const UGeometryScriptLibrary_SceneUtilityFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_SceneUtilityFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_SceneUtilityFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_SceneUtilityFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_SceneUtilityFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_SceneUtilityFunctions;

// ********** End Class UGeometryScriptLibrary_SceneUtilityFunctions *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
