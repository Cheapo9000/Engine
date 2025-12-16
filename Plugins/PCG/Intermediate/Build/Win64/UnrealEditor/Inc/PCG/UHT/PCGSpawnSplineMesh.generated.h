// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSpawnSplineMesh.h"

#ifdef PCG_PCGSpawnSplineMesh_generated_h
#error "PCGSpawnSplineMesh.generated.h already included, missing '#pragma once' in PCGSpawnSplineMesh.h"
#endif
#define PCG_PCGSpawnSplineMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSpawnSplineMeshSettings **********************************************
struct Z_Construct_UClass_UPCGSpawnSplineMeshSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSpawnSplineMeshSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpawnSplineMeshSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSpawnSplineMeshSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSpawnSplineMeshSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSpawnSplineMeshSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSpawnSplineMeshSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSpawnSplineMeshSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSpawnSplineMeshSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSpawnSplineMeshSettings(UPCGSpawnSplineMeshSettings&&) = delete; \
	UPCGSpawnSplineMeshSettings(const UPCGSpawnSplineMeshSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSpawnSplineMeshSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpawnSplineMeshSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpawnSplineMeshSettings) \
	PCG_API virtual ~UPCGSpawnSplineMeshSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h_25_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSpawnSplineMeshSettings;

// ********** End Class UPCGSpawnSplineMeshSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSpawnSplineMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
