// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/AutoRTFM/AutoRTFMTestAnotherActor.h"

#ifdef ENGINE_AutoRTFMTestAnotherActor_generated_h
#error "AutoRTFMTestAnotherActor.generated.h already included, missing '#pragma once' in AutoRTFMTestAnotherActor.h"
#endif
#define ENGINE_AutoRTFMTestAnotherActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAutoRTFMTestAnotherActor ************************************************
struct Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_AAutoRTFMTestAnotherActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoRTFMTestAnotherActor(); \
	friend struct ::Z_Construct_UClass_AAutoRTFMTestAnotherActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_AAutoRTFMTestAnotherActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAutoRTFMTestAnotherActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_AAutoRTFMTestAnotherActor_NoRegister) \
	DECLARE_SERIALIZER(AAutoRTFMTestAnotherActor)


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutoRTFMTestAnotherActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAutoRTFMTestAnotherActor(AAutoRTFMTestAnotherActor&&) = delete; \
	AAutoRTFMTestAnotherActor(const AAutoRTFMTestAnotherActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoRTFMTestAnotherActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoRTFMTestAnotherActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutoRTFMTestAnotherActor) \
	NO_API virtual ~AAutoRTFMTestAnotherActor();


#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAutoRTFMTestAnotherActor;

// ********** End Class AAutoRTFMTestAnotherActor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestAnotherActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
