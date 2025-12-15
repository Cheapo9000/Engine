// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTestLevelScript.h"

#ifdef FUNCTIONALTESTING_FunctionalTestLevelScript_generated_h
#error "FunctionalTestLevelScript.generated.h already included, missing '#pragma once' in FunctionalTestLevelScript.h"
#endif
#define FUNCTIONALTESTING_FunctionalTestLevelScript_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFunctionalTestLevelScript ***********************************************
struct Z_Construct_UClass_AFunctionalTestLevelScript_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalTestLevelScript(); \
	friend struct ::Z_Construct_UClass_AFunctionalTestLevelScript_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister(); \
public: \
	DECLARE_CLASS2(AFunctionalTestLevelScript, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_AFunctionalTestLevelScript_NoRegister) \
	DECLARE_SERIALIZER(AFunctionalTestLevelScript)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API AFunctionalTestLevelScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTestLevelScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalTestLevelScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTestLevelScript); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFunctionalTestLevelScript(AFunctionalTestLevelScript&&) = delete; \
	AFunctionalTestLevelScript(const AFunctionalTestLevelScript&) = delete; \
	FUNCTIONALTESTING_API virtual ~AFunctionalTestLevelScript();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_9_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_12_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFunctionalTestLevelScript;

// ********** End Class AFunctionalTestLevelScript *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestLevelScript_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
