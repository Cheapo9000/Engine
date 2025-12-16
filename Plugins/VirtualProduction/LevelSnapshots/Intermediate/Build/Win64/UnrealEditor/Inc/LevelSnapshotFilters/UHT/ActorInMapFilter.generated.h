// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/ActorInMapFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_ActorInMapFilter_generated_h
#error "ActorInMapFilter.generated.h already included, missing '#pragma once' in ActorInMapFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_ActorInMapFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorInMapFilter ********************************************************
struct Z_Construct_UClass_UActorInMapFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorInMapFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorInMapFilter(); \
	friend struct ::Z_Construct_UClass_UActorInMapFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UActorInMapFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorInMapFilter, UActorSelectorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UActorInMapFilter_NoRegister) \
	DECLARE_SERIALIZER(UActorInMapFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorInMapFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorInMapFilter(UActorInMapFilter&&) = delete; \
	UActorInMapFilter(const UActorInMapFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorInMapFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorInMapFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorInMapFilter) \
	NO_API virtual ~UActorInMapFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorInMapFilter;

// ********** End Class UActorInMapFilter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorInMapFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
