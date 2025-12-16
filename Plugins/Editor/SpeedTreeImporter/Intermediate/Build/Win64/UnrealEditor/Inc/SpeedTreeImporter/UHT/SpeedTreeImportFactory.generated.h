// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeedTreeImportFactory.h"

#ifdef SPEEDTREEIMPORTER_SpeedTreeImportFactory_generated_h
#error "SpeedTreeImportFactory.generated.h already included, missing '#pragma once' in SpeedTreeImportFactory.h"
#endif
#define SPEEDTREEIMPORTER_SpeedTreeImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpeedTreeImportFactory **************************************************
struct Z_Construct_UClass_USpeedTreeImportFactory_Statics;
SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportFactory_NoRegister();

#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSpeedTreeImportFactory(); \
	friend struct ::Z_Construct_UClass_USpeedTreeImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPEEDTREEIMPORTER_API UClass* ::Z_Construct_UClass_USpeedTreeImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USpeedTreeImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpeedTreeImporter"), Z_Construct_UClass_USpeedTreeImportFactory_NoRegister) \
	DECLARE_SERIALIZER(USpeedTreeImportFactory)


#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeedTreeImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeedTreeImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeedTreeImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeedTreeImportFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpeedTreeImportFactory(USpeedTreeImportFactory&&) = delete; \
	USpeedTreeImportFactory(const USpeedTreeImportFactory&) = delete; \
	NO_API virtual ~USpeedTreeImportFactory();


#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_17_PROLOG
#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_INCLASS \
	FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpeedTreeImportFactory;

// ********** End Class USpeedTreeImportFactory ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_SpeedTreeImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
