// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/MetaHumanSkeletalMeshPipeline.h"

#ifdef METAHUMANDEFAULTPIPELINE_MetaHumanSkeletalMeshPipeline_generated_h
#error "MetaHumanSkeletalMeshPipeline.generated.h already included, missing '#pragma once' in MetaHumanSkeletalMeshPipeline.h"
#endif
#define METAHUMANDEFAULTPIPELINE_MetaHumanSkeletalMeshPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FMetaHumanSkeletalMeshPipelineAssemblyOutput;

// ********** Begin ScriptStruct FMetaHumanSkeletalMeshPipelineBuildOutput *************************
struct Z_Construct_UScriptStruct_FMetaHumanSkeletalMeshPipelineBuildOutput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanSkeletalMeshPipelineBuildOutput_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanSkeletalMeshPipelineBuildOutput;
// ********** End ScriptStruct FMetaHumanSkeletalMeshPipelineBuildOutput ***************************

// ********** Begin ScriptStruct FMetaHumanSkeletalMeshPipelineAssemblyInput ***********************
struct Z_Construct_UScriptStruct_FMetaHumanSkeletalMeshPipelineAssemblyInput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanSkeletalMeshPipelineAssemblyInput_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanSkeletalMeshPipelineAssemblyInput;
// ********** End ScriptStruct FMetaHumanSkeletalMeshPipelineAssemblyInput *************************

// ********** Begin ScriptStruct FMetaHumanSkeletalMeshPipelineAssemblyOutput **********************
struct Z_Construct_UScriptStruct_FMetaHumanSkeletalMeshPipelineAssemblyOutput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanSkeletalMeshPipelineAssemblyOutput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanSkeletalMeshPipelineAssemblyOutput;
// ********** End ScriptStruct FMetaHumanSkeletalMeshPipelineAssemblyOutput ************************

// ********** Begin ScriptStruct FMetaHumanSkeletalMeshPipelineParameterContext ********************
struct Z_Construct_UScriptStruct_FMetaHumanSkeletalMeshPipelineParameterContext_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanSkeletalMeshPipelineParameterContext_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanSkeletalMeshPipelineParameterContext;
// ********** End ScriptStruct FMetaHumanSkeletalMeshPipelineParameterContext **********************

// ********** Begin Class UMetaHumanSkeletalMeshPipeline *******************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplySkeletalMeshAssemblyOutputToSkeletalMeshComponent);


struct Z_Construct_UClass_UMetaHumanSkeletalMeshPipeline_Statics;
METAHUMANDEFAULTPIPELINE_API UClass* Z_Construct_UClass_UMetaHumanSkeletalMeshPipeline_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanSkeletalMeshPipeline(); \
	friend struct ::Z_Construct_UClass_UMetaHumanSkeletalMeshPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANDEFAULTPIPELINE_API UClass* ::Z_Construct_UClass_UMetaHumanSkeletalMeshPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanSkeletalMeshPipeline, UMetaHumanItemPipeline, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanDefaultPipeline"), Z_Construct_UClass_UMetaHumanSkeletalMeshPipeline_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanSkeletalMeshPipeline)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanSkeletalMeshPipeline(UMetaHumanSkeletalMeshPipeline&&) = delete; \
	UMetaHumanSkeletalMeshPipeline(const UMetaHumanSkeletalMeshPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanSkeletalMeshPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanSkeletalMeshPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanSkeletalMeshPipeline) \
	NO_API virtual ~UMetaHumanSkeletalMeshPipeline();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_76_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanSkeletalMeshPipeline;

// ********** End Class UMetaHumanSkeletalMeshPipeline *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanSkeletalMeshPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
