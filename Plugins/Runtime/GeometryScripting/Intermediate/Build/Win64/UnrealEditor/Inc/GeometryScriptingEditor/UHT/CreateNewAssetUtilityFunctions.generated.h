// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/CreateNewAssetUtilityFunctions.h"

#ifdef GEOMETRYSCRIPTINGEDITOR_CreateNewAssetUtilityFunctions_generated_h
#error "CreateNewAssetUtilityFunctions.generated.h already included, missing '#pragma once' in CreateNewAssetUtilityFunctions.h"
#endif
#define GEOMETRYSCRIPTINGEDITOR_CreateNewAssetUtilityFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVolume;
class UDynamicMesh;
class UGeometryScriptDebug;
class UObject;
class USkeletalMesh;
class USkeleton;
class UStaticMesh;
class UTexture2D;
class UWorld;
enum class EGeometryScriptOutcomePins : uint8;
struct FGeometryScriptCreateNewSkeletalMeshAssetOptions;
struct FGeometryScriptCreateNewStaticMeshAssetOptions;
struct FGeometryScriptCreateNewTexture2DAssetOptions;
struct FGeometryScriptCreateNewVolumeFromMeshOptions;
struct FGeometryScriptUniqueAssetNameOptions;

// ********** Begin ScriptStruct FGeometryScriptUniqueAssetNameOptions *****************************
struct Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptUniqueAssetNameOptions_Statics; \
	GEOMETRYSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptUniqueAssetNameOptions;
// ********** End ScriptStruct FGeometryScriptUniqueAssetNameOptions *******************************

// ********** Begin ScriptStruct FGeometryScriptCreateNewVolumeFromMeshOptions *********************
struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCreateNewVolumeFromMeshOptions_Statics; \
	GEOMETRYSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCreateNewVolumeFromMeshOptions;
// ********** End ScriptStruct FGeometryScriptCreateNewVolumeFromMeshOptions ***********************

// ********** Begin ScriptStruct FGeometryScriptCreateNewStaticMeshAssetOptions ********************
struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCreateNewStaticMeshAssetOptions_Statics; \
	GEOMETRYSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCreateNewStaticMeshAssetOptions;
// ********** End ScriptStruct FGeometryScriptCreateNewStaticMeshAssetOptions **********************

// ********** Begin ScriptStruct FGeometryScriptCreateNewSkeletalMeshAssetOptions ******************
struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCreateNewSkeletalMeshAssetOptions_Statics; \
	GEOMETRYSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCreateNewSkeletalMeshAssetOptions;
// ********** End ScriptStruct FGeometryScriptCreateNewSkeletalMeshAssetOptions ********************

// ********** Begin ScriptStruct FGeometryScriptCreateNewTexture2DAssetOptions *********************
struct Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics;
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryScriptCreateNewTexture2DAssetOptions_Statics; \
	GEOMETRYSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


struct FGeometryScriptCreateNewTexture2DAssetOptions;
// ********** End ScriptStruct FGeometryScriptCreateNewTexture2DAssetOptions ***********************

// ********** Begin Class UGeometryScriptLibrary_CreateNewAssetFunctions ***************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateNewTexture2DAsset); \
	DECLARE_FUNCTION(execCreateNewSkeletalMeshAssetFromMeshLODs); \
	DECLARE_FUNCTION(execCreateNewSkeletalMeshAssetFromMesh); \
	DECLARE_FUNCTION(execCreateNewStaticMeshAssetFromMeshLODs); \
	DECLARE_FUNCTION(execCreateNewStaticMeshAssetFromMesh); \
	DECLARE_FUNCTION(execCreateNewVolumeFromMesh); \
	DECLARE_FUNCTION(execCreateNewVolumeFromMesh_WorldContext); \
	DECLARE_FUNCTION(execCreateUniqueNewAssetPathName);


struct Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics;
GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_CreateNewAssetFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGEDITOR_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_CreateNewAssetFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingEditor"), Z_Construct_UClass_UGeometryScriptLibrary_CreateNewAssetFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_CreateNewAssetFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGEDITOR_API UGeometryScriptLibrary_CreateNewAssetFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_CreateNewAssetFunctions(UGeometryScriptLibrary_CreateNewAssetFunctions&&) = delete; \
	UGeometryScriptLibrary_CreateNewAssetFunctions(const UGeometryScriptLibrary_CreateNewAssetFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGEDITOR_API, UGeometryScriptLibrary_CreateNewAssetFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_CreateNewAssetFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_CreateNewAssetFunctions) \
	GEOMETRYSCRIPTINGEDITOR_API virtual ~UGeometryScriptLibrary_CreateNewAssetFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_126_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_CreateNewAssetFunctions;

// ********** End Class UGeometryScriptLibrary_CreateNewAssetFunctions *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryScript_CreateNewAssetUtilityFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
