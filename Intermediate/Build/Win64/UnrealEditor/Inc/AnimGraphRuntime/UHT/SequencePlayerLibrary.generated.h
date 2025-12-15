// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencePlayerLibrary.h"

#ifdef ANIMGRAPHRUNTIME_SequencePlayerLibrary_generated_h
#error "SequencePlayerLibrary.generated.h already included, missing '#pragma once' in SequencePlayerLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_SequencePlayerLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FAnimUpdateContext;
struct FSequencePlayerReference;

// ********** Begin ScriptStruct FSequencePlayerReference ******************************************
struct Z_Construct_UScriptStruct_FSequencePlayerReference_Statics;
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSequencePlayerReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FSequencePlayerReference;
// ********** End ScriptStruct FSequencePlayerReference ********************************************

// ********** Begin Class USequencePlayerLibrary ***************************************************
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execComputePlayRateFromDuration); \
	DECLARE_FUNCTION(execGetLoopAnimation); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execGetStartPosition); \
	DECLARE_FUNCTION(execGetAccumulatedTime); \
	DECLARE_FUNCTION(execGetSequencePure); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execSetSequenceWithInertialBlending); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetStartPosition); \
	DECLARE_FUNCTION(execSetAccumulatedTime); \
	DECLARE_FUNCTION(execConvertToSequencePlayerPure); \
	DECLARE_FUNCTION(execConvertToSequencePlayer);


struct Z_Construct_UClass_USequencePlayerLibrary_Statics;
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencePlayerLibrary_NoRegister();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencePlayerLibrary(); \
	friend struct ::Z_Construct_UClass_USequencePlayerLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPHRUNTIME_API UClass* ::Z_Construct_UClass_USequencePlayerLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USequencePlayerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), Z_Construct_UClass_USequencePlayerLibrary_NoRegister) \
	DECLARE_SERIALIZER(USequencePlayerLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API USequencePlayerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USequencePlayerLibrary(USequencePlayerLibrary&&) = delete; \
	USequencePlayerLibrary(const USequencePlayerLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, USequencePlayerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencePlayerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencePlayerLibrary) \
	ANIMGRAPHRUNTIME_API virtual ~USequencePlayerLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_24_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USequencePlayerLibrary;

// ********** End Class USequencePlayerLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
