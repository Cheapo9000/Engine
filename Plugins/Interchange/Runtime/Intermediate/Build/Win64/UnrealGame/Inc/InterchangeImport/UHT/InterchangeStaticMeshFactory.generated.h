// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mesh/InterchangeStaticMeshFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeStaticMeshFactory_generated_h
#error "InterchangeStaticMeshFactory.generated.h already included, missing '#pragma once' in InterchangeStaticMeshFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeStaticMeshFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeStaticMeshFactory ********************************************
struct Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStaticMeshFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeStaticMeshFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeStaticMeshFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeStaticMeshFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeStaticMeshFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeStaticMeshFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeStaticMeshFactory(UInterchangeStaticMeshFactory&&) = delete; \
	UInterchangeStaticMeshFactory(const UInterchangeStaticMeshFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeStaticMeshFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStaticMeshFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeStaticMeshFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeStaticMeshFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_26_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeStaticMeshFactory;

// ********** End Class UInterchangeStaticMeshFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
