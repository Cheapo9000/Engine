// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mesh/InterchangePhysicsAssetFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangePhysicsAssetFactory_generated_h
#error "InterchangePhysicsAssetFactory.generated.h already included, missing '#pragma once' in InterchangePhysicsAssetFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangePhysicsAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangePhysicsAssetFactory ******************************************
struct Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePhysicsAssetFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangePhysicsAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangePhysicsAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePhysicsAssetFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangePhysicsAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePhysicsAssetFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangePhysicsAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePhysicsAssetFactory(UInterchangePhysicsAssetFactory&&) = delete; \
	UInterchangePhysicsAssetFactory(const UInterchangePhysicsAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangePhysicsAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePhysicsAssetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePhysicsAssetFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangePhysicsAssetFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePhysicsAssetFactory;

// ********** End Class UInterchangePhysicsAssetFactory ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangePhysicsAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
