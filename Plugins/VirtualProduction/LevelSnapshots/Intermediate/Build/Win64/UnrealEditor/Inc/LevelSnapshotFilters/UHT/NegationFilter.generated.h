// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/BlueprintOnly/NegationFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_NegationFilter_generated_h
#error "NegationFilter.generated.h already included, missing '#pragma once' in NegationFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_NegationFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULevelSnapshotFilter;

// ********** Begin Class UNegationFilter **********************************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChild); \
	DECLARE_FUNCTION(execSetExternalChild); \
	DECLARE_FUNCTION(execCreateChild);


struct Z_Construct_UClass_UNegationFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UNegationFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNegationFilter(); \
	friend struct ::Z_Construct_UClass_UNegationFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UNegationFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNegationFilter, ULevelSnapshotFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UNegationFilter_NoRegister) \
	DECLARE_SERIALIZER(UNegationFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNegationFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNegationFilter(UNegationFilter&&) = delete; \
	UNegationFilter(const UNegationFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNegationFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNegationFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNegationFilter) \
	NO_API virtual ~UNegationFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNegationFilter;

// ********** End Class UNegationFilter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
