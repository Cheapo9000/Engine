// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeStaticMeshActorFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeStaticMeshActorFactory_generated_h
#error "InterchangeStaticMeshActorFactory.generated.h already included, missing '#pragma once' in InterchangeStaticMeshActorFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeStaticMeshActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeStaticMeshActorFactory ***************************************
struct Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStaticMeshActorFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeStaticMeshActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeStaticMeshActorFactory, UInterchangeActorFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeStaticMeshActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeStaticMeshActorFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeStaticMeshActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeStaticMeshActorFactory(UInterchangeStaticMeshActorFactory&&) = delete; \
	UInterchangeStaticMeshActorFactory(const UInterchangeStaticMeshActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeStaticMeshActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStaticMeshActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeStaticMeshActorFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeStaticMeshActorFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_20_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeStaticMeshActorFactory;

// ********** End Class UInterchangeStaticMeshActorFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
