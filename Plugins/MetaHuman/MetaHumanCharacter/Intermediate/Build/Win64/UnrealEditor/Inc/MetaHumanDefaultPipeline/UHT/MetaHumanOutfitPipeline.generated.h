// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/MetaHumanOutfitPipeline.h"

#ifdef METAHUMANDEFAULTPIPELINE_MetaHumanOutfitPipeline_generated_h
#error "MetaHumanOutfitPipeline.generated.h already included, missing '#pragma once' in MetaHumanOutfitPipeline.h"
#endif
#define METAHUMANDEFAULTPIPELINE_MetaHumanOutfitPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosClothComponent;
class USkeletalMeshComponent;
struct FMetaHumanOutfitPipelineAssemblyOutput;

// ********** Begin ScriptStruct FMetaHumanOutfitGeneratedAssets ***********************************
struct Z_Construct_UScriptStruct_FMetaHumanOutfitGeneratedAssets_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanOutfitGeneratedAssets_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanOutfitGeneratedAssets;
// ********** End ScriptStruct FMetaHumanOutfitGeneratedAssets *************************************

// ********** Begin ScriptStruct FMetaHumanOutfitPipelineBuildOutput *******************************
struct Z_Construct_UScriptStruct_FMetaHumanOutfitPipelineBuildOutput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanOutfitPipelineBuildOutput_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanOutfitPipelineBuildOutput;
// ********** End ScriptStruct FMetaHumanOutfitPipelineBuildOutput *********************************

// ********** Begin ScriptStruct FMetaHumanOutfitPipelineAssemblyInput *****************************
struct Z_Construct_UScriptStruct_FMetaHumanOutfitPipelineAssemblyInput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanOutfitPipelineAssemblyInput_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanOutfitPipelineAssemblyInput;
// ********** End ScriptStruct FMetaHumanOutfitPipelineAssemblyInput *******************************

// ********** Begin ScriptStruct FMetaHumanOutfitPipelineAssemblyOutput ****************************
struct Z_Construct_UScriptStruct_FMetaHumanOutfitPipelineAssemblyOutput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanOutfitPipelineAssemblyOutput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanOutfitPipelineAssemblyOutput;
// ********** End ScriptStruct FMetaHumanOutfitPipelineAssemblyOutput ******************************

// ********** Begin ScriptStruct FMetaHumanOutfitPipelineParameterContext **************************
struct Z_Construct_UScriptStruct_FMetaHumanOutfitPipelineParameterContext_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanOutfitPipelineParameterContext_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanOutfitPipelineParameterContext;
// ********** End ScriptStruct FMetaHumanOutfitPipelineParameterContext ****************************

// ********** Begin Class UMetaHumanOutfitPipeline *************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyOutfitAssemblyOutputToMeshComponent); \
	DECLARE_FUNCTION(execApplyOutfitAssemblyOutputToClothComponent);


struct Z_Construct_UClass_UMetaHumanOutfitPipeline_Statics;
METAHUMANDEFAULTPIPELINE_API UClass* Z_Construct_UClass_UMetaHumanOutfitPipeline_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanOutfitPipeline(); \
	friend struct ::Z_Construct_UClass_UMetaHumanOutfitPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANDEFAULTPIPELINE_API UClass* ::Z_Construct_UClass_UMetaHumanOutfitPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanOutfitPipeline, UMetaHumanItemPipeline, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanDefaultPipeline"), Z_Construct_UClass_UMetaHumanOutfitPipeline_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanOutfitPipeline)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_110_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanOutfitPipeline(UMetaHumanOutfitPipeline&&) = delete; \
	UMetaHumanOutfitPipeline(const UMetaHumanOutfitPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanOutfitPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanOutfitPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanOutfitPipeline) \
	NO_API virtual ~UMetaHumanOutfitPipeline();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_107_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanOutfitPipeline;

// ********** End Class UMetaHumanOutfitPipeline ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanOutfitPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
