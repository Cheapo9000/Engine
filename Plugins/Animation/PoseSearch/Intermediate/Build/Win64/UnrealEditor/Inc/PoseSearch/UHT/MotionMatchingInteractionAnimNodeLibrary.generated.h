// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/MotionMatchingInteractionAnimNodeLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FMotionMatchingInteractionAnimNodeReference;
struct FPoseSearchInteractionAvailability;
#ifdef POSESEARCH_MotionMatchingInteractionAnimNodeLibrary_generated_h
#error "MotionMatchingInteractionAnimNodeLibrary.generated.h already included, missing '#pragma once' in MotionMatchingInteractionAnimNodeLibrary.h"
#endif
#define POSESEARCH_MotionMatchingInteractionAnimNodeLibrary_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingInteractionAnimNodeReference_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FMotionMatchingInteractionAnimNodeReference>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotationWarpLerp); \
	DECLARE_FUNCTION(execGetTranslationWarpLerp); \
	DECLARE_FUNCTION(execSetAvailabilities); \
	DECLARE_FUNCTION(execConvertToMotionMatchingInteractionNodePure); \
	DECLARE_FUNCTION(execConvertToMotionMatchingInteractionNode);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionMatchingInteractionAnimNodeLibrary(); \
	friend struct Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionMatchingInteractionAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UMotionMatchingInteractionAnimNodeLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionMatchingInteractionAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMotionMatchingInteractionAnimNodeLibrary(UMotionMatchingInteractionAnimNodeLibrary&&); \
	UMotionMatchingInteractionAnimNodeLibrary(const UMotionMatchingInteractionAnimNodeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionMatchingInteractionAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionMatchingInteractionAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionMatchingInteractionAnimNodeLibrary) \
	NO_API virtual ~UMotionMatchingInteractionAnimNodeLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UMotionMatchingInteractionAnimNodeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
