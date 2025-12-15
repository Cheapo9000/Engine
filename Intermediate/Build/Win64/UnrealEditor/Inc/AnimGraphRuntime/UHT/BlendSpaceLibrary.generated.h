// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlendSpaceLibrary.h"

#ifdef ANIMGRAPHRUNTIME_BlendSpaceLibrary_generated_h
#error "BlendSpaceLibrary.generated.h already included, missing '#pragma once' in BlendSpaceLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_BlendSpaceLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FBlendSpaceReference;

// ********** Begin ScriptStruct FBlendSpaceReference **********************************************
struct Z_Construct_UScriptStruct_FBlendSpaceReference_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendSpaceReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FBlendSpaceReference;
// ********** End ScriptStruct FBlendSpaceReference ************************************************

// ********** Begin Class UBlendSpaceLibrary *******************************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSnapToPosition); \
	DECLARE_FUNCTION(execGetFilteredPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execConvertToBlendSpacePure); \
	DECLARE_FUNCTION(execConvertToBlendSpace);


struct Z_Construct_UClass_UBlendSpaceLibrary_Statics;
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UBlendSpaceLibrary_NoRegister();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpaceLibrary(); \
	friend struct ::Z_Construct_UClass_UBlendSpaceLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPHRUNTIME_API UClass* ::Z_Construct_UClass_UBlendSpaceLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlendSpaceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), Z_Construct_UClass_UBlendSpaceLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlendSpaceLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UBlendSpaceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlendSpaceLibrary(UBlendSpaceLibrary&&) = delete; \
	UBlendSpaceLibrary(const UBlendSpaceLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UBlendSpaceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpaceLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpaceLibrary) \
	ANIMGRAPHRUNTIME_API virtual ~UBlendSpaceLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlendSpaceLibrary;

// ********** End Class UBlendSpaceLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BlendSpaceLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
