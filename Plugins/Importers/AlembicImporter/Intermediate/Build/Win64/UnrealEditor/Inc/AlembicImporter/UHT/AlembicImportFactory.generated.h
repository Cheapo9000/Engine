// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlembicImportFactory.h"

#ifdef ALEMBICIMPORTER_AlembicImportFactory_generated_h
#error "AlembicImportFactory.generated.h already included, missing '#pragma once' in AlembicImportFactory.h"
#endif
#define ALEMBICIMPORTER_AlembicImportFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAlembicImportFactory ****************************************************
struct Z_Construct_UClass_UAlembicImportFactory_Statics;
ALEMBICIMPORTER_API UClass* Z_Construct_UClass_UAlembicImportFactory_NoRegister();

#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAlembicImportFactory(); \
	friend struct ::Z_Construct_UClass_UAlembicImportFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ALEMBICIMPORTER_API UClass* ::Z_Construct_UClass_UAlembicImportFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAlembicImportFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AlembicImporter"), Z_Construct_UClass_UAlembicImportFactory_NoRegister) \
	DECLARE_SERIALIZER(UAlembicImportFactory)


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ALEMBICIMPORTER_API UAlembicImportFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlembicImportFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ALEMBICIMPORTER_API, UAlembicImportFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlembicImportFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAlembicImportFactory(UAlembicImportFactory&&) = delete; \
	UAlembicImportFactory(const UAlembicImportFactory&) = delete; \
	ALEMBICIMPORTER_API virtual ~UAlembicImportFactory();


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_22_PROLOG
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_25_INCLASS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAlembicImportFactory;

// ********** End Class UAlembicImportFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
