// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builtin/PropertyTypeFilter.h"

#ifdef LEVELSNAPSHOTFILTERS_PropertyTypeFilter_generated_h
#error "PropertyTypeFilter.generated.h already included, missing '#pragma once' in PropertyTypeFilter.h"
#endif
#define LEVELSNAPSHOTFILTERS_PropertyTypeFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyTypeFilter ******************************************************
struct Z_Construct_UClass_UPropertyTypeFilter_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertyTypeFilter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyTypeFilter(); \
	friend struct ::Z_Construct_UClass_UPropertyTypeFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UPropertyTypeFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyTypeFilter, UPropertySelectorFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UPropertyTypeFilter_NoRegister) \
	DECLARE_SERIALIZER(UPropertyTypeFilter)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyTypeFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyTypeFilter(UPropertyTypeFilter&&) = delete; \
	UPropertyTypeFilter(const UPropertyTypeFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyTypeFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyTypeFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyTypeFilter) \
	NO_API virtual ~UPropertyTypeFilter();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_60_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyTypeFilter;

// ********** End Class UPropertyTypeFilter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_PropertyTypeFilter_h

// ********** Begin Enum EBlueprintPropertyType ****************************************************
#define FOREACH_ENUM_EBLUEPRINTPROPERTYTYPE(op) \
	op(EBlueprintPropertyType::Byte) \
	op(EBlueprintPropertyType::Int) \
	op(EBlueprintPropertyType::Int64) \
	op(EBlueprintPropertyType::Bool) \
	op(EBlueprintPropertyType::Float) \
	op(EBlueprintPropertyType::ObjectReference) \
	op(EBlueprintPropertyType::Name) \
	op(EBlueprintPropertyType::Interface) \
	op(EBlueprintPropertyType::Struct) \
	op(EBlueprintPropertyType::String) \
	op(EBlueprintPropertyType::Text) \
	op(EBlueprintPropertyType::WeakObjectReference) \
	op(EBlueprintPropertyType::SoftObjectReference) \
	op(EBlueprintPropertyType::Double) \
	op(EBlueprintPropertyType::Array) \
	op(EBlueprintPropertyType::Map) \
	op(EBlueprintPropertyType::Set) 

namespace EBlueprintPropertyType { enum Type : int; }
template<> LEVELSNAPSHOTFILTERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintPropertyType::Type>();
// ********** End Enum EBlueprintPropertyType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
