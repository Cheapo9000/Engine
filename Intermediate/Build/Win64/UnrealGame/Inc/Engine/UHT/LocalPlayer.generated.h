// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LocalPlayer.h"

#ifdef ENGINE_LocalPlayer_generated_h
#error "LocalPlayer.generated.h already included, missing '#pragma once' in LocalPlayer.h"
#endif
#define ENGINE_LocalPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULocalPlayer *************************************************************
struct Z_Construct_UClass_ULocalPlayer_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_170_INCLASS \
private: \
	static void StaticRegisterNativesULocalPlayer(); \
	friend struct ::Z_Construct_UClass_ULocalPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULocalPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalPlayer, UPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULocalPlayer_NoRegister) \
	DECLARE_SERIALIZER(ULocalPlayer) \
	DECLARE_WITHIN(UEngine)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_170_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayer) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalPlayer(ULocalPlayer&&) = delete; \
	ULocalPlayer(const ULocalPlayer&) = delete; \
	ENGINE_API virtual ~ULocalPlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_167_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_170_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_170_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h_170_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalPlayer;

// ********** End Class ULocalPlayer ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LocalPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
