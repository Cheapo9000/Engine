// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundCatCastingNode.h"

#ifdef METASOUNDEXPERIMENTALRUNTIME_MetasoundCatCastingNode_generated_h
#error "MetasoundCatCastingNode.generated.h already included, missing '#pragma once' in MetasoundCatCastingNode.h"
#endif
#define METASOUNDEXPERIMENTALRUNTIME_MetasoundCatCastingNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPropertyTextFName;

// ********** Begin Class UMetasoundCatCastingOptionsHelper ****************************************
#define FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCastingOptions);


struct Z_Construct_UClass_UMetasoundCatCastingOptionsHelper_Statics;
METASOUNDEXPERIMENTALRUNTIME_API UClass* Z_Construct_UClass_UMetasoundCatCastingOptionsHelper_NoRegister();

#define FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundCatCastingOptionsHelper(); \
	friend struct ::Z_Construct_UClass_UMetasoundCatCastingOptionsHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEXPERIMENTALRUNTIME_API UClass* ::Z_Construct_UClass_UMetasoundCatCastingOptionsHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundCatCastingOptionsHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundExperimentalRuntime"), Z_Construct_UClass_UMetasoundCatCastingOptionsHelper_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundCatCastingOptionsHelper)


#define FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetasoundCatCastingOptionsHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundCatCastingOptionsHelper(UMetasoundCatCastingOptionsHelper&&) = delete; \
	UMetasoundCatCastingOptionsHelper(const UMetasoundCatCastingOptionsHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetasoundCatCastingOptionsHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundCatCastingOptionsHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundCatCastingOptionsHelper) \
	NO_API virtual ~UMetasoundCatCastingOptionsHelper();


#define FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundCatCastingOptionsHelper;

// ********** End Class UMetasoundCatCastingOptionsHelper ******************************************

// ********** Begin ScriptStruct FMetaSoundCatCastingNodeConfiguration *****************************
struct Z_Construct_UScriptStruct_FMetaSoundCatCastingNodeConfiguration_Statics;
#define FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaSoundCatCastingNodeConfiguration_Statics; \
	METASOUNDEXPERIMENTALRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FMetaSoundFrontendNodeConfiguration Super;


struct FMetaSoundCatCastingNodeConfiguration;
// ********** End ScriptStruct FMetaSoundCatCastingNodeConfiguration *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MetasoundExperimental_Source_MetasoundExperimentalRuntime_Private_MetasoundCatCastingNode_h

// ********** Begin Enum EMetasoundCatCastingMethod ************************************************
#define FOREACH_ENUM_EMETASOUNDCATCASTINGMETHOD(op) \
	op(EMetasoundCatCastingMethod::ChannelDrop) \
	op(EMetasoundCatCastingMethod::MixUpOrDown) 

enum class EMetasoundCatCastingMethod : uint8;
template<> struct TIsUEnumClass<EMetasoundCatCastingMethod> { enum { Value = true }; };
template<> METASOUNDEXPERIMENTALRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetasoundCatCastingMethod>();
// ********** End Enum EMetasoundCatCastingMethod **************************************************

// ********** Begin Enum EMetasoundChannelMapMonoUpmixMethod ***************************************
#define FOREACH_ENUM_EMETASOUNDCHANNELMAPMONOUPMIXMETHOD(op) \
	op(EMetasoundChannelMapMonoUpmixMethod::Linear) \
	op(EMetasoundChannelMapMonoUpmixMethod::EqualPower) \
	op(EMetasoundChannelMapMonoUpmixMethod::FullVolume) 

enum class EMetasoundChannelMapMonoUpmixMethod : uint8;
template<> struct TIsUEnumClass<EMetasoundChannelMapMonoUpmixMethod> { enum { Value = true }; };
template<> METASOUNDEXPERIMENTALRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetasoundChannelMapMonoUpmixMethod>();
// ********** End Enum EMetasoundChannelMapMonoUpmixMethod *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
