// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
class UObject;
class UPoseSearchDatabase;
struct FPoseSearchBlueprintResult;
struct FPoseSearchContinuingProperties;
struct FPoseSearchFutureProperties;
#ifdef POSESEARCH_PoseSearchLibrary_generated_h
#error "PoseSearchLibrary.generated.h already included, missing '#pragma once' in PoseSearchLibrary.h"
#endif
#define POSESEARCH_PoseSearchLibrary_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchFutureProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchFutureProperties>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchContinuingProperties_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchContinuingProperties>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDatabaseTags); \
	DECLARE_FUNCTION(execIsAnimationAssetLooping); \
	DECLARE_FUNCTION(execMotionMatch);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchLibrary_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchLibrary(UPoseSearchLibrary&&); \
	UPoseSearchLibrary(const UPoseSearchLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchLibrary) \
	NO_API virtual ~UPoseSearchLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_129_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h


#define FOREACH_ENUM_EPOSESEARCHINTERRUPTMODE(op) \
	op(EPoseSearchInterruptMode::DoNotInterrupt) \
	op(EPoseSearchInterruptMode::InterruptOnDatabaseChange) \
	op(EPoseSearchInterruptMode::InterruptOnDatabaseChangeAndInvalidateContinuingPose) \
	op(EPoseSearchInterruptMode::ForceInterrupt) \
	op(EPoseSearchInterruptMode::ForceInterruptAndInvalidateContinuingPose) 

enum class EPoseSearchInterruptMode : uint8;
template<> struct TIsUEnumClass<EPoseSearchInterruptMode> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchInterruptMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
