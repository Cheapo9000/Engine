// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkDataTableSource.h"

#ifdef DATALINKDATATABLE_DataLinkDataTableSource_generated_h
#error "DataLinkDataTableSource.generated.h already included, missing '#pragma once' in DataLinkDataTableSource.h"
#endif
#define DATALINKDATATABLE_DataLinkDataTableSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkDataTableSource *************************************************
struct Z_Construct_UClass_UDataLinkDataTableSource_Statics;
DATALINKDATATABLE_API UClass* Z_Construct_UClass_UDataLinkDataTableSource_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkDataTable_Public_DataLinkDataTableSource_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkDataTableSource(); \
	friend struct ::Z_Construct_UClass_UDataLinkDataTableSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKDATATABLE_API UClass* ::Z_Construct_UClass_UDataLinkDataTableSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkDataTableSource, UDataLinkNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkDataTable"), Z_Construct_UClass_UDataLinkDataTableSource_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkDataTableSource)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkDataTable_Public_DataLinkDataTableSource_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKDATATABLE_API UDataLinkDataTableSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkDataTableSource(UDataLinkDataTableSource&&) = delete; \
	UDataLinkDataTableSource(const UDataLinkDataTableSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKDATATABLE_API, UDataLinkDataTableSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkDataTableSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkDataTableSource) \
	DATALINKDATATABLE_API virtual ~UDataLinkDataTableSource();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkDataTable_Public_DataLinkDataTableSource_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkDataTable_Public_DataLinkDataTableSource_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkDataTable_Public_DataLinkDataTableSource_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkDataTable_Public_DataLinkDataTableSource_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkDataTableSource;

// ********** End Class UDataLinkDataTableSource ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkDataTable_Public_DataLinkDataTableSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
