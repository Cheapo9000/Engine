// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendStack/BlendStackInputAnimNodeLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FBlendStackInputAnimNodeReference;
#ifdef BLENDSTACK_BlendStackInputAnimNodeLibrary_generated_h
#error "BlendStackInputAnimNodeLibrary.generated.h already included, missing '#pragma once' in BlendStackInputAnimNodeLibrary.h"
#endif
#define BLENDSTACK_BlendStackInputAnimNodeLibrary_generated_h

#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendStackInputAnimNodeReference_Statics; \
	BLENDSTACK_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> BLENDSTACK_API UScriptStruct* StaticStruct<struct FBlendStackInputAnimNodeReference>();

#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProperties); \
	DECLARE_FUNCTION(execConvertToBlendStackInputNodePure); \
	DECLARE_FUNCTION(execConvertToBlendStackInputNode);


#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendStackInputAnimNodeLibrary(); \
	friend struct Z_Construct_UClass_UBlendStackInputAnimNodeLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlendStackInputAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlendStack"), NO_API) \
	DECLARE_SERIALIZER(UBlendStackInputAnimNodeLibrary)


#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlendStackInputAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlendStackInputAnimNodeLibrary(UBlendStackInputAnimNodeLibrary&&); \
	UBlendStackInputAnimNodeLibrary(const UBlendStackInputAnimNodeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlendStackInputAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendStackInputAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendStackInputAnimNodeLibrary) \
	NO_API virtual ~UBlendStackInputAnimNodeLibrary();


#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_21_PROLOG
#define FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLENDSTACK_API UClass* StaticClass<class UBlendStackInputAnimNodeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendStack_Source_Runtime_Public_BlendStack_BlendStackInputAnimNodeLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
