// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSystem/DataprepFetcher.h"

#ifdef DATAPREPCORE_DataprepFetcher_generated_h
#error "DataprepFetcher.generated.h already included, missing '#pragma once' in DataprepFetcher.h"
#endif
#define DATAPREPCORE_DataprepFetcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepFetcher *********************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetTooltipText); \
	DECLARE_FUNCTION(execGetNodeDisplayFetcherName); \
	DECLARE_FUNCTION(execGetDisplayFetcherName);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataprepFetcher_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFetcher_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFetcher(); \
	friend struct ::Z_Construct_UClass_UDataprepFetcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepFetcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepFetcher, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepFetcher_NoRegister) \
	DECLARE_SERIALIZER(UDataprepFetcher)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepFetcher(UDataprepFetcher&&) = delete; \
	UDataprepFetcher(const UDataprepFetcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFetcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFetcher); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFetcher) \
	NO_API virtual ~UDataprepFetcher();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_18_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepFetcher;

// ********** End Class UDataprepFetcher ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFetcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
