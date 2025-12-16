// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/PropertySelector/PropertySelectorFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_PropertySelectorFilter_generated_h
#error "PropertySelectorFilter.generated.h already included, missing '#pragma once' in PropertySelectorFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_PropertySelectorFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertySelectorFilter **************************************************
struct Z_Construct_UClass_UPropertySelectorFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertySelectorFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertySelectorFilter(); \
	friend struct ::Z_Construct_UClass_UPropertySelectorFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UPropertySelectorFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertySelectorFilter, ULevelSnapshotBlueprintFilter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UPropertySelectorFilter_NoRegister) \
	DECLARE_SERIALIZER(UPropertySelectorFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertySelectorFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertySelectorFilter(UPropertySelectorFilter&&) = delete; \
	UPropertySelectorFilter(const UPropertySelectorFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertySelectorFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertySelectorFilter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertySelectorFilter) \
	NO_API virtual ~UPropertySelectorFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertySelectorFilter;

// ********** End Class UPropertySelectorFilter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_PropertySelectorFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
