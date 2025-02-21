// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchInteractionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
class UObject;
struct FPoseSearchContinuingProperties;
struct FPoseSearchInteractionAvailability;
struct FPoseSearchInteractionBlueprintResult;
#ifdef POSESEARCH_PoseSearchInteractionLibrary_generated_h
#error "PoseSearchInteractionLibrary.generated.h already included, missing '#pragma once' in PoseSearchInteractionLibrary.h"
#endif
#define POSESEARCH_PoseSearchInteractionLibrary_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchInteractionAvailability_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchInteractionAvailability>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchInteractionBlueprintResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchInteractionBlueprintResult>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMontageContinuingProperties); \
	DECLARE_FUNCTION(execMotionMatchInteraction); \
	DECLARE_FUNCTION(execMotionMatchInteraction_Pure);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchInteractionLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchInteractionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchInteractionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchInteractionLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchInteractionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchInteractionLibrary(UPoseSearchInteractionLibrary&&); \
	UPoseSearchInteractionLibrary(const UPoseSearchInteractionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchInteractionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchInteractionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchInteractionLibrary) \
	NO_API virtual ~UPoseSearchInteractionLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_93_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchInteractionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
