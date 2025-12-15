// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LinkedAnimGraphLibrary.h"

#ifdef ANIMGRAPHRUNTIME_LinkedAnimGraphLibrary_generated_h
#error "LinkedAnimGraphLibrary.generated.h already included, missing '#pragma once' in LinkedAnimGraphLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_LinkedAnimGraphLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FLinkedAnimGraphReference;

// ********** Begin ScriptStruct FLinkedAnimGraphReference *****************************************
struct Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLinkedAnimGraphReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FLinkedAnimGraphReference;
// ********** End ScriptStruct FLinkedAnimGraphReference *******************************************

// ********** Begin Class ULinkedAnimGraphLibrary **************************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLinkedAnimInstance); \
	DECLARE_FUNCTION(execHasLinkedAnimInstance); \
	DECLARE_FUNCTION(execConvertToLinkedAnimGraphPure); \
	DECLARE_FUNCTION(execConvertToLinkedAnimGraph);


struct Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics;
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_ULinkedAnimGraphLibrary_NoRegister();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkedAnimGraphLibrary(); \
	friend struct ::Z_Construct_UClass_ULinkedAnimGraphLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPHRUNTIME_API UClass* ::Z_Construct_UClass_ULinkedAnimGraphLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULinkedAnimGraphLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), Z_Construct_UClass_ULinkedAnimGraphLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULinkedAnimGraphLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API ULinkedAnimGraphLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULinkedAnimGraphLibrary(ULinkedAnimGraphLibrary&&) = delete; \
	ULinkedAnimGraphLibrary(const ULinkedAnimGraphLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, ULinkedAnimGraphLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkedAnimGraphLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkedAnimGraphLibrary) \
	ANIMGRAPHRUNTIME_API virtual ~ULinkedAnimGraphLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_21_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULinkedAnimGraphLibrary;

// ********** End Class ULinkedAnimGraphLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_LinkedAnimGraphLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
