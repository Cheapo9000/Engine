// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/PropertySelector/TransformPropertyFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_TransformPropertyFilter_generated_h
#error "TransformPropertyFilter.generated.h already included, missing '#pragma once' in TransformPropertyFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_TransformPropertyFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransformPropertyFilter *************************************************
struct Z_Construct_UClass_UTransformPropertyFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UTransformPropertyFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformPropertyFilter(); \
	friend struct ::Z_Construct_UClass_UTransformPropertyFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UTransformPropertyFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformPropertyFilter, UPropertySelectorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UTransformPropertyFilter_NoRegister) \
	DECLARE_SERIALIZER(UTransformPropertyFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransformPropertyFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformPropertyFilter(UTransformPropertyFilter&&) = delete; \
	UTransformPropertyFilter(const UTransformPropertyFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransformPropertyFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformPropertyFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformPropertyFilter) \
	NO_API virtual ~UTransformPropertyFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformPropertyFilter;

// ********** End Class UTransformPropertyFilter ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertySelector_TransformPropertyFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
