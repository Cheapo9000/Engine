// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorStaticMeshLibrary.h"

#ifdef EDITORSCRIPTINGUTILITIES_EditorStaticMeshLibrary_generated_h
#error "EditorStaticMeshLibrary.generated.h already included, missing '#pragma once' in EditorStaticMeshLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorStaticMeshLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UStaticMeshComponent;
enum class EScriptCollisionShapeType : uint8;
struct FMeshBuildSettings;
struct FMeshReductionSettings;
struct FStaticMeshReductionOptions;

// ********** Begin ScriptStruct FEditorScriptingMeshReductionSettings_Deprecated ******************
struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics;
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditorScriptingMeshReductionSettings_Deprecated_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


struct FEditorScriptingMeshReductionSettings_Deprecated;
// ********** End ScriptStruct FEditorScriptingMeshReductionSettings_Deprecated ********************

// ********** Begin ScriptStruct FEditorScriptingMeshReductionOptions_Deprecated *******************
struct Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics;
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditorScriptingMeshReductionOptions_Deprecated_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


struct FEditorScriptingMeshReductionOptions_Deprecated;
// ********** End ScriptStruct FEditorScriptingMeshReductionOptions_Deprecated *********************

// ********** Begin Class UDEPRECATED_EditorStaticMeshLibrary **************************************
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddSimpleCollisions); \
	DECLARE_FUNCTION(execAddSimpleCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetLods); \
	DECLARE_FUNCTION(execSetLodsWithNotification); \
	DECLARE_FUNCTION(execGenerateBoxUVChannel); \
	DECLARE_FUNCTION(execGenerateCylindricalUVChannel); \
	DECLARE_FUNCTION(execGeneratePlanarUVChannel); \
	DECLARE_FUNCTION(execRemoveUVChannel); \
	DECLARE_FUNCTION(execInsertUVChannel); \
	DECLARE_FUNCTION(execAddUVChannel); \
	DECLARE_FUNCTION(execGetNumUVChannels); \
	DECLARE_FUNCTION(execSetAllowCPUAccess); \
	DECLARE_FUNCTION(execGetNumberMaterials); \
	DECLARE_FUNCTION(execGetNumberVerts); \
	DECLARE_FUNCTION(execSetGenerateLightmapUVs); \
	DECLARE_FUNCTION(execHasInstanceVertexColors); \
	DECLARE_FUNCTION(execHasVertexColors); \
	DECLARE_FUNCTION(execEnableSectionCastShadow); \
	DECLARE_FUNCTION(execIsSectionCollisionEnabled); \
	DECLARE_FUNCTION(execEnableSectionCollision); \
	DECLARE_FUNCTION(execRemoveCollisions); \
	DECLARE_FUNCTION(execRemoveCollisionsWithNotification); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisions); \
	DECLARE_FUNCTION(execBulkSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollisionsWithNotification); \
	DECLARE_FUNCTION(execGetConvexCollisionCount); \
	DECLARE_FUNCTION(execGetCollisionComplexity); \
	DECLARE_FUNCTION(execGetSimpleCollisionCount); \
	DECLARE_FUNCTION(execGetLodScreenSizes); \
	DECLARE_FUNCTION(execRemoveLods); \
	DECLARE_FUNCTION(execGetLodCount); \
	DECLARE_FUNCTION(execSetLodFromStaticMesh); \
	DECLARE_FUNCTION(execReimportAllCustomLODs); \
	DECLARE_FUNCTION(execImportLOD); \
	DECLARE_FUNCTION(execSetLodBuildSettings); \
	DECLARE_FUNCTION(execGetLodBuildSettings); \
	DECLARE_FUNCTION(execSetLodReductionSettings); \
	DECLARE_FUNCTION(execGetLodReductionSettings);


struct Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics;
EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_NoRegister();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_EditorStaticMeshLibrary(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORSCRIPTINGUTILITIES_API UClass* ::Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_EditorStaticMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), Z_Construct_UClass_UDEPRECATED_EditorStaticMeshLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_EditorStaticMeshLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORSCRIPTINGUTILITIES_API UDEPRECATED_EditorStaticMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_EditorStaticMeshLibrary(UDEPRECATED_EditorStaticMeshLibrary&&) = delete; \
	UDEPRECATED_EditorStaticMeshLibrary(const UDEPRECATED_EditorStaticMeshLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORSCRIPTINGUTILITIES_API, UDEPRECATED_EditorStaticMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_EditorStaticMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_EditorStaticMeshLibrary) \
	EDITORSCRIPTINGUTILITIES_API virtual ~UDEPRECATED_EditorStaticMeshLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_74_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_EditorStaticMeshLibrary;

// ********** End Class UDEPRECATED_EditorStaticMeshLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorStaticMeshLibrary_h

// ********** Begin Enum EScriptingCollisionShapeType_Deprecated ***********************************
#define FOREACH_ENUM_ESCRIPTINGCOLLISIONSHAPETYPE_DEPRECATED(op) \
	op(EScriptingCollisionShapeType_Deprecated::Box) \
	op(EScriptingCollisionShapeType_Deprecated::Sphere) \
	op(EScriptingCollisionShapeType_Deprecated::Capsule) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP10_X) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP10_Y) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP10_Z) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP18) \
	op(EScriptingCollisionShapeType_Deprecated::NDOP26) 

enum class EScriptingCollisionShapeType_Deprecated : uint8;
template<> struct TIsUEnumClass<EScriptingCollisionShapeType_Deprecated> { enum { Value = true }; };
template<> EDITORSCRIPTINGUTILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EScriptingCollisionShapeType_Deprecated>();
// ********** End Enum EScriptingCollisionShapeType_Deprecated *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
