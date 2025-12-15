// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CompositeDataTable.h"

#ifdef ENGINE_CompositeDataTable_generated_h
#error "CompositeDataTable.generated.h already included, missing '#pragma once' in CompositeDataTable.h"
#endif
#define ENGINE_CompositeDataTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeDataTable ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeDataTable, ENGINE_API)


struct Z_Construct_UClass_UCompositeDataTable_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCompositeDataTable_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeDataTable(); \
	friend struct ::Z_Construct_UClass_UCompositeDataTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCompositeDataTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeDataTable, UDataTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCompositeDataTable_NoRegister) \
	DECLARE_SERIALIZER(UCompositeDataTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCompositeDataTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeDataTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCompositeDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeDataTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeDataTable(UCompositeDataTable&&) = delete; \
	UCompositeDataTable(const UCompositeDataTable&) = delete; \
	ENGINE_API virtual ~UCompositeDataTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeDataTable;

// ********** End Class UCompositeDataTable ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeDataTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
