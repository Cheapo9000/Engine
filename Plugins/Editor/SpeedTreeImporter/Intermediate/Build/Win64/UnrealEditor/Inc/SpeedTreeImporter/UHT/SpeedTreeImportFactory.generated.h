// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeedTreeImportFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPEEDTREEIMPORTER_SpeedTreeImportFactory_generated_h
#error "SpeedTreeImportFactory.generated.h already included, missing '#pragma once' in SpeedTreeImportFactory.h"
#endif
#define SPEEDTREEIMPORTER_SpeedTreeImportFactory_generated_h

#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSpeedTreeImportFactory(); \
	friend struct Z_Construct_UClass_USpeedTreeImportFactory_Statics; \
public: \
	DECLARE_CLASS(USpeedTreeImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpeedTreeImporter"), NO_API) \
	DECLARE_SERIALIZER(USpeedTreeImportFactory)


#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeedTreeImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeedTreeImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeedTreeImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeedTreeImportFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpeedTreeImportFactory(USpeedTreeImportFactory&&); \
	USpeedTreeImportFactory(const USpeedTreeImportFactory&); \
public: \
	NO_API virtual ~USpeedTreeImportFactory();


#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_17_PROLOG
#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_INCLASS \
	FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPEEDTREEIMPORTER_API UClass* StaticClass<class USpeedTreeImportFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
