// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeLevelInstanceActorFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeLevelInstanceActorFactory_generated_h
#error "InterchangeLevelInstanceActorFactory.generated.h already included, missing '#pragma once' in InterchangeLevelInstanceActorFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeLevelInstanceActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeLevelInstanceActorFactory ************************************
struct Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLevelInstanceActorFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeLevelInstanceActorFactory, UInterchangeActorFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeLevelInstanceActorFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeLevelInstanceActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeLevelInstanceActorFactory(UInterchangeLevelInstanceActorFactory&&) = delete; \
	UInterchangeLevelInstanceActorFactory(const UInterchangeLevelInstanceActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeLevelInstanceActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLevelInstanceActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeLevelInstanceActorFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeLevelInstanceActorFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_18_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeLevelInstanceActorFactory;

// ********** End Class UInterchangeLevelInstanceActorFactory **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelInstanceActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
