// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepAssetProducers.h"

#ifdef DATAPREPCORE_DataprepAssetProducers_generated_h
#error "DataprepAssetProducers.generated.h already included, missing '#pragma once' in DataprepAssetProducers.h"
#endif
#define DATAPREPCORE_DataprepAssetProducers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataprepAssetProducer ********************************************
struct Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics;
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataprepAssetProducer_Statics; \
	DATAPREPCORE_API static class UScriptStruct* StaticStruct();


struct FDataprepAssetProducer;
// ********** End ScriptStruct FDataprepAssetProducer **********************************************

// ********** Begin Class UDataprepAssetProducers **************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_52_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataprepAssetProducers, NO_API)


struct Z_Construct_UClass_UDataprepAssetProducers_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetProducers_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepAssetProducers(); \
	friend struct ::Z_Construct_UClass_UDataprepAssetProducers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepAssetProducers_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepAssetProducers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepAssetProducers_NoRegister) \
	DECLARE_SERIALIZER(UDataprepAssetProducers) \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_52_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepAssetProducers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepAssetProducers(UDataprepAssetProducers&&) = delete; \
	UDataprepAssetProducers(const UDataprepAssetProducers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepAssetProducers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepAssetProducers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepAssetProducers)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_49_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepAssetProducers;

// ********** End Class UDataprepAssetProducers ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetProducers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
