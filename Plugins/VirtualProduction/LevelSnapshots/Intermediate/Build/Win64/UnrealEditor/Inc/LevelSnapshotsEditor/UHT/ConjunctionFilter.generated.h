// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Filters/ConjunctionFilter.h"

#ifdef LEVELSNAPSHOTSEDITOR_ConjunctionFilter_generated_h
#error "ConjunctionFilter.generated.h already included, missing '#pragma once' in ConjunctionFilter.h"
#endif
#define LEVELSNAPSHOTSEDITOR_ConjunctionFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConjunctionFilter *******************************************************
struct Z_Construct_UClass_UConjunctionFilter_Statics;
LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UConjunctionFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConjunctionFilter(); \
	friend struct ::Z_Construct_UClass_UConjunctionFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTSEDITOR_API UClass* ::Z_Construct_UClass_UConjunctionFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UConjunctionFilter, ULevelSnapshotFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotsEditor"), Z_Construct_UClass_UConjunctionFilter_NoRegister) \
	DECLARE_SERIALIZER(UConjunctionFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConjunctionFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConjunctionFilter(UConjunctionFilter&&) = delete; \
	UConjunctionFilter(const UConjunctionFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConjunctionFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConjunctionFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConjunctionFilter) \
	NO_API virtual ~UConjunctionFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConjunctionFilter;

// ********** End Class UConjunctionFilter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_Filters_ConjunctionFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
