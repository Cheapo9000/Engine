// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSnapshotsFunctionLibrary.h"

#ifdef LEVELSNAPSHOTS_LevelSnapshotsFunctionLibrary_generated_h
#error "LevelSnapshotsFunctionLibrary.generated.h already included, missing '#pragma once' in LevelSnapshotsFunctionLibrary.h"
#endif
#define LEVELSNAPSHOTS_LevelSnapshotsFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSnapshot;
class ULevelSnapshotFilter;
class UObject;

// ********** Begin Class ULevelSnapshotsFunctionLibrary *******************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplySnapshotToWorld); \
	DECLARE_FUNCTION(execTakeLevelSnapshot);


struct Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics;
LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSnapshotsFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTS_API UClass* ::Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSnapshotsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshots"), Z_Construct_UClass_ULevelSnapshotsFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULevelSnapshotsFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSnapshotsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSnapshotsFunctionLibrary(ULevelSnapshotsFunctionLibrary&&) = delete; \
	ULevelSnapshotsFunctionLibrary(const ULevelSnapshotsFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSnapshotsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSnapshotsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSnapshotsFunctionLibrary) \
	NO_API virtual ~ULevelSnapshotsFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSnapshotsFunctionLibrary;

// ********** End Class ULevelSnapshotsFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_LevelSnapshotsFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
