// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/AutoRTFM/AutoRTFMTestActor.h"

#ifdef ENGINE_AutoRTFMTestActor_generated_h
#error "AutoRTFMTestActor.generated.h already included, missing '#pragma once' in AutoRTFMTestActor.h"
#endif
#define ENGINE_AutoRTFMTestActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAutoRTFMTestActor *******************************************************
struct Z_Construct_UClass_AAutoRTFMTestActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_AAutoRTFMTestActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoRTFMTestActor(); \
	friend struct ::Z_Construct_UClass_AAutoRTFMTestActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AAutoRTFMTestActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAutoRTFMTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AAutoRTFMTestActor_NoRegister) \
	DECLARE_SERIALIZER(AAutoRTFMTestActor)


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutoRTFMTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAutoRTFMTestActor(AAutoRTFMTestActor&&) = delete; \
	AAutoRTFMTestActor(const AAutoRTFMTestActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoRTFMTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoRTFMTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutoRTFMTestActor) \
	NO_API virtual ~AAutoRTFMTestActor();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAutoRTFMTestActor;

// ********** End Class AAutoRTFMTestActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
