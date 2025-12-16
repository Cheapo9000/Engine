// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HierarchyTable.h"

#ifdef HIERARCHYTABLERUNTIME_HierarchyTable_generated_h
#error "HierarchyTable.generated.h already included, missing '#pragma once' in HierarchyTable.h"
#endif
#define HIERARCHYTABLERUNTIME_HierarchyTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHierarchyTableEntryData ******************************************
struct Z_Construct_UScriptStruct_FHierarchyTableEntryData_Statics;
#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHierarchyTableEntryData_Statics; \
	HIERARCHYTABLERUNTIME_API static class UScriptStruct* StaticStruct();


struct FHierarchyTableEntryData;
// ********** End ScriptStruct FHierarchyTableEntryData ********************************************

// ********** Begin Class UHierarchyTable **********************************************************
struct Z_Construct_UClass_UHierarchyTable_Statics;
HIERARCHYTABLERUNTIME_API UClass* Z_Construct_UClass_UHierarchyTable_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchyTable(); \
	friend struct ::Z_Construct_UClass_UHierarchyTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HIERARCHYTABLERUNTIME_API UClass* ::Z_Construct_UClass_UHierarchyTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UHierarchyTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HierarchyTableRuntime"), Z_Construct_UClass_UHierarchyTable_NoRegister) \
	DECLARE_SERIALIZER(UHierarchyTable)


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_106_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHierarchyTable(UHierarchyTable&&) = delete; \
	UHierarchyTable(const UHierarchyTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HIERARCHYTABLERUNTIME_API, UHierarchyTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchyTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHierarchyTable) \
	HIERARCHYTABLERUNTIME_API virtual ~UHierarchyTable();


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_103_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHierarchyTable;

// ********** End Class UHierarchyTable ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
