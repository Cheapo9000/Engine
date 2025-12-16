// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mesh/InterchangeGeometryCacheFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeGeometryCacheFactory_generated_h
#error "InterchangeGeometryCacheFactory.generated.h already included, missing '#pragma once' in InterchangeGeometryCacheFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeGeometryCacheFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeGeometryCacheFactory *****************************************
struct Z_Construct_UClass_UInterchangeGeometryCacheFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGeometryCacheFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeGeometryCacheFactory_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGeometryCacheFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeGeometryCacheFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeGeometryCacheFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGeometryCacheFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeGeometryCacheFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGeometryCacheFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeGeometryCacheFactory_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeGeometryCacheFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGeometryCacheFactory(UInterchangeGeometryCacheFactory&&) = delete; \
	UInterchangeGeometryCacheFactory(const UInterchangeGeometryCacheFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeGeometryCacheFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGeometryCacheFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeGeometryCacheFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeGeometryCacheFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeGeometryCacheFactory_h_15_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeGeometryCacheFactory_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeGeometryCacheFactory_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeGeometryCacheFactory_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGeometryCacheFactory;

// ********** End Class UInterchangeGeometryCacheFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeGeometryCacheFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
