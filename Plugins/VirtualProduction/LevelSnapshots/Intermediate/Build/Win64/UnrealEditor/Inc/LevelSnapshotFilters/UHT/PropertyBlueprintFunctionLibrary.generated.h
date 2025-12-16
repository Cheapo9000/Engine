// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertyBlueprintFunctionLibrary.h"

#ifdef LEVELSNAPSHOTFILTERS_PropertyBlueprintFunctionLibrary_generated_h
#error "PropertyBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in PropertyBlueprintFunctionLibrary.h"
#endif
#define LEVELSNAPSHOTFILTERS_PropertyBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
struct FIsDeletedActorValidParams;

class FProperty;

// ********** Begin Class UPropertyBlueprintFunctionLibrary ****************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActorClassFromDeletedParams); \
	DECLARE_FUNCTION(execLoadSnapshotActor); \
	DECLARE_FUNCTION(execGetPropertyName); \
	DECLARE_FUNCTION(execGetPropertyOriginPath);


struct Z_Construct_UClass_UPropertyBlueprintFunctionLibrary_Statics;
LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UPropertyBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UPropertyBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTFILTERS_API UClass* ::Z_Construct_UClass_UPropertyBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotFilters"), Z_Construct_UClass_UPropertyBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPropertyBlueprintFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyBlueprintFunctionLibrary(UPropertyBlueprintFunctionLibrary&&) = delete; \
	UPropertyBlueprintFunctionLibrary(const UPropertyBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBlueprintFunctionLibrary) \
	NO_API virtual ~UPropertyBlueprintFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyBlueprintFunctionLibrary;

// ********** End Class UPropertyBlueprintFunctionLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
