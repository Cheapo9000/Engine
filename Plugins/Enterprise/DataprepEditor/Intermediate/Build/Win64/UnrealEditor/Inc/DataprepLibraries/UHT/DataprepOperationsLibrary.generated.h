// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepOperationsLibrary.h"

#ifdef DATAPREPLIBRARIES_DataprepOperationsLibrary_generated_h
#error "DataprepOperationsLibrary.generated.h already included, missing '#pragma once' in DataprepOperationsLibrary.h"
#endif
#define DATAPREPLIBRARIES_DataprepOperationsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UMaterialInterface;
class UObject;
class UStaticMesh;
class UTexture2D;
enum class EEditorScriptingStringMatchType : uint8;
enum class ERandomizeTransformReferenceFrame : uint8;
enum class ERandomizeTransformType : uint8;
enum class EScriptCollisionShapeType : uint8;
struct FStaticMeshReductionOptions;

// ********** Begin ScriptStruct FMaterialSubstitutionDataTable ************************************
struct Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics;
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics; \
	DATAPREPLIBRARIES_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FMaterialSubstitutionDataTable;
// ********** End ScriptStruct FMaterialSubstitutionDataTable **************************************

// ********** Begin ScriptStruct FMeshSubstitutionDataTable ****************************************
struct Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics;
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics; \
	DATAPREPLIBRARIES_API static class UScriptStruct* StaticStruct();


struct FMeshSubstitutionDataTable;
// ********** End ScriptStruct FMeshSubstitutionDataTable ******************************************

// ********** Begin ScriptStruct FLODGroupName *****************************************************
struct Z_Construct_UScriptStruct_FLODGroupName_Statics;
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLODGroupName_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLODGroupName;
// ********** End ScriptStruct FLODGroupName *******************************************************

// ********** Begin ScriptStruct FMeshReductionOptions *********************************************
struct Z_Construct_UScriptStruct_FMeshReductionOptions_Statics;
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshReductionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMeshReductionOptions;
// ********** End ScriptStruct FMeshReductionOptions ***********************************************

// ********** Begin ScriptStruct FMeshReductionArray ***********************************************
struct Z_Construct_UScriptStruct_FMeshReductionArray_Statics;
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshReductionArray_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMeshReductionArray;
// ********** End ScriptStruct FMeshReductionArray *************************************************

// ********** Begin Class UDataprepOperationsLibrary ***********************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNaniteSettings); \
	DECLARE_FUNCTION(execResizeTextures); \
	DECLARE_FUNCTION(execSetCollisionComplexity); \
	DECLARE_FUNCTION(execAddToLayer); \
	DECLARE_FUNCTION(execSetSubOuputFolder); \
	DECLARE_FUNCTION(execSetSubOuputLevel); \
	DECLARE_FUNCTION(execFlipFaces); \
	DECLARE_FUNCTION(execRandomizeTransform); \
	DECLARE_FUNCTION(execConsolidateObjects); \
	DECLARE_FUNCTION(execAddMetadata); \
	DECLARE_FUNCTION(execAddTags); \
	DECLARE_FUNCTION(execSubstituteMeshesByTable); \
	DECLARE_FUNCTION(execSubstituteMesh); \
	DECLARE_FUNCTION(execSetMesh); \
	DECLARE_FUNCTION(execSetMobility); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetLODGroup); \
	DECLARE_FUNCTION(execSubstituteMaterialsByTable); \
	DECLARE_FUNCTION(execSubstituteMaterial); \
	DECLARE_FUNCTION(execSetConvexDecompositionCollision); \
	DECLARE_FUNCTION(execSetSimpleCollision); \
	DECLARE_FUNCTION(execSetLods);


struct Z_Construct_UClass_UDataprepOperationsLibrary_Statics;
DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepOperationsLibrary_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepOperationsLibrary(); \
	friend struct ::Z_Construct_UClass_UDataprepOperationsLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPLIBRARIES_API UClass* ::Z_Construct_UClass_UDataprepOperationsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepOperationsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepLibraries"), Z_Construct_UClass_UDataprepOperationsLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDataprepOperationsLibrary)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepOperationsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepOperationsLibrary(UDataprepOperationsLibrary&&) = delete; \
	UDataprepOperationsLibrary(const UDataprepOperationsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepOperationsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepOperationsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepOperationsLibrary) \
	NO_API virtual ~UDataprepOperationsLibrary();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_131_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepOperationsLibrary;

// ********** End Class UDataprepOperationsLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h

// ********** Begin Enum ERandomizeTransformType ***************************************************
#define FOREACH_ENUM_ERANDOMIZETRANSFORMTYPE(op) \
	op(ERandomizeTransformType::Rotation) \
	op(ERandomizeTransformType::Location) \
	op(ERandomizeTransformType::Scale) 

enum class ERandomizeTransformType : uint8;
template<> struct TIsUEnumClass<ERandomizeTransformType> { enum { Value = true }; };
template<> DATAPREPLIBRARIES_NON_ATTRIBUTED_API UEnum* StaticEnum<ERandomizeTransformType>();
// ********** End Enum ERandomizeTransformType *****************************************************

// ********** Begin Enum ERandomizeTransformReferenceFrame *****************************************
#define FOREACH_ENUM_ERANDOMIZETRANSFORMREFERENCEFRAME(op) \
	op(ERandomizeTransformReferenceFrame::World) \
	op(ERandomizeTransformReferenceFrame::Relative) 

enum class ERandomizeTransformReferenceFrame : uint8;
template<> struct TIsUEnumClass<ERandomizeTransformReferenceFrame> { enum { Value = true }; };
template<> DATAPREPLIBRARIES_NON_ATTRIBUTED_API UEnum* StaticEnum<ERandomizeTransformReferenceFrame>();
// ********** End Enum ERandomizeTransformReferenceFrame *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
