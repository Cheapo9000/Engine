// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CurveTable.h"

#ifdef ENGINE_CurveTable_generated_h
#error "CurveTable.generated.h already included, missing '#pragma once' in CurveTable.h"
#endif
#define ENGINE_CurveTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurveTable **************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_44_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveTable, ENGINE_API)


struct Z_Construct_UClass_UCurveTable_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUCurveTable(); \
	friend struct ::Z_Construct_UClass_UCurveTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCurveTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurveTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCurveTable_NoRegister) \
	DECLARE_SERIALIZER(UCurveTable) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_44_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveTable(UCurveTable&&) = delete; \
	UCurveTable(const UCurveTable&) = delete; \
	ENGINE_API virtual ~UCurveTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_44_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveTable;

// ********** End Class UCurveTable ****************************************************************

// ********** Begin ScriptStruct FCurveTableRowHandle **********************************************
struct Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_262_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCurveTableRowHandle;
// ********** End ScriptStruct FCurveTableRowHandle ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h

// ********** Begin Enum ECurveTableMode ***********************************************************
#define FOREACH_ENUM_ECURVETABLEMODE(op) \
	op(ECurveTableMode::Empty) \
	op(ECurveTableMode::SimpleCurves) \
	op(ECurveTableMode::RichCurves) 

enum class ECurveTableMode : uint8;
template<> struct TIsUEnumClass<ECurveTableMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveTableMode>();
// ********** End Enum ECurveTableMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
