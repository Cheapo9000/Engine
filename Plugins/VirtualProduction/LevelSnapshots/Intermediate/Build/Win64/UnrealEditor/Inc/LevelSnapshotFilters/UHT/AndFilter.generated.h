// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/BlueprintOnly/AndFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_AndFilter_generated_h
#error "AndFilter.generated.h already included, missing '#pragma once' in AndFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_AndFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAndFilter ***************************************************************
struct Z_Construct_UClass_UAndFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UAndFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_AndFilter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndFilter(); \
	friend struct ::Z_Construct_UClass_UAndFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UAndFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndFilter, UParentFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UAndFilter_NoRegister) \
	DECLARE_SERIALIZER(UAndFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_AndFilter_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndFilter(UAndFilter&&) = delete; \
	UAndFilter(const UAndFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndFilter) \
	NO_API virtual ~UAndFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_AndFilter_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_AndFilter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_AndFilter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_AndFilter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndFilter;

// ********** End Class UAndFilter *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_AndFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
