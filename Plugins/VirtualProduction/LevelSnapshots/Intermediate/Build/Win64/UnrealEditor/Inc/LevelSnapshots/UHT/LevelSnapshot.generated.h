// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/LevelSnapshot.h"

#ifdef LEVELSNAPSHOTS_LevelSnapshot_generated_h
#error "LevelSnapshot.generated.h already included, missing '#pragma once' in LevelSnapshot.h"
#endif
#define LEVELSNAPSHOTS_LevelSnapshot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FSoftObjectPath;

// ********** Begin Class ULevelSnapshot ***********************************************************
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSnapshotDescription); \
	DECLARE_FUNCTION(execGetSnapshotName); \
	DECLARE_FUNCTION(execGetCaptureTime); \
	DECLARE_FUNCTION(execGetMapPath); \
	DECLARE_FUNCTION(execSetSnapshotDescription); \
	DECLARE_FUNCTION(execSetSnapshotName);


struct Z_Construct_UClass_ULevelSnapshot_Statics;
LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshot_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSnapshot(); \
	friend struct ::Z_Construct_UClass_ULevelSnapshot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTS_API UClass* ::Z_Construct_UClass_ULevelSnapshot_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshots"), Z_Construct_UClass_ULevelSnapshot_NoRegister) \
	DECLARE_SERIALIZER(ULevelSnapshot)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSnapshot(ULevelSnapshot&&) = delete; \
	ULevelSnapshot(const ULevelSnapshot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSnapshot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSnapshot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSnapshot) \
	NO_API virtual ~ULevelSnapshot();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSnapshot;

// ********** End Class ULevelSnapshot *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h

// ********** Begin Enum ECachedDiffResult *********************************************************
#define FOREACH_ENUM_ECACHEDDIFFRESULT(op) \
	op(ECachedDiffResult::NotInitialized) \
	op(ECachedDiffResult::HadChanges) \
	op(ECachedDiffResult::HadNoChanges) 

enum class ECachedDiffResult : uint8;
template<> struct TIsUEnumClass<ECachedDiffResult> { enum { Value = true }; };
template<> LEVELSNAPSHOTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECachedDiffResult>();
// ********** End Enum ECachedDiffResult ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
