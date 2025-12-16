// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeSkyLightActorFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeSkyLightActorFactory_generated_h
#error "InterchangeSkyLightActorFactory.generated.h already included, missing '#pragma once' in InterchangeSkyLightActorFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeSkyLightActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSkyLightActorFactory *****************************************
struct Z_Construct_UClass_UInterchangeSkyLightActorFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkyLightActorFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkyLightActorFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkyLightActorFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeSkyLightActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeSkyLightActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSkyLightActorFactory, UInterchangeActorFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeSkyLightActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSkyLightActorFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkyLightActorFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeSkyLightActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSkyLightActorFactory(UInterchangeSkyLightActorFactory&&) = delete; \
	UInterchangeSkyLightActorFactory(const UInterchangeSkyLightActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeSkyLightActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkyLightActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSkyLightActorFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeSkyLightActorFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkyLightActorFactory_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkyLightActorFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkyLightActorFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkyLightActorFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSkyLightActorFactory;

// ********** End Class UInterchangeSkyLightActorFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkyLightActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
