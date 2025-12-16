// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithDataprepFetcher.h"

#ifdef DATASMITHIMPORTER_DatasmithDataprepFetcher_generated_h
#error "DatasmithDataprepFetcher.generated.h already included, missing '#pragma once' in DatasmithDataprepFetcher.h"
#endif
#define DATASMITHIMPORTER_DatasmithDataprepFetcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithStringMetadataValueFetcher *************************************
struct Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics;
DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_NoRegister();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithStringMetadataValueFetcher(); \
	friend struct ::Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHIMPORTER_API UClass* ::Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithStringMetadataValueFetcher, UDataprepStringsArrayFetcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithStringMetadataValueFetcher)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithStringMetadataValueFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithStringMetadataValueFetcher(UDatasmithStringMetadataValueFetcher&&) = delete; \
	UDatasmithStringMetadataValueFetcher(const UDatasmithStringMetadataValueFetcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithStringMetadataValueFetcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithStringMetadataValueFetcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithStringMetadataValueFetcher) \
	NO_API virtual ~UDatasmithStringMetadataValueFetcher();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_18_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithStringMetadataValueFetcher;

// ********** End Class UDatasmithStringMetadataValueFetcher ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h

// ********** Begin Enum EMetadataKeyMatchingCriteria **********************************************
#define FOREACH_ENUM_EMETADATAKEYMATCHINGCRITERIA(op) \
	op(ExactMatch) \
	op(Contains) 

enum EMetadataKeyMatchingCriteria : int;
template<> DATASMITHIMPORTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetadataKeyMatchingCriteria>();
// ********** End Enum EMetadataKeyMatchingCriteria ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
