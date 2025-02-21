// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendStack/BlendStackAnimNodeLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UBlendProfile;
enum class EAlphaBlendOption : uint8;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FAnimUpdateContext;
struct FBlendStackAnimNodeReference;
#ifdef BLENDSTACK_BlendStackAnimNodeLibrary_generated_h
#error "BlendStackAnimNodeLibrary.generated.h already included, missing '#pragma once' in BlendStackAnimNodeLibrary.h"
#endif
#define BLENDSTACK_BlendStackAnimNodeLibrary_generated_h

#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendStackAnimNodeReference_Statics; \
	BLENDSTACK_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> BLENDSTACK_API UScriptStruct* StaticStruct<struct FBlendStackAnimNodeReference>();

#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCurrentAssetLooping); \
	DECLARE_FUNCTION(execGetCurrentAssetTimeRemaining); \
	DECLARE_FUNCTION(execGetCurrentAssetTime); \
	DECLARE_FUNCTION(execGetCurrentAsset); \
	DECLARE_FUNCTION(execBlendToWithSettings); \
	DECLARE_FUNCTION(execBlendTo); \
	DECLARE_FUNCTION(execForceBlendNextUpdate); \
	DECLARE_FUNCTION(execConvertToBlendStackNodePure); \
	DECLARE_FUNCTION(execGetCurrentBlendStackAnimAssetTime); \
	DECLARE_FUNCTION(execGetCurrentBlendStackAnimAsset); \
	DECLARE_FUNCTION(execConvertToBlendStackNode);


#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendStackAnimNodeLibrary(); \
	friend struct Z_Construct_UClass_UBlendStackAnimNodeLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlendStackAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlendStack"), NO_API) \
	DECLARE_SERIALIZER(UBlendStackAnimNodeLibrary)


#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendStackAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlendStackAnimNodeLibrary(UBlendStackAnimNodeLibrary&&); \
	UBlendStackAnimNodeLibrary(const UBlendStackAnimNodeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendStackAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendStackAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendStackAnimNodeLibrary) \
	NO_API virtual ~UBlendStackAnimNodeLibrary();


#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_23_PROLOG
#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLENDSTACK_API UClass* StaticClass<class UBlendStackAnimNodeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackAnimNodeLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
