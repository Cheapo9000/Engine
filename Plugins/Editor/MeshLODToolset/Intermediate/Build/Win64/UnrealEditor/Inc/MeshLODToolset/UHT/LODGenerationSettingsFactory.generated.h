// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/LODGenerationSettingsFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHLODTOOLSET_LODGenerationSettingsFactory_generated_h
#error "LODGenerationSettingsFactory.generated.h already included, missing '#pragma once' in LODGenerationSettingsFactory.h"
#endif
#define MESHLODTOOLSET_LODGenerationSettingsFactory_generated_h

#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshLODGenerationSettingsFactory(); \
	friend struct Z_Construct_UClass_UStaticMeshLODGenerationSettingsFactory_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshLODGenerationSettingsFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshLODToolset"), MESHLODTOOLSET_API) \
	DECLARE_SERIALIZER(UStaticMeshLODGenerationSettingsFactory)


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHLODTOOLSET_API UStaticMeshLODGenerationSettingsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshLODGenerationSettingsFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHLODTOOLSET_API, UStaticMeshLODGenerationSettingsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshLODGenerationSettingsFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStaticMeshLODGenerationSettingsFactory(UStaticMeshLODGenerationSettingsFactory&&); \
	UStaticMeshLODGenerationSettingsFactory(const UStaticMeshLODGenerationSettingsFactory&); \
public: \
	MESHLODTOOLSET_API virtual ~UStaticMeshLODGenerationSettingsFactory();


#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_12_PROLOG
#define FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_15_INCLASS \
	FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHLODTOOLSET_API UClass* StaticClass<class UStaticMeshLODGenerationSettingsFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_MeshLODToolset_Source_MeshLODToolset_Public_Tools_LODGenerationSettingsFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
