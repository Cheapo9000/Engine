// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CompositeCurveTable.h"

#ifdef ENGINE_CompositeCurveTable_generated_h
#error "CompositeCurveTable.generated.h already included, missing '#pragma once' in CompositeCurveTable.h"
#endif
#define ENGINE_CompositeCurveTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeCurveTable *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeCurveTable, ENGINE_API)


struct Z_Construct_UClass_UCompositeCurveTable_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeCurveTable(); \
	friend struct ::Z_Construct_UClass_UCompositeCurveTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCompositeCurveTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeCurveTable, UCurveTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCompositeCurveTable_NoRegister) \
	DECLARE_SERIALIZER(UCompositeCurveTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCompositeCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeCurveTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCompositeCurveTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCurveTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeCurveTable(UCompositeCurveTable&&) = delete; \
	UCompositeCurveTable(const UCompositeCurveTable&) = delete; \
	ENGINE_API virtual ~UCompositeCurveTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeCurveTable;

// ********** End Class UCompositeCurveTable *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
