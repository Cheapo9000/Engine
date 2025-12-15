// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/UMGSequencePlayer.h"

#ifdef UMG_UMGSequencePlayer_generated_h
#error "UMGSequencePlayer.generated.h already included, missing '#pragma once' in UMGSequencePlayer.h"
#endif
#define UMG_UMGSequencePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUMGSequencePlayer *******************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUserTag); \
	DECLARE_FUNCTION(execGetUserTag);


struct Z_Construct_UClass_UUMGSequencePlayer_Statics;
UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSequencePlayer(); \
	friend struct ::Z_Construct_UClass_UUMGSequencePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UUMGSequencePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UUMGSequencePlayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UUMGSequencePlayer_NoRegister) \
	DECLARE_SERIALIZER(UUMGSequencePlayer)


#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUMGSequencePlayer(UUMGSequencePlayer&&) = delete; \
	UUMGSequencePlayer(const UUMGSequencePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUMGSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSequencePlayer) \
	UMG_API virtual ~UUMGSequencePlayer();


#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUMGSequencePlayer;

// ********** End Class UUMGSequencePlayer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
