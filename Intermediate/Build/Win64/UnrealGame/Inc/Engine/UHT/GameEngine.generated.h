// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/GameEngine.h"

#ifdef ENGINE_GameEngine_generated_h
#error "GameEngine.generated.h already included, missing '#pragma once' in GameEngine.h"
#endif
#define ENGINE_GameEngine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameEngine **************************************************************
struct Z_Construct_UClass_UGameEngine_Statics;
ENGINE_API UClass* Z_Construct_UClass_UGameEngine_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUGameEngine(); \
	friend struct ::Z_Construct_UClass_UGameEngine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UGameEngine_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UGameEngine_NoRegister) \
	DECLARE_SERIALIZER(UGameEngine)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGameEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEngine); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameEngine(UGameEngine&&) = delete; \
	UGameEngine(const UGameEngine&) = delete; \
	ENGINE_API virtual ~UGameEngine();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameEngine;

// ********** End Class UGameEngine ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
