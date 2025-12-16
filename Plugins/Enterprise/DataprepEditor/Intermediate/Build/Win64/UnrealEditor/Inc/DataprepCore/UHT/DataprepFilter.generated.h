// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSystem/DataprepFilter.h"

#ifdef DATAPREPCORE_DataprepFilter_generated_h
#error "DataprepFilter.generated.h already included, missing '#pragma once' in DataprepFilter.h"
#endif
#define DATAPREPCORE_DataprepFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataprepFetcher;

// ********** Begin Class UDataprepFilter **********************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFetcher);


struct Z_Construct_UClass_UDataprepFilter_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilter_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFilter(); \
	friend struct ::Z_Construct_UClass_UDataprepFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepFilter, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepFilter_NoRegister) \
	DECLARE_SERIALIZER(UDataprepFilter)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepFilter(UDataprepFilter&&) = delete; \
	UDataprepFilter(const UDataprepFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFilter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFilter) \
	NO_API virtual ~UDataprepFilter();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_24_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepFilter;

// ********** End Class UDataprepFilter ************************************************************

// ********** Begin Class UDataprepFilterNoFetcher *************************************************
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FText GetNodeDisplayFilterName_Implementation() const; \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetTooltipText); \
	DECLARE_FUNCTION(execGetNodeDisplayFilterName); \
	DECLARE_FUNCTION(execGetDisplayFilterName);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataprepFilterNoFetcher_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilterNoFetcher_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFilterNoFetcher(); \
	friend struct ::Z_Construct_UClass_UDataprepFilterNoFetcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepFilterNoFetcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepFilterNoFetcher, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepFilterNoFetcher_NoRegister) \
	DECLARE_SERIALIZER(UDataprepFilterNoFetcher)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFilterNoFetcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepFilterNoFetcher(UDataprepFilterNoFetcher&&) = delete; \
	UDataprepFilterNoFetcher(const UDataprepFilterNoFetcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFilterNoFetcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFilterNoFetcher); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFilterNoFetcher) \
	NO_API virtual ~UDataprepFilterNoFetcher();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_150_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepFilterNoFetcher;

// ********** End Class UDataprepFilterNoFetcher ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
