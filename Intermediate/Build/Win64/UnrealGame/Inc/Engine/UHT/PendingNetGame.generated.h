// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PendingNetGame.h"

#ifdef ENGINE_PendingNetGame_generated_h
#error "PendingNetGame.generated.h already included, missing '#pragma once' in PendingNetGame.h"
#endif
#define ENGINE_PendingNetGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPendingNetGame **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPendingNetGame, ENGINE_API)


struct Z_Construct_UClass_UPendingNetGame_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPendingNetGame(); \
	friend struct ::Z_Construct_UClass_UPendingNetGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPendingNetGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UPendingNetGame, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPendingNetGame_NoRegister) \
	DECLARE_SERIALIZER(UPendingNetGame) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPendingNetGame(UPendingNetGame&&) = delete; \
	UPendingNetGame(const UPendingNetGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPendingNetGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPendingNetGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPendingNetGame) \
	ENGINE_API virtual ~UPendingNetGame();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPendingNetGame;

// ********** End Class UPendingNetGame ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
