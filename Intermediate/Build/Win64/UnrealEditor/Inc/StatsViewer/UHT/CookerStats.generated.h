// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CookerStats.h"

#ifdef STATSVIEWER_CookerStats_generated_h
#error "CookerStats.generated.h already included, missing '#pragma once' in CookerStats.h"
#endif
#define STATSVIEWER_CookerStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCookerStats *************************************************************
struct Z_Construct_UClass_UCookerStats_Statics;
STATSVIEWER_API UClass* Z_Construct_UClass_UCookerStats_NoRegister();

#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCookerStats(); \
	friend struct ::Z_Construct_UClass_UCookerStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATSVIEWER_API UClass* ::Z_Construct_UClass_UCookerStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookerStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), Z_Construct_UClass_UCookerStats_NoRegister) \
	DECLARE_SERIALIZER(UCookerStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UCookerStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UCookerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookerStats); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookerStats(UCookerStats&&) = delete; \
	UCookerStats(const UCookerStats&) = delete; \
	STATSVIEWER_API virtual ~UCookerStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_24_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookerStats;

// ********** End Class UCookerStats ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h

// ********** Begin Enum ECookerStatsObjectSets ****************************************************
#define FOREACH_ENUM_ECOOKERSTATSOBJECTSETS(op) \
	op(CookerStatsObjectSets_Default) 

enum ECookerStatsObjectSets : int;
template<> STATSVIEWER_NON_ATTRIBUTED_API UEnum* StaticEnum<ECookerStatsObjectSets>();
// ********** End Enum ECookerStatsObjectSets ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
