// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/AIAssistantTestObject.h"

#ifdef AIASSISTANT_AIAssistantTestObject_generated_h
#error "AIAssistantTestObject.generated.h already included, missing '#pragma once' in AIAssistantTestObject.h"
#endif
#define AIASSISTANT_AIAssistantTestObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAIAssistantTestObject ***************************************************
struct Z_Construct_UClass_UAIAssistantTestObject_Statics;
AIASSISTANT_API UClass* Z_Construct_UClass_UAIAssistantTestObject_NoRegister();

#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_Tests_AIAssistantTestObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIAssistantTestObject(); \
	friend struct ::Z_Construct_UClass_UAIAssistantTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIASSISTANT_API UClass* ::Z_Construct_UClass_UAIAssistantTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIAssistantTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIAssistant"), Z_Construct_UClass_UAIAssistantTestObject_NoRegister) \
	DECLARE_SERIALIZER(UAIAssistantTestObject)


#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_Tests_AIAssistantTestObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIAssistantTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIAssistantTestObject(UAIAssistantTestObject&&) = delete; \
	UAIAssistantTestObject(const UAIAssistantTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIAssistantTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAssistantTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIAssistantTestObject) \
	NO_API virtual ~UAIAssistantTestObject();


#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_Tests_AIAssistantTestObject_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_Tests_AIAssistantTestObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_Tests_AIAssistantTestObject_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_Tests_AIAssistantTestObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIAssistantTestObject;

// ********** End Class UAIAssistantTestObject *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AIAssistant_Source_AIAssistant_Private_Tests_AIAssistantTestObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
