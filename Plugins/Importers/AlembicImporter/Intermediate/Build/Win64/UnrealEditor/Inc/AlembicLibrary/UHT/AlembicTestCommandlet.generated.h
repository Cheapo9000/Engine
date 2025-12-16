// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlembicTestCommandlet.h"

#ifdef ALEMBICLIBRARY_AlembicTestCommandlet_generated_h
#error "AlembicTestCommandlet.generated.h already included, missing '#pragma once' in AlembicTestCommandlet.h"
#endif
#define ALEMBICLIBRARY_AlembicTestCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAlembicTestCommandlet ***************************************************
struct Z_Construct_UClass_UAlembicTestCommandlet_Statics;
ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAlembicTestCommandlet_NoRegister();

#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAlembicTestCommandlet(); \
	friend struct ::Z_Construct_UClass_UAlembicTestCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ALEMBICLIBRARY_API UClass* ::Z_Construct_UClass_UAlembicTestCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UAlembicTestCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AlembicLibrary"), Z_Construct_UClass_UAlembicTestCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UAlembicTestCommandlet)


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlembicTestCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlembicTestCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlembicTestCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlembicTestCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAlembicTestCommandlet(UAlembicTestCommandlet&&) = delete; \
	UAlembicTestCommandlet(const UAlembicTestCommandlet&) = delete; \
	NO_API virtual ~UAlembicTestCommandlet();


#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_8_PROLOG
#define FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_11_INCLASS \
	FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAlembicTestCommandlet;

// ********** End Class UAlembicTestCommandlet *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Private_AlembicTestCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
