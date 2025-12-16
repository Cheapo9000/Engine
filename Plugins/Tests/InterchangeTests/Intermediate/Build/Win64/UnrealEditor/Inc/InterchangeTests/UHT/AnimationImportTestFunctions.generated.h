// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/AnimationImportTestFunctions.h"

#ifdef INTERCHANGETESTS_AnimationImportTestFunctions_generated_h
#error "AnimationImportTestFunctions.generated.h already included, missing '#pragma once' in AnimationImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_AnimationImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
struct FInterchangeTestFunctionResult;

// ********** Begin Class UAnimationImportTestFunctions ********************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckCurveKeyLeaveTangentWeight); \
	DECLARE_FUNCTION(execCheckCurveKeyLeaveTangent); \
	DECLARE_FUNCTION(execCheckCurveKeyArriveTangentWeight); \
	DECLARE_FUNCTION(execCheckCurveKeyArriveTangent); \
	DECLARE_FUNCTION(execCheckCurveKeyValue); \
	DECLARE_FUNCTION(execCheckCurveKeyTime); \
	DECLARE_FUNCTION(execCheckAnimationFrameNumber); \
	DECLARE_FUNCTION(execCheckAnimationLength); \
	DECLARE_FUNCTION(execCheckImportedAnimSequenceCount);


struct Z_Construct_UClass_UAnimationImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UAnimationImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_UAnimationImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UAnimationImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UAnimationImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UAnimationImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UAnimationImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationImportTestFunctions(UAnimationImportTestFunctions&&) = delete; \
	UAnimationImportTestFunctions(const UAnimationImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UAnimationImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~UAnimationImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_13_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationImportTestFunctions;

// ********** End Class UAnimationImportTestFunctions **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_AnimationImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
