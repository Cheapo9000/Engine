// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSelectionFunctions.h"

#ifdef GEOMETRYSCRIPTINGCORE_MeshSelectionFunctions_generated_h
#error "MeshSelectionFunctions.generated.h already included, missing '#pragma once' in MeshSelectionFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSelectionFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
enum class EGeometryScriptCombineSelectionMode : uint8;
enum class EGeometryScriptIndexType : uint8;
enum class EGeometryScriptMeshSelectionType : uint8;
enum class EGeometryScriptTopologyConnectionType : uint8;
struct FGeometryScriptGroupLayer;
struct FGeometryScriptIndexList;
struct FGeometryScriptMeshSelection;

// ********** Begin Class UGeometryScriptLibrary_MeshSelectionFunctions ****************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExpandContractMeshSelection); \
	DECLARE_FUNCTION(execExpandMeshSelectionToConnected); \
	DECLARE_FUNCTION(execInvertMeshSelection); \
	DECLARE_FUNCTION(execSelectMeshElementsInsideMesh); \
	DECLARE_FUNCTION(execSelectMeshPolyGroupBoundaryEdges); \
	DECLARE_FUNCTION(execSelectMeshUVSeamEdges); \
	DECLARE_FUNCTION(execSelectSelectionBoundaryEdges); \
	DECLARE_FUNCTION(execSelectMeshBoundaryEdges); \
	DECLARE_FUNCTION(execSelectMeshSplitNormalEdges); \
	DECLARE_FUNCTION(execSelectMeshSharpEdges); \
	DECLARE_FUNCTION(execSelectMeshElementsByNormalAngle); \
	DECLARE_FUNCTION(execSelectMeshElementsWithPlane); \
	DECLARE_FUNCTION(execSelectMeshElementsInSphere); \
	DECLARE_FUNCTION(execSelectMeshElementsInBox); \
	DECLARE_FUNCTION(execConvertMeshSelectionToIndexList); \
	DECLARE_FUNCTION(execConvertIndexListToMeshSelection); \
	DECLARE_FUNCTION(execConvertMeshSelectionToIndexArray); \
	DECLARE_FUNCTION(execConvertIndexSetToMeshSelection); \
	DECLARE_FUNCTION(execConvertIndexArrayToMeshSelection); \
	DECLARE_FUNCTION(execCombineMeshSelections); \
	DECLARE_FUNCTION(execConvertMeshSelection); \
	DECLARE_FUNCTION(execSelectMeshElementsByPolygroup); \
	DECLARE_FUNCTION(execSelectMeshElementsByMaterialID); \
	DECLARE_FUNCTION(execCreateSelectAllMeshSelection); \
	DECLARE_FUNCTION(execDebugPrintMeshSelection); \
	DECLARE_FUNCTION(execGetMeshUniqueSelectionInfo); \
	DECLARE_FUNCTION(execGetMeshSelectionInfo);


struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics;
GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions(); \
	friend struct ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGCORE_API UClass* ::Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryScriptLibrary_MeshSelectionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_NoRegister) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSelectionFunctions)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGCORE_API UGeometryScriptLibrary_MeshSelectionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryScriptLibrary_MeshSelectionFunctions(UGeometryScriptLibrary_MeshSelectionFunctions&&) = delete; \
	UGeometryScriptLibrary_MeshSelectionFunctions(const UGeometryScriptLibrary_MeshSelectionFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGCORE_API, UGeometryScriptLibrary_MeshSelectionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSelectionFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSelectionFunctions) \
	GEOMETRYSCRIPTINGCORE_API virtual ~UGeometryScriptLibrary_MeshSelectionFunctions();


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryScriptLibrary_MeshSelectionFunctions;

// ********** End Class UGeometryScriptLibrary_MeshSelectionFunctions ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h

// ********** Begin Enum EGeometryScriptTopologyConnectionType *************************************
#define FOREACH_ENUM_EGEOMETRYSCRIPTTOPOLOGYCONNECTIONTYPE(op) \
	op(EGeometryScriptTopologyConnectionType::Geometric) \
	op(EGeometryScriptTopologyConnectionType::Polygroup) \
	op(EGeometryScriptTopologyConnectionType::MaterialID) 

enum class EGeometryScriptTopologyConnectionType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptTopologyConnectionType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryScriptTopologyConnectionType>();
// ********** End Enum EGeometryScriptTopologyConnectionType ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
