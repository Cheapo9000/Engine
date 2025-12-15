// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequenceEvaluatorLibrary.h"

#ifdef ANIMGRAPHRUNTIME_SequenceEvaluatorLibrary_generated_h
#error "SequenceEvaluatorLibrary.generated.h already included, missing '#pragma once' in SequenceEvaluatorLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_SequenceEvaluatorLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FAnimUpdateContext;
struct FSequenceEvaluatorReference;

// ********** Begin ScriptStruct FSequenceEvaluatorReference ***************************************
struct Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequenceEvaluatorReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FSequenceEvaluatorReference;
// ********** End ScriptStruct FSequenceEvaluatorReference *****************************************

// ********** Begin Class USequenceEvaluatorLibrary ************************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetAccumulatedTime); \
	DECLARE_FUNCTION(execSetSequenceWithInertialBlending); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execAdvanceTime); \
	DECLARE_FUNCTION(execSetExplicitFrame); \
	DECLARE_FUNCTION(execSetExplicitTime); \
	DECLARE_FUNCTION(execConvertToSequenceEvaluatorPure); \
	DECLARE_FUNCTION(execConvertToSequenceEvaluator);


struct Z_Construct_UClass_USequenceEvaluatorLibrary_Statics;
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequenceEvaluatorLibrary_NoRegister();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequenceEvaluatorLibrary(); \
	friend struct ::Z_Construct_UClass_USequenceEvaluatorLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPHRUNTIME_API UClass* ::Z_Construct_UClass_USequenceEvaluatorLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USequenceEvaluatorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), Z_Construct_UClass_USequenceEvaluatorLibrary_NoRegister) \
	DECLARE_SERIALIZER(USequenceEvaluatorLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API USequenceEvaluatorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequenceEvaluatorLibrary(USequenceEvaluatorLibrary&&) = delete; \
	USequenceEvaluatorLibrary(const USequenceEvaluatorLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, USequenceEvaluatorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequenceEvaluatorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequenceEvaluatorLibrary) \
	ANIMGRAPHRUNTIME_API virtual ~USequenceEvaluatorLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequenceEvaluatorLibrary;

// ********** End Class USequenceEvaluatorLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequenceEvaluatorLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
