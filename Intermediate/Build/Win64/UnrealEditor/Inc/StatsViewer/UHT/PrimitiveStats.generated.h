// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PrimitiveStats.h"

#ifdef STATSVIEWER_PrimitiveStats_generated_h
#error "PrimitiveStats.generated.h already included, missing '#pragma once' in PrimitiveStats.h"
#endif
#define STATSVIEWER_PrimitiveStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPrimitiveStats **********************************************************
struct Z_Construct_UClass_UPrimitiveStats_Statics;
STATSVIEWER_API UClass* Z_Construct_UClass_UPrimitiveStats_NoRegister();

#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPrimitiveStats(); \
	friend struct ::Z_Construct_UClass_UPrimitiveStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATSVIEWER_API UClass* ::Z_Construct_UClass_UPrimitiveStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UPrimitiveStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), Z_Construct_UClass_UPrimitiveStats_NoRegister) \
	DECLARE_SERIALIZER(UPrimitiveStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UPrimitiveStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UPrimitiveStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveStats); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPrimitiveStats(UPrimitiveStats&&) = delete; \
	UPrimitiveStats(const UPrimitiveStats&) = delete; \
	STATSVIEWER_API virtual ~UPrimitiveStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_23_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPrimitiveStats;

// ********** End Class UPrimitiveStats ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h

// ********** Begin Enum EPrimitiveObjectSets ******************************************************
#define FOREACH_ENUM_EPRIMITIVEOBJECTSETS(op) \
	op(PrimitiveObjectSets_AllObjects) \
	op(PrimitiveObjectSets_CurrentLevel) \
	op(PrimitiveObjectSets_SelectedObjects) 

enum EPrimitiveObjectSets : int;
template<> STATSVIEWER_NON_ATTRIBUTED_API UEnum* StaticEnum<EPrimitiveObjectSets>();
// ********** End Enum EPrimitiveObjectSets ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
