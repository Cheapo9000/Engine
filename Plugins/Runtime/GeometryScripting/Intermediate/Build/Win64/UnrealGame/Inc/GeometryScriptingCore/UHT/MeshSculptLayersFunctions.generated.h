// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSculptLayersFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshSculptLayersFunctions_generated_h
#error "MeshSculptLayersFunctions.generated.h already included, missing '#pragma once' in MeshSculptLayersFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSculptLayersFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptSculptLayerUpdateOptions;

// ********** Begin ScriptStruct FGeometryScriptSculptLayerUpdateOptions ***************************
struct Z_Construct_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptSculptLayerUpdateOptions_Statics; \
	GEOMETRYSCRIPTINGCORE_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptSculptLayerUpdateOptions;
// ********** End ScriptStruct FGeometryScriptSculptLayerUpdateOptions *****************************

// ********** Begin Class UGeometryScriptLibrary_MeshSculptLayersFunctions *************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMergeSculptLayers); \
	DECLARE_FUNCTION(execDiscardSculptLayers); \
	DECLARE_FUNCTION(execGetActiveSculptLayer); \
	DECLARE_FUNCTION(execGetNumSculptLayers); \
	DECLARE_FUNCTION(execGetSculptLayerWeightsArray); \
	DECLARE_FUNCTION(execSetSculptLayerWeightsArray); \
	DECLARE_FUNCTION(execSetSculptLayerWeight); \
	DECLARE_FUNCTION(execSetActiveSculptLayer); \
	DECLARE_FUNCTION(execEnableSculptLayers);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSculptLayersFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshSculptLayersFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshSculptLayersFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSculptLayersFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshSculptLayersFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshSculptLayersFunctions(UGeometryScriptLibrary_MeshSculptLayersFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshSculptLayersFunctions(const UGeometryScriptLibrary_MeshSculptLayersFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshSculptLayersFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSculptLayersFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSculptLayersFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshSculptLayersFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshSculptLayersFunctions;

// ********** End Class UGeometryScriptLibrary_MeshSculptLayersFunctions ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSculptLayersFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
