// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARTraceResult.h"

#ifdef AUGMENTEDREALITY_ARTraceResult_generated_h
#error "ARTraceResult.generated.h already included, missing '#pragma once' in ARTraceResult.h"
#endif
#define AUGMENTEDREALITY_ARTraceResult_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FARTraceResult ****************************************************
struct Z_Construct_UScriptStruct_FARTraceResult_Statics;
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FARTraceResult_Statics; \
	AUGMENTEDREALITY_API static class UScriptStruct* StaticStruct();


struct FARTraceResult;
// ********** End ScriptStruct FARTraceResult ******************************************************

// ********** Begin Class UARTraceResultDummy ******************************************************
struct Z_Construct_UClass_UARTraceResultDummy_Statics;
AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultDummy_NoRegister();

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTraceResultDummy(); \
	friend struct ::Z_Construct_UClass_UARTraceResultDummy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUGMENTEDREALITY_API UClass* ::Z_Construct_UClass_UARTraceResultDummy_NoRegister(); \
public: \
	DECLARE_CLASS2(UARTraceResultDummy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), Z_Construct_UClass_UARTraceResultDummy_NoRegister) \
	DECLARE_SERIALIZER(UARTraceResultDummy)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTraceResultDummy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UARTraceResultDummy(UARTraceResultDummy&&) = delete; \
	UARTraceResultDummy(const UARTraceResultDummy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTraceResultDummy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTraceResultDummy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTraceResultDummy) \
	NO_API virtual ~UARTraceResultDummy();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_73_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UARTraceResultDummy;

// ********** End Class UARTraceResultDummy ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
