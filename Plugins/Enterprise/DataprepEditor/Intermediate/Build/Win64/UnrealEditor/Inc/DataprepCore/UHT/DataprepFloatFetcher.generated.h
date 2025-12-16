// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSystem/DataprepFloatFetcher.h"

#ifdef DATAPREPCORE_DataprepFloatFetcher_generated_h
#error "DataprepFloatFetcher.generated.h already included, missing '#pragma once' in DataprepFloatFetcher.h"
#endif
#define DATAPREPCORE_DataprepFloatFetcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UDataprepFloatFetcher ****************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFetch);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataprepFloatFetcher_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFloatFetcher_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFloatFetcher(); \
	friend struct ::Z_Construct_UClass_UDataprepFloatFetcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepFloatFetcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepFloatFetcher, UDataprepFetcher, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepFloatFetcher_NoRegister) \
	DECLARE_SERIALIZER(UDataprepFloatFetcher)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFloatFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepFloatFetcher(UDataprepFloatFetcher&&) = delete; \
	UDataprepFloatFetcher(const UDataprepFloatFetcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFloatFetcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFloatFetcher); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFloatFetcher) \
	NO_API virtual ~UDataprepFloatFetcher();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_16_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepFloatFetcher;

// ********** End Class UDataprepFloatFetcher ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFetcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
