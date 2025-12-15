// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavFilters/RecastFilter_UseDefaultArea.h"

#ifdef NAVIGATIONSYSTEM_RecastFilter_UseDefaultArea_generated_h
#error "RecastFilter_UseDefaultArea.generated.h already included, missing '#pragma once' in RecastFilter_UseDefaultArea.h"
#endif
#define NAVIGATIONSYSTEM_RecastFilter_UseDefaultArea_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URecastFilter_UseDefaultArea *********************************************
struct Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURecastFilter_UseDefaultArea(); \
	friend struct ::Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister(); \
public: \
	DECLARE_CLASS2(URecastFilter_UseDefaultArea, UNavigationQueryFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister) \
	DECLARE_SERIALIZER(URecastFilter_UseDefaultArea)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API URecastFilter_UseDefaultArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URecastFilter_UseDefaultArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, URecastFilter_UseDefaultArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URecastFilter_UseDefaultArea); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URecastFilter_UseDefaultArea(URecastFilter_UseDefaultArea&&) = delete; \
	URecastFilter_UseDefaultArea(const URecastFilter_UseDefaultArea&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~URecastFilter_UseDefaultArea();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_19_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_22_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URecastFilter_UseDefaultArea;

// ********** End Class URecastFilter_UseDefaultArea ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_RecastFilter_UseDefaultArea_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
