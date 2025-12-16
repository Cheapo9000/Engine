// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendStack/BlendStackInputAnimNodeLibrary.h"

#ifdef BLENDSTACK_BlendStackInputAnimNodeLibrary_generated_h
#error "BlendStackInputAnimNodeLibrary.generated.h already included, missing '#pragma once' in BlendStackInputAnimNodeLibrary.h"
#endif
#define BLENDSTACK_BlendStackInputAnimNodeLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FBlendStackInputAnimNodeReference;

// ********** Begin ScriptStruct FBlendStackInputAnimNodeReference *********************************
struct Z_Construct_UScriptStruct_FBlendStackInputAnimNodeReference_Statics;
#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendStackInputAnimNodeReference_Statics; \
	BLENDSTACK_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FBlendStackInputAnimNodeReference;
// ********** End ScriptStruct FBlendStackInputAnimNodeReference ***********************************

// ********** Begin Class UBlendStackInputAnimNodeLibrary ******************************************
#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProperties); \
	DECLARE_FUNCTION(execConvertToBlendStackInputNodePure); \
	DECLARE_FUNCTION(execConvertToBlendStackInputNode);


struct Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_Statics;
BLENDSTACK_API UClass* Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendStackInputAnimNodeLibrary(); \
	friend struct ::Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLENDSTACK_API UClass* ::Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendStackInputAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlendStack"), Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlendStackInputAnimNodeLibrary)


#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLENDSTACK_API UBlendStackInputAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendStackInputAnimNodeLibrary(UBlendStackInputAnimNodeLibrary&&) = delete; \
	UBlendStackInputAnimNodeLibrary(const UBlendStackInputAnimNodeLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLENDSTACK_API, UBlendStackInputAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendStackInputAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendStackInputAnimNodeLibrary) \
	BLENDSTACK_API virtual ~UBlendStackInputAnimNodeLibrary();


#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_23_PROLOG
#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendStackInputAnimNodeLibrary;

// ********** End Class UBlendStackInputAnimNodeLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
