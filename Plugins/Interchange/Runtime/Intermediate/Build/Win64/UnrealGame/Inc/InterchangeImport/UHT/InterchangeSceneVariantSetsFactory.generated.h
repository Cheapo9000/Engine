// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeSceneVariantSetsFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeSceneVariantSetsFactory_generated_h
#error "InterchangeSceneVariantSetsFactory.generated.h already included, missing '#pragma once' in InterchangeSceneVariantSetsFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeSceneVariantSetsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSceneVariantSetsFactory **************************************
struct Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneVariantSetsFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSceneVariantSetsFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSceneVariantSetsFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeSceneVariantSetsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSceneVariantSetsFactory(UInterchangeSceneVariantSetsFactory&&) = delete; \
	UInterchangeSceneVariantSetsFactory(const UInterchangeSceneVariantSetsFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeSceneVariantSetsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneVariantSetsFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSceneVariantSetsFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeSceneVariantSetsFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_19_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSceneVariantSetsFactory;

// ********** End Class UInterchangeSceneVariantSetsFactory ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSceneVariantSetsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
