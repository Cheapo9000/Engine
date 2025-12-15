// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AISystemBase.h"

#ifdef ENGINE_AISystemBase_generated_h
#error "AISystemBase.generated.h already included, missing '#pragma once' in AISystemBase.h"
#endif
#define ENGINE_AISystemBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAISystemBase ************************************************************
struct Z_Construct_UClass_UAISystemBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAISystemBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAISystemBase(); \
	friend struct ::Z_Construct_UClass_UAISystemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAISystemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAISystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAISystemBase_NoRegister) \
	DECLARE_SERIALIZER(UAISystemBase)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAISystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISystemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAISystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISystemBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAISystemBase(UAISystemBase&&) = delete; \
	UAISystemBase(const UAISystemBase&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAISystemBase;

// ********** End Class UAISystemBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_AISystemBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
