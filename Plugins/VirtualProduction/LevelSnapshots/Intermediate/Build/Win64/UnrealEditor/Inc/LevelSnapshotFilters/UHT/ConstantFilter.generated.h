// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/ConstantFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_ConstantFilter_generated_h
#error "ConstantFilter.generated.h already included, missing '#pragma once' in ConstantFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_ConstantFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConstantFilter **********************************************************
struct Z_Construct_UClass_UConstantFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UConstantFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstantFilter(); \
	friend struct ::Z_Construct_UClass_UConstantFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UConstantFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UConstantFilter, ULevelSnapshotFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UConstantFilter_NoRegister) \
	DECLARE_SERIALIZER(UConstantFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstantFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConstantFilter(UConstantFilter&&) = delete; \
	UConstantFilter(const UConstantFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstantFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstantFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstantFilter) \
	NO_API virtual ~UConstantFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConstantFilter;

// ********** End Class UConstantFilter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ConstantFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
