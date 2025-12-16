// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeDecalActorFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeDecalActorFactory_generated_h
#error "InterchangeDecalActorFactory.generated.h already included, missing '#pragma once' in InterchangeDecalActorFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeDecalActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeDecalActorFactory ********************************************
struct Z_Construct_UClass_UInterchangeDecalActorFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeDecalActorFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDecalActorFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeDecalActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeDecalActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeDecalActorFactory, UInterchangeActorFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeDecalActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeDecalActorFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeDecalActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeDecalActorFactory(UInterchangeDecalActorFactory&&) = delete; \
	UInterchangeDecalActorFactory(const UInterchangeDecalActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeDecalActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDecalActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeDecalActorFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeDecalActorFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeDecalActorFactory;

// ********** End Class UInterchangeDecalActorFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeDecalActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
