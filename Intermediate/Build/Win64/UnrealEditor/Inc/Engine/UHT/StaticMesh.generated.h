// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/StaticMesh.h"

#ifdef ENGINE_StaticMesh_generated_h
#error "StaticMesh.generated.h already included, missing '#pragma once' in StaticMesh.h"
#endif
#define ENGINE_StaticMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UObject;
class UStaticMeshDescription;
class UStaticMeshSocket;
enum class EPerQualityLevels : uint8;
struct FStaticMaterial;

// ********** Begin ScriptStruct FStaticMeshOptimizationSettings ***********************************
struct Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStaticMeshOptimizationSettings;
// ********** End ScriptStruct FStaticMeshOptimizationSettings *************************************

// ********** Begin ScriptStruct FMeshSectionInfo **************************************************
struct Z_Construct_UScriptStruct_FMeshSectionInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_346_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshSectionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMeshSectionInfo;
// ********** End ScriptStruct FMeshSectionInfo ****************************************************

// ********** Begin ScriptStruct FMeshSectionInfoMap ***********************************************
struct Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_405_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMeshSectionInfoMap;
// ********** End ScriptStruct FMeshSectionInfoMap *************************************************

// ********** Begin ScriptStruct FAssetEditorOrbitCameraPosition ***********************************
struct Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_442_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAssetEditorOrbitCameraPosition;
// ********** End ScriptStruct FAssetEditorOrbitCameraPosition *************************************

// ********** Begin ScriptStruct FStaticMaterial ***************************************************
struct Z_Construct_UScriptStruct_FStaticMaterial_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_488_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStaticMaterial;
// ********** End ScriptStruct FStaticMaterial *****************************************************

// ********** Begin ScriptStruct FStaticMaterialMinimalInfo ****************************************
struct Z_Construct_UScriptStruct_FStaticMaterialMinimalInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_528_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticMaterialMinimalInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStaticMaterialMinimalInfo;
// ********** End ScriptStruct FStaticMaterialMinimalInfo ******************************************

// ********** Begin ScriptStruct FMaterialRemapIndex ***********************************************
struct Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_551_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialRemapIndex;
// ********** End ScriptStruct FMaterialRemapIndex *************************************************

// ********** Begin Class UStaticMesh **************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetSocketsByTag); \
	DECLARE_FUNCTION(execRemoveSocket); \
	DECLARE_FUNCTION(execFindSocket); \
	DECLARE_FUNCTION(execAddSocket); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execAddMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetBoundingBox); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetNumLODs); \
	DECLARE_FUNCTION(execGetNumTriangles); \
	DECLARE_FUNCTION(execGetNumVertices); \
	DECLARE_FUNCTION(execGetStaticMeshDescription); \
	DECLARE_FUNCTION(execBuildFromStaticMeshDescriptions); \
	DECLARE_FUNCTION(execCreateStaticMeshDescription); \
	DECLARE_FUNCTION(execSetStaticMaterials); \
	DECLARE_FUNCTION(execGetStaticMaterials); \
	DECLARE_FUNCTION(execSetMinimumLODForPlatform); \
	DECLARE_FUNCTION(execSetMinimumLODForPlatforms); \
	DECLARE_FUNCTION(execGetMinimumLODForPlatform); \
	DECLARE_FUNCTION(execGetMinimumLODForPlatforms); \
	DECLARE_FUNCTION(execGetMinLODForQualityLevels); \
	DECLARE_FUNCTION(execSetMinLODForQualityLevels); \
	DECLARE_FUNCTION(execGetMinimumLODForQualityLevel); \
	DECLARE_FUNCTION(execGetMinimumLODForQualityLevels);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetNumSourceModels); \
	DECLARE_FUNCTION(execIsLODScreenSizeAutoComputed);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMesh, ENGINE_API)


struct Z_Construct_UClass_UStaticMesh_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMesh(); \
	friend struct ::Z_Construct_UClass_UStaticMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStaticMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticMesh, UStreamableRenderAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStaticMesh_NoRegister) \
	DECLARE_SERIALIZER(UStaticMesh) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UStaticMesh*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMesh); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticMesh(UStaticMesh&&) = delete; \
	UStaticMesh(const UStaticMesh&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_591_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h_594_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticMesh;

// ********** End Class UStaticMesh ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMesh_h

// ********** Begin Enum ENormalMode ***************************************************************
#define FOREACH_ENUM_ENORMALMODE(op) \
	op(NM_PreserveSmoothingGroups) \
	op(NM_RecalculateNormals) \
	op(NM_RecalculateNormalsSmooth) \
	op(NM_RecalculateNormalsHard) \
	op(TEMP_BROKEN) 

enum ENormalMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENormalMode>();
// ********** End Enum ENormalMode *****************************************************************

// ********** Begin Enum EImportanceLevel **********************************************************
#define FOREACH_ENUM_EIMPORTANCELEVEL(op) \
	op(IL_Off) \
	op(IL_Lowest) \
	op(IL_Low) \
	op(IL_Normal) \
	op(IL_High) \
	op(IL_Highest) \
	op(TEMP_BROKEN2) 

enum EImportanceLevel : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EImportanceLevel>();
// ********** End Enum EImportanceLevel ************************************************************

// ********** Begin Enum EOptimizationType *********************************************************
#define FOREACH_ENUM_EOPTIMIZATIONTYPE(op) \
	op(OT_NumOfTriangles) \
	op(OT_MaxDeviation) 

enum EOptimizationType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOptimizationType>();
// ********** End Enum EOptimizationType ***********************************************************

// ********** Begin Enum EStaticMeshPaintSupport ***************************************************
#define FOREACH_ENUM_ESTATICMESHPAINTSUPPORT(op) \
	op(EStaticMeshPaintSupport::Default) \
	op(EStaticMeshPaintSupport::Enabled) \
	op(EStaticMeshPaintSupport::Disabled) 

enum class EStaticMeshPaintSupport : uint8;
template<> struct TIsUEnumClass<EStaticMeshPaintSupport> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStaticMeshPaintSupport>();
// ********** End Enum EStaticMeshPaintSupport *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
