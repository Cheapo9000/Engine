// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/MetaHumanGroomPipeline.h"

#ifdef METAHUMANDEFAULTPIPELINE_MetaHumanGroomPipeline_generated_h
#error "MetaHumanGroomPipeline.generated.h already included, missing '#pragma once' in MetaHumanGroomPipeline.h"
#endif
#define METAHUMANDEFAULTPIPELINE_MetaHumanGroomPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGroomComponent;
struct FMetaHumanGroomPipelineAssemblyOutput;

// ********** Begin ScriptStruct FMetaHumanGroomPipelineBuildOutput ********************************
struct Z_Construct_UScriptStruct_FMetaHumanGroomPipelineBuildOutput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanGroomPipelineBuildOutput_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanGroomPipelineBuildOutput;
// ********** End ScriptStruct FMetaHumanGroomPipelineBuildOutput **********************************

// ********** Begin ScriptStruct FMetaHumanGroomPipelineAssemblyInput ******************************
struct Z_Construct_UScriptStruct_FMetaHumanGroomPipelineAssemblyInput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanGroomPipelineAssemblyInput_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanGroomPipelineAssemblyInput;
// ********** End ScriptStruct FMetaHumanGroomPipelineAssemblyInput ********************************

// ********** Begin ScriptStruct FMetaHumanGroomPipelineAssemblyOutput *****************************
struct Z_Construct_UScriptStruct_FMetaHumanGroomPipelineAssemblyOutput_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanGroomPipelineAssemblyOutput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMetaHumanGroomPipelineAssemblyOutput;
// ********** End ScriptStruct FMetaHumanGroomPipelineAssemblyOutput *******************************

// ********** Begin ScriptStruct FMetaHumanGroomPipelineParameterContext ***************************
struct Z_Construct_UScriptStruct_FMetaHumanGroomPipelineParameterContext_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanGroomPipelineParameterContext_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanGroomPipelineParameterContext;
// ********** End ScriptStruct FMetaHumanGroomPipelineParameterContext *****************************

// ********** Begin Class UMetaHumanGroomPipeline **************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyGroomAssemblyOutputToGroomComponent);


struct Z_Construct_UClass_UMetaHumanGroomPipeline_Statics;
METAHUMANDEFAULTPIPELINE_API UClass* Z_Construct_UClass_UMetaHumanGroomPipeline_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanGroomPipeline(); \
	friend struct ::Z_Construct_UClass_UMetaHumanGroomPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANDEFAULTPIPELINE_API UClass* ::Z_Construct_UClass_UMetaHumanGroomPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanGroomPipeline, UMetaHumanItemPipeline, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanDefaultPipeline"), Z_Construct_UClass_UMetaHumanGroomPipeline_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanGroomPipeline)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_70_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanGroomPipeline(UMetaHumanGroomPipeline&&) = delete; \
	UMetaHumanGroomPipeline(const UMetaHumanGroomPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanGroomPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanGroomPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanGroomPipeline) \
	NO_API virtual ~UMetaHumanGroomPipeline();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_67_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanGroomPipeline;

// ********** End Class UMetaHumanGroomPipeline ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanGroomPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
