// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReimportSpeedTreeFactory.h"

#ifdef SPEEDTREEIMPORTER_ReimportSpeedTreeFactory_generated_h
#error "ReimportSpeedTreeFactory.generated.h already included, missing '#pragma once' in ReimportSpeedTreeFactory.h"
#endif
#define SPEEDTREEIMPORTER_ReimportSpeedTreeFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportSpeedTreeFactory ************************************************
struct Z_Construct_UClass_UReimportSpeedTreeFactory_Statics;
SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_UReimportSpeedTreeFactory_NoRegister();

#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUReimportSpeedTreeFactory(); \
	friend struct ::Z_Construct_UClass_UReimportSpeedTreeFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPEEDTREEIMPORTER_API UClass* ::Z_Construct_UClass_UReimportSpeedTreeFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportSpeedTreeFactory, USpeedTreeImportFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpeedTreeImporter"), Z_Construct_UClass_UReimportSpeedTreeFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportSpeedTreeFactory)


#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportSpeedTreeFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportSpeedTreeFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportSpeedTreeFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportSpeedTreeFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportSpeedTreeFactory(UReimportSpeedTreeFactory&&) = delete; \
	UReimportSpeedTreeFactory(const UReimportSpeedTreeFactory&) = delete; \
	NO_API virtual ~UReimportSpeedTreeFactory();


#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_15_PROLOG
#define FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_18_INCLASS \
	FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportSpeedTreeFactory;

// ********** End Class UReimportSpeedTreeFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_SpeedTreeImporter_Source_SpeedTreeImporter_Classes_ReimportSpeedTreeFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
