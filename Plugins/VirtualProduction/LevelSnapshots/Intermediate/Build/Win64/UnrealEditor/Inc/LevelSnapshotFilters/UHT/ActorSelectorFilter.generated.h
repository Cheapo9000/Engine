// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/ActorSelector/ActorSelectorFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_ActorSelectorFilter_generated_h
#error "ActorSelectorFilter.generated.h already included, missing '#pragma once' in ActorSelectorFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_ActorSelectorFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorSelectorFilter *****************************************************
struct Z_Construct_UClass_UActorSelectorFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorSelectorFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorSelector_ActorSelectorFilter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSelectorFilter(); \
	friend struct ::Z_Construct_UClass_UActorSelectorFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UActorSelectorFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorSelectorFilter, ULevelSnapshotBlueprintFilter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UActorSelectorFilter_NoRegister) \
	DECLARE_SERIALIZER(UActorSelectorFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorSelector_ActorSelectorFilter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSelectorFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorSelectorFilter(UActorSelectorFilter&&) = delete; \
	UActorSelectorFilter(const UActorSelectorFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSelectorFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSelectorFilter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSelectorFilter) \
	NO_API virtual ~UActorSelectorFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorSelector_ActorSelectorFilter_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorSelector_ActorSelectorFilter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorSelector_ActorSelectorFilter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorSelector_ActorSelectorFilter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorSelectorFilter;

// ********** End Class UActorSelectorFilter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorSelector_ActorSelectorFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
