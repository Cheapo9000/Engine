// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FilterBlueprintFunctionLibrary.h"

#ifdef LEVELSNAPSHOTFILTERS_FilterBlueprintFunctionLibrary_generated_h
#error "FilterBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in FilterBlueprintFunctionLibrary.h"
#endif
#define LEVELSNAPSHOTFILTERS_FilterBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULevelSnapshotFilter;
class UObject;

// ********** Begin Class UFilterBlueprintFunctionLibrary ******************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateFilterByClass);


struct Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UFilterBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilterBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UFilterBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UFilterBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UFilterBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UFilterBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UFilterBlueprintFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilterBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFilterBlueprintFunctionLibrary(UFilterBlueprintFunctionLibrary&&) = delete; \
	UFilterBlueprintFunctionLibrary(const UFilterBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilterBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilterBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilterBlueprintFunctionLibrary) \
	NO_API virtual ~UFilterBlueprintFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFilterBlueprintFunctionLibrary;

// ********** End Class UFilterBlueprintFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_FilterBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
