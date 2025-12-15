// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelActorContainer.h"

#ifdef ENGINE_LevelActorContainer_generated_h
#error "LevelActorContainer.generated.h already included, missing '#pragma once' in LevelActorContainer.h"
#endif
#define ENGINE_LevelActorContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelActorContainer *****************************************************
struct Z_Construct_UClass_ULevelActorContainer_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelActorContainer(); \
	friend struct ::Z_Construct_UClass_ULevelActorContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelActorContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelActorContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelActorContainer_NoRegister) \
	DECLARE_SERIALIZER(ULevelActorContainer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelActorContainer(ULevelActorContainer&&) = delete; \
	ULevelActorContainer(const ULevelActorContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelActorContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelActorContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelActorContainer) \
	ENGINE_API virtual ~ULevelActorContainer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelActorContainer;

// ********** End Class ULevelActorContainer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
