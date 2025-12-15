// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Player.h"

#ifdef ENGINE_Player_generated_h
#error "Player.generated.h already included, missing '#pragma once' in Player.h"
#endif
#define ENGINE_Player_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlayer ******************************************************************
struct Z_Construct_UClass_UPlayer_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPlayer(); \
	friend struct ::Z_Construct_UClass_UPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPlayer_NoRegister) \
	DECLARE_SERIALIZER(UPlayer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayer(UPlayer&&) = delete; \
	UPlayer(const UPlayer&) = delete; \
	ENGINE_API virtual ~UPlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayer;

// ********** End Class UPlayer ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Player_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
