// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockAI.h"

#ifdef AITESTSUITE_MockAI_generated_h
#error "MockAI.generated.h already included, missing '#pragma once' in MockAI.h"
#endif
#define AITESTSUITE_MockAI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMockAI ******************************************************************
struct Z_Construct_UClass_UMockAI_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMockAI(); \
	friend struct ::Z_Construct_UClass_UMockAI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UMockAI_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockAI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UMockAI_NoRegister) \
	DECLARE_SERIALIZER(UMockAI)


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockAI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockAI); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockAI(UMockAI&&) = delete; \
	UMockAI(const UMockAI&) = delete;


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_29_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockAI;

// ********** End Class UMockAI ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
