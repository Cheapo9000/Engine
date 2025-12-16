// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CQTestGameMode.h"

#ifdef CQTESTTESTS_CQTestGameMode_generated_h
#error "CQTestGameMode.generated.h already included, missing '#pragma once' in CQTestGameMode.h"
#endif
#define CQTESTTESTS_CQTestGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACQTestGameMode **********************************************************
struct Z_Construct_UClass_ACQTestGameMode_Statics;
CQTESTTESTS_API UClass* Z_Construct_UClass_ACQTestGameMode_NoRegister();

#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACQTestGameMode(); \
	friend struct ::Z_Construct_UClass_ACQTestGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CQTESTTESTS_API UClass* ::Z_Construct_UClass_ACQTestGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACQTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CQTestTests"), Z_Construct_UClass_ACQTestGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACQTestGameMode)


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACQTestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACQTestGameMode(ACQTestGameMode&&) = delete; \
	ACQTestGameMode(const ACQTestGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACQTestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACQTestGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACQTestGameMode) \
	NO_API virtual ~ACQTestGameMode();


#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameMode_h_9_PROLOG
#define FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACQTestGameMode;

// ********** End Class ACQTestGameMode ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_CQTest_Source_CQTestTests_Private_Components_CQTestGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
