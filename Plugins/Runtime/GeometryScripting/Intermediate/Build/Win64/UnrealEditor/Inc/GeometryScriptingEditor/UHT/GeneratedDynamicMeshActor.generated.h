// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryActors/GeneratedDynamicMeshActor.h"

#ifdef GEOMETRYSCRIPTINGEDITOR_GeneratedDynamicMeshActor_generated_h
#error "GeneratedDynamicMeshActor.generated.h already included, missing '#pragma once' in GeneratedDynamicMeshActor.h"
#endif
#define GEOMETRYSCRIPTINGEDITOR_GeneratedDynamicMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStaticMeshActor;
class UDynamicMesh;

// ********** Begin Class AGeneratedDynamicMeshActor ***********************************************
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIncrementProgress); \
	DECLARE_FUNCTION(execCopyPropertiesFromStaticMesh); \
	DECLARE_FUNCTION(execCopyPropertiesToStaticMesh); \
	DECLARE_FUNCTION(execMarkForMeshRebuild);


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics;
GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_AGeneratedDynamicMeshActor_NoRegister();

#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAGeneratedDynamicMeshActor(); \
	friend struct ::Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYSCRIPTINGEDITOR_API UClass* ::Z_Construct_UClass_AGeneratedDynamicMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGeneratedDynamicMeshActor, ADynamicMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryScriptingEditor"), Z_Construct_UClass_AGeneratedDynamicMeshActor_NoRegister) \
	DECLARE_SERIALIZER(AGeneratedDynamicMeshActor)


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYSCRIPTINGEDITOR_API AGeneratedDynamicMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeneratedDynamicMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYSCRIPTINGEDITOR_API, AGeneratedDynamicMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeneratedDynamicMeshActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGeneratedDynamicMeshActor(AGeneratedDynamicMeshActor&&) = delete; \
	AGeneratedDynamicMeshActor(const AGeneratedDynamicMeshActor&) = delete;


#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_INCLASS \
	FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGeneratedDynamicMeshActor;

// ********** End Class AGeneratedDynamicMeshActor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
