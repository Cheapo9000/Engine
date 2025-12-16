// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/ActorHasTagFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_ActorHasTagFilter_generated_h
#error "ActorHasTagFilter.generated.h already included, missing '#pragma once' in ActorHasTagFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_ActorHasTagFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorHasTagFilter *******************************************************
struct Z_Construct_UClass_UActorHasTagFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorHasTagFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorHasTagFilter(); \
	friend struct ::Z_Construct_UClass_UActorHasTagFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UActorHasTagFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorHasTagFilter, UActorSelectorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UActorHasTagFilter_NoRegister) \
	DECLARE_SERIALIZER(UActorHasTagFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorHasTagFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorHasTagFilter(UActorHasTagFilter&&) = delete; \
	UActorHasTagFilter(const UActorHasTagFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorHasTagFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorHasTagFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorHasTagFilter) \
	NO_API virtual ~UActorHasTagFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_36_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorHasTagFilter;

// ********** End Class UActorHasTagFilter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorHasTagFilter_h

// ********** Begin Enum EActorToCheck *************************************************************
#define FOREACH_ENUM_EACTORTOCHECK(op) \
	op(EActorToCheck::WorldActor) \
	op(EActorToCheck::SnapshotActor) \
	op(EActorToCheck::Both) 

namespace EActorToCheck { enum Type : int; }
template<> LEVELSNAPSHOTFILTERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EActorToCheck::Type>();
// ********** End Enum EActorToCheck ***************************************************************

// ********** Begin Enum ETagCheckingBehavior ******************************************************
#define FOREACH_ENUM_ETAGCHECKINGBEHAVIOR(op) \
	op(ETagCheckingBehavior::HasAllTags) \
	op(ETagCheckingBehavior::HasAnyTag) 

namespace ETagCheckingBehavior { enum Type : int; }
template<> LEVELSNAPSHOTFILTERS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETagCheckingBehavior::Type>();
// ********** End Enum ETagCheckingBehavior ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
