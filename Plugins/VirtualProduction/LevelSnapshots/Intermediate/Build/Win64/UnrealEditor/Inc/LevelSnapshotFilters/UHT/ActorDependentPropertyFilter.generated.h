// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/ActorDependentPropertyFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_ActorDependentPropertyFilter_generated_h
#error "ActorDependentPropertyFilter.generated.h already included, missing '#pragma once' in ActorDependentPropertyFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_ActorDependentPropertyFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorDependentPropertyFilter ********************************************
struct Z_Construct_UClass_UActorDependentPropertyFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorDependentPropertyFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorDependentPropertyFilter(); \
	friend struct ::Z_Construct_UClass_UActorDependentPropertyFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UActorDependentPropertyFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorDependentPropertyFilter, ULevelSnapshotFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UActorDependentPropertyFilter_NoRegister) \
	DECLARE_SERIALIZER(UActorDependentPropertyFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorDependentPropertyFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorDependentPropertyFilter(UActorDependentPropertyFilter&&) = delete; \
	UActorDependentPropertyFilter(const UActorDependentPropertyFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorDependentPropertyFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorDependentPropertyFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorDependentPropertyFilter) \
	NO_API virtual ~UActorDependentPropertyFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_30_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorDependentPropertyFilter;

// ********** End Class UActorDependentPropertyFilter **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h

// ********** Begin Enum EDoNotCareHandling ********************************************************
#define FOREACH_ENUM_EDONOTCAREHANDLING(op) \
	op(EDoNotCareHandling::UseIncludeFilter) \
	op(EDoNotCareHandling::UseExcludeFilter) \
	op(EDoNotCareHandling::UseDoNotCareFilter) 

enum class EDoNotCareHandling;
template<> struct TIsUEnumClass<EDoNotCareHandling> { enum { Value = true }; };
template<> LEVELSNAPSHOTFILTERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EDoNotCareHandling>();
// ********** End Enum EDoNotCareHandling **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
