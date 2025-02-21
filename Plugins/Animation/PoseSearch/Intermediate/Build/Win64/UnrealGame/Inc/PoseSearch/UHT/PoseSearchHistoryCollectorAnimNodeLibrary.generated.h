// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchHistoryCollectorAnimNodeLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FPoseSearchHistoryCollectorAnimNodeReference;
struct FPoseSearchQueryTrajectory;
#ifdef POSESEARCH_PoseSearchHistoryCollectorAnimNodeLibrary_generated_h
#error "PoseSearchHistoryCollectorAnimNodeLibrary.generated.h already included, missing '#pragma once' in PoseSearchHistoryCollectorAnimNodeLibrary.h"
#endif
#define POSESEARCH_PoseSearchHistoryCollectorAnimNodeLibrary_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchHistoryCollectorAnimNodeReference>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPoseHistoryNodeTrajectory); \
	DECLARE_FUNCTION(execGetPoseHistoryNodeTrajectory); \
	DECLARE_FUNCTION(execConvertToPoseHistoryNodePure); \
	DECLARE_FUNCTION(execConvertToPoseHistoryNode);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchHistoryCollectorAnimNodeLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchHistoryCollectorAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchHistoryCollectorAnimNodeLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchHistoryCollectorAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchHistoryCollectorAnimNodeLibrary(UPoseSearchHistoryCollectorAnimNodeLibrary&&); \
	UPoseSearchHistoryCollectorAnimNodeLibrary(const UPoseSearchHistoryCollectorAnimNodeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchHistoryCollectorAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchHistoryCollectorAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchHistoryCollectorAnimNodeLibrary) \
	NO_API virtual ~UPoseSearchHistoryCollectorAnimNodeLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_21_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchHistoryCollectorAnimNodeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
