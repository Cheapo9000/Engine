// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockAI_BT.h"

#ifdef AITESTSUITE_MockAI_BT_generated_h
#error "MockAI_BT.generated.h already included, missing '#pragma once' in MockAI_BT.h"
#endif
#define AITESTSUITE_MockAI_BT_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMockAI_BT ***************************************************************
struct Z_Construct_UClass_UMockAI_BT_Statics;
AITESTSUITE_API UClass* Z_Construct_UClass_UMockAI_BT_NoRegister();

#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMockAI_BT(); \
	friend struct ::Z_Construct_UClass_UMockAI_BT_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AITESTSUITE_API UClass* ::Z_Construct_UClass_UMockAI_BT_NoRegister(); \
public: \
	DECLARE_CLASS2(UMockAI_BT, UMockAI, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), Z_Construct_UClass_UMockAI_BT_NoRegister) \
	DECLARE_SERIALIZER(UMockAI_BT)


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockAI_BT(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockAI_BT) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockAI_BT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockAI_BT); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMockAI_BT(UMockAI_BT&&) = delete; \
	UMockAI_BT(const UMockAI_BT&) = delete; \
	NO_API virtual ~UMockAI_BT();


#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_13_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_16_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMockAI_BT;

// ********** End Class UMockAI_BT *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_MockAI_BT_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
