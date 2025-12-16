// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelingObjectsCreationAPI.h"

#ifdef MODELINGCOMPONENTS_ModelingObjectsCreationAPI_generated_h
#error "ModelingObjectsCreationAPI.generated.h already included, missing '#pragma once' in ModelingObjectsCreationAPI.h"
#endif
#define MODELINGCOMPONENTS_ModelingObjectsCreationAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateActorParams;
struct FCreateActorResult;
struct FCreateComponentParams;
struct FCreateComponentResult;
struct FCreateMaterialObjectParams;
struct FCreateMaterialObjectResult;
struct FCreateMeshObjectParams;
struct FCreateMeshObjectResult;
struct FCreateTextureObjectParams;
struct FCreateTextureObjectResult;

// ********** Begin ScriptStruct FCreateMeshObjectParams *******************************************
struct Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateMeshObjectParams;
// ********** End ScriptStruct FCreateMeshObjectParams *********************************************

// ********** Begin ScriptStruct FCreateMeshObjectResult *******************************************
struct Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateMeshObjectResult;
// ********** End ScriptStruct FCreateMeshObjectResult *********************************************

// ********** Begin ScriptStruct FCreateTextureObjectParams ****************************************
struct Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_252_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateTextureObjectParams;
// ********** End ScriptStruct FCreateTextureObjectParams ******************************************

// ********** Begin ScriptStruct FCreateTextureObjectResult ****************************************
struct Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_305_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateTextureObjectResult;
// ********** End ScriptStruct FCreateTextureObjectResult ******************************************

// ********** Begin ScriptStruct FCreateMaterialObjectParams ***************************************
struct Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_331_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateMaterialObjectParams_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateMaterialObjectParams;
// ********** End ScriptStruct FCreateMaterialObjectParams *****************************************

// ********** Begin ScriptStruct FCreateMaterialObjectResult ***************************************
struct Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_373_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateMaterialObjectResult_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateMaterialObjectResult;
// ********** End ScriptStruct FCreateMaterialObjectResult *****************************************

// ********** Begin ScriptStruct FCreateActorParams ************************************************
struct Z_Construct_UScriptStruct_FCreateActorParams_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_397_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateActorParams_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateActorParams;
// ********** End ScriptStruct FCreateActorParams **************************************************

// ********** Begin ScriptStruct FCreateActorResult ************************************************
struct Z_Construct_UScriptStruct_FCreateActorResult_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_439_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateActorResult_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateActorResult;
// ********** End ScriptStruct FCreateActorResult **************************************************

// ********** Begin ScriptStruct FCreateComponentParams ********************************************
struct Z_Construct_UScriptStruct_FCreateComponentParams_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_460_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateComponentParams_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateComponentParams;
// ********** End ScriptStruct FCreateComponentParams **********************************************

// ********** Begin ScriptStruct FCreateComponentResult ********************************************
struct Z_Construct_UScriptStruct_FCreateComponentResult_Statics;
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_490_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCreateComponentResult_Statics; \
	MODELINGCOMPONENTS_API static class UScriptStruct* StaticStruct();


struct FCreateComponentResult;
// ********** End ScriptStruct FCreateComponentResult **********************************************

// ********** Begin Class UModelingObjectsCreationAPI **********************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_527_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateNewComponentOnActor); \
	DECLARE_FUNCTION(execCreateNewActor); \
	DECLARE_FUNCTION(execCreateMaterialObject); \
	DECLARE_FUNCTION(execCreateTextureObject); \
	DECLARE_FUNCTION(execCreateMeshObject);


struct Z_Construct_UClass_UModelingObjectsCreationAPI_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingObjectsCreationAPI_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_527_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelingObjectsCreationAPI(); \
	friend struct ::Z_Construct_UClass_UModelingObjectsCreationAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UModelingObjectsCreationAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelingObjectsCreationAPI, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UModelingObjectsCreationAPI_NoRegister) \
	DECLARE_SERIALIZER(UModelingObjectsCreationAPI)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_527_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UModelingObjectsCreationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelingObjectsCreationAPI(UModelingObjectsCreationAPI&&) = delete; \
	UModelingObjectsCreationAPI(const UModelingObjectsCreationAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UModelingObjectsCreationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelingObjectsCreationAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelingObjectsCreationAPI) \
	MODELINGCOMPONENTS_API virtual ~UModelingObjectsCreationAPI();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_524_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_527_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_527_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_527_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_527_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModelingObjectsCreationAPI;

// ********** End Class UModelingObjectsCreationAPI ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h

// ********** Begin Enum ECreateModelingObjectResult ***********************************************
#define FOREACH_ENUM_ECREATEMODELINGOBJECTRESULT(op) \
	op(ECreateModelingObjectResult::Ok) \
	op(ECreateModelingObjectResult::Cancelled) \
	op(ECreateModelingObjectResult::Failed_Unknown) \
	op(ECreateModelingObjectResult::Failed_NoAPIFound) \
	op(ECreateModelingObjectResult::Failed_InvalidWorld) \
	op(ECreateModelingObjectResult::Failed_InvalidMesh) \
	op(ECreateModelingObjectResult::Failed_InvalidTexture) \
	op(ECreateModelingObjectResult::Failed_AssetCreationFailed) \
	op(ECreateModelingObjectResult::Failed_ActorCreationFailed) \
	op(ECreateModelingObjectResult::Failed_InvalidMaterial) \
	op(ECreateModelingObjectResult::Failed_InvalidActor) 

enum class ECreateModelingObjectResult : uint8;
template<> struct TIsUEnumClass<ECreateModelingObjectResult> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECreateModelingObjectResult>();
// ********** End Enum ECreateModelingObjectResult *************************************************

// ********** Begin Enum ECreateMeshObjectSourceMeshType *******************************************
#define FOREACH_ENUM_ECREATEMESHOBJECTSOURCEMESHTYPE(op) \
	op(ECreateMeshObjectSourceMeshType::MeshDescription) \
	op(ECreateMeshObjectSourceMeshType::DynamicMesh) 

enum class ECreateMeshObjectSourceMeshType : uint8;
template<> struct TIsUEnumClass<ECreateMeshObjectSourceMeshType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECreateMeshObjectSourceMeshType>();
// ********** End Enum ECreateMeshObjectSourceMeshType *********************************************

// ********** Begin Enum ECreateObjectTypeHint *****************************************************
#define FOREACH_ENUM_ECREATEOBJECTTYPEHINT(op) \
	op(ECreateObjectTypeHint::Undefined) \
	op(ECreateObjectTypeHint::StaticMesh) \
	op(ECreateObjectTypeHint::Volume) \
	op(ECreateObjectTypeHint::DynamicMeshActor) 

enum class ECreateObjectTypeHint : uint8;
template<> struct TIsUEnumClass<ECreateObjectTypeHint> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECreateObjectTypeHint>();
// ********** End Enum ECreateObjectTypeHint *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
