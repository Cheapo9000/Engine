// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendListBaseLibrary.h"

#ifdef ANIMGRAPHRUNTIME_BlendListBaseLibrary_generated_h
#error "BlendListBaseLibrary.generated.h already included, missing '#pragma once' in BlendListBaseLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_BlendListBaseLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FBlendListBaseReference;

// ********** Begin ScriptStruct FBlendListBaseReference *******************************************
struct Z_Construct_UScriptStruct_FBlendListBaseReference_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendListBaseReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FBlendListBaseReference;
// ********** End ScriptStruct FBlendListBaseReference *********************************************

// ********** Begin Class UBlendListBaseLibrary ****************************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetNode); \
	DECLARE_FUNCTION(execConvertToBlendListBase);


struct Z_Construct_UClass_UBlendListBaseLibrary_Statics;
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UBlendListBaseLibrary_NoRegister();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendListBaseLibrary(); \
	friend struct ::Z_Construct_UClass_UBlendListBaseLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPHRUNTIME_API UClass* ::Z_Construct_UClass_UBlendListBaseLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendListBaseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), Z_Construct_UClass_UBlendListBaseLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlendListBaseLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UBlendListBaseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendListBaseLibrary(UBlendListBaseLibrary&&) = delete; \
	UBlendListBaseLibrary(const UBlendListBaseLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UBlendListBaseLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendListBaseLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendListBaseLibrary) \
	ANIMGRAPHRUNTIME_API virtual ~UBlendListBaseLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_21_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendListBaseLibrary;

// ********** End Class UBlendListBaseLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendListBaseLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
