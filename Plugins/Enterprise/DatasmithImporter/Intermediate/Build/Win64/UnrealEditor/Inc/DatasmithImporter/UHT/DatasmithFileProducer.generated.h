// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithFileProducer.h"

#ifdef DATASMITHIMPORTER_DatasmithFileProducer_generated_h
#error "DatasmithFileProducer.generated.h already included, missing '#pragma once' in DatasmithFileProducer.h"
#endif
#define DATASMITHIMPORTER_DatasmithFileProducer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithFileProducer ***************************************************
struct Z_Construct_UClass_UDatasmithFileProducer_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithFileProducer_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithFileProducer(); \
	friend struct ::Z_Construct_UClass_UDatasmithFileProducer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithFileProducer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithFileProducer, UDataprepContentProducer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithFileProducer_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithFileProducer)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithFileProducer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithFileProducer(UDatasmithFileProducer&&) = delete; \
	UDatasmithFileProducer(const UDatasmithFileProducer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithFileProducer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithFileProducer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithFileProducer) \
	NO_API virtual ~UDatasmithFileProducer();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_27_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithFileProducer;

// ********** End Class UDatasmithFileProducer *****************************************************

// ********** Begin Class UDatasmithDirProducer ****************************************************
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_148_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithDirProducer, NO_API)


struct Z_Construct_UClass_UDatasmithDirProducer_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithDirProducer_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithDirProducer(); \
	friend struct ::Z_Construct_UClass_UDatasmithDirProducer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithDirProducer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithDirProducer, UDataprepContentProducer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithDirProducer_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithDirProducer) \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_148_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_148_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithDirProducer(UDatasmithDirProducer&&) = delete; \
	UDatasmithDirProducer(const UDatasmithDirProducer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithDirProducer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithDirProducer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDatasmithDirProducer) \
	NO_API virtual ~UDatasmithDirProducer();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_145_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithDirProducer;

// ********** End Class UDatasmithDirProducer ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithFileProducer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
