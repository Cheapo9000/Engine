// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactoryDatasmithScene.h"

#ifdef DATASMITHIMPORTER_ActorFactoryDatasmithScene_generated_h
#error "ActorFactoryDatasmithScene.generated.h already included, missing '#pragma once' in ActorFactoryDatasmithScene.h"
#endif
#define DATASMITHIMPORTER_ActorFactoryDatasmithScene_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryDatasmithScene **********************************************
struct Z_Construct_UClass_UActorFactoryDatasmithScene_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UActorFactoryDatasmithScene_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactoryDatasmithScene(); \
	friend struct ::Z_Construct_UClass_UActorFactoryDatasmithScene_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UActorFactoryDatasmithScene_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryDatasmithScene, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UActorFactoryDatasmithScene_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryDatasmithScene)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHIMPORTER_API UActorFactoryDatasmithScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactoryDatasmithScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHIMPORTER_API, UActorFactoryDatasmithScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryDatasmithScene); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryDatasmithScene(UActorFactoryDatasmithScene&&) = delete; \
	UActorFactoryDatasmithScene(const UActorFactoryDatasmithScene&) = delete; \
	DATASMITHIMPORTER_API virtual ~UActorFactoryDatasmithScene();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_11_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_14_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryDatasmithScene;

// ********** End Class UActorFactoryDatasmithScene ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ActorFactoryDatasmithScene_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
