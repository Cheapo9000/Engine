// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMergingLibrary.h"

#ifdef SKELETALMERGING_SkeletalMergingLibrary_generated_h
#error "SkeletalMergingLibrary.generated.h already included, missing '#pragma once' in SkeletalMergingLibrary.h"
#endif
#define SKELETALMERGING_SkeletalMergingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class USkeleton;
struct FSkeletalMeshMergeParams;
struct FSkeletonMergeParams;

// ********** Begin ScriptStruct FSkeletalMeshMergeParams ******************************************
struct Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics;
#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics; \
	SKELETALMERGING_API static class UScriptStruct* StaticStruct();


struct FSkeletalMeshMergeParams;
// ********** End ScriptStruct FSkeletalMeshMergeParams ********************************************

// ********** Begin ScriptStruct FSkeletonMergeParams **********************************************
struct Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics;
#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics; \
	SKELETALMERGING_API static class UScriptStruct* StaticStruct();


struct FSkeletonMergeParams;
// ********** End ScriptStruct FSkeletonMergeParams ************************************************

// ********** Begin Class USkeletalMergingLibrary **************************************************
#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMergeSkeletons); \
	DECLARE_FUNCTION(execMergeMeshes);


struct Z_Construct_UClass_USkeletalMergingLibrary_Statics;
SKELETALMERGING_API UClass* Z_Construct_UClass_USkeletalMergingLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMergingLibrary(); \
	friend struct ::Z_Construct_UClass_USkeletalMergingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMERGING_API UClass* ::Z_Construct_UClass_USkeletalMergingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMergingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkeletalMerging"), Z_Construct_UClass_USkeletalMergingLibrary_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMergingLibrary)


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETALMERGING_API USkeletalMergingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMergingLibrary(USkeletalMergingLibrary&&) = delete; \
	USkeletalMergingLibrary(const USkeletalMergingLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMERGING_API, USkeletalMergingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMergingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMergingLibrary) \
	SKELETALMERGING_API virtual ~USkeletalMergingLibrary();


#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_103_PROLOG
#define FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMergingLibrary;

// ********** End Class USkeletalMergingLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
