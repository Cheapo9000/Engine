// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HierarchyTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HIERARCHYTABLERUNTIME_HierarchyTable_generated_h
#error "HierarchyTable.generated.h already included, missing '#pragma once' in HierarchyTable.h"
#endif
#define HIERARCHYTABLERUNTIME_HierarchyTable_generated_h

#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHierarchyTableEntryData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HIERARCHYTABLERUNTIME_API UScriptStruct* StaticStruct<struct FHierarchyTableEntryData>();

#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchyTable(); \
	friend struct Z_Construct_UClass_UHierarchyTable_Statics; \
public: \
	DECLARE_CLASS(UHierarchyTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HierarchyTableRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHierarchyTable)


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_93_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHierarchyTable(UHierarchyTable&&); \
	UHierarchyTable(const UHierarchyTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchyTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchyTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHierarchyTable) \
	NO_API virtual ~UHierarchyTable();


#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_90_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HIERARCHYTABLERUNTIME_API UClass* StaticClass<class UHierarchyTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_HierarchyTable_Source_Runtime_Public_HierarchyTable_h


#define FOREACH_ENUM_EHIERARCHYTABLEENTRYTYPE(op) \
	op(EHierarchyTableEntryType::Bone) \
	op(EHierarchyTableEntryType::Curve) \
	op(EHierarchyTableEntryType::Attribute) 

enum class EHierarchyTableEntryType : uint8;
template<> struct TIsUEnumClass<EHierarchyTableEntryType> { enum { Value = true }; };
template<> HIERARCHYTABLERUNTIME_API UEnum* StaticEnum<EHierarchyTableEntryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
