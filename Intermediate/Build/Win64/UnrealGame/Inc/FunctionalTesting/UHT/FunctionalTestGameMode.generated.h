// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTestGameMode.h"

#ifdef FUNCTIONALTESTING_FunctionalTestGameMode_generated_h
#error "FunctionalTestGameMode.generated.h already included, missing '#pragma once' in FunctionalTestGameMode.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFunctionalTestGameMode **************************************************
struct Z_Construct_UClass_AFunctionalTestGameMode_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestGameMode_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalTestGameMode(); \
	friend struct ::Z_Construct_UClass_AFunctionalTestGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_AFunctionalTestGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFunctionalTestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_AFunctionalTestGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFunctionalTestGameMode)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API AFunctionalTestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalTestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTestGameMode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFunctionalTestGameMode(AFunctionalTestGameMode&&) = delete; \
	AFunctionalTestGameMode(const AFunctionalTestGameMode&) = delete; \
	FUNCTIONALTESTING_API virtual ~AFunctionalTestGameMode();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_10_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFunctionalTestGameMode;

// ********** End Class AFunctionalTestGameMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
