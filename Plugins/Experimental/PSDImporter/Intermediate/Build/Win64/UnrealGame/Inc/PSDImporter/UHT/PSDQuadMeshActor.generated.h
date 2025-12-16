// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PSDQuadMeshActor.h"

#ifdef PSDIMPORTER_PSDQuadMeshActor_generated_h
#error "PSDQuadMeshActor.generated.h already included, missing '#pragma once' in PSDQuadMeshActor.h"
#endif
#define PSDIMPORTER_PSDQuadMeshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APSDQuadMeshActor ********************************************************
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetQuadTranslucentSortPriority); \
	DECLARE_FUNCTION(execResetQuadTexture); \
	DECLARE_FUNCTION(execResetQuadSize); \
	DECLARE_FUNCTION(execResetQuadPosition); \
	DECLARE_FUNCTION(execResetQuadDepth); \
	DECLARE_FUNCTION(execResetQuad);


struct Z_Construct_UClass_APSDQuadMeshActor_Statics;
PSDIMPORTER_API UClass* Z_Construct_UClass_APSDQuadMeshActor_NoRegister();

#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPSDQuadMeshActor(); \
	friend struct ::Z_Construct_UClass_APSDQuadMeshActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PSDIMPORTER_API UClass* ::Z_Construct_UClass_APSDQuadMeshActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APSDQuadMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PSDImporter"), Z_Construct_UClass_APSDQuadMeshActor_NoRegister) \
	DECLARE_SERIALIZER(APSDQuadMeshActor)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APSDQuadMeshActor(APSDQuadMeshActor&&) = delete; \
	APSDQuadMeshActor(const APSDQuadMeshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PSDIMPORTER_API, APSDQuadMeshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APSDQuadMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APSDQuadMeshActor)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h_48_PROLOG
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APSDQuadMeshActor;

// ********** End Class APSDQuadMeshActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporter_Public_PSDQuadMeshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
