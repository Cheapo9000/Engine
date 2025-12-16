// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeLightActorFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeLightActorFactory_generated_h
#error "InterchangeLightActorFactory.generated.h already included, missing '#pragma once' in InterchangeLightActorFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeLightActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeLightActorFactory ********************************************
struct Z_Construct_UClass_UInterchangeLightActorFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLightActorFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLightActorFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeLightActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeLightActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeLightActorFactory, UInterchangeActorFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeLightActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeLightActorFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeLightActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeLightActorFactory(UInterchangeLightActorFactory&&) = delete; \
	UInterchangeLightActorFactory(const UInterchangeLightActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeLightActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLightActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeLightActorFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeLightActorFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeLightActorFactory;

// ********** End Class UInterchangeLightActorFactory **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLightActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
