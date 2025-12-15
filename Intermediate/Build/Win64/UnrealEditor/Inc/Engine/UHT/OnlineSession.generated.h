// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/OnlineSession.h"

#ifdef ENGINE_OnlineSession_generated_h
#error "OnlineSession.generated.h already included, missing '#pragma once' in OnlineSession.h"
#endif
#define ENGINE_OnlineSession_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOnlineSession ***********************************************************
struct Z_Construct_UClass_UOnlineSession_Statics;
ENGINE_API UClass* Z_Construct_UClass_UOnlineSession_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSession(); \
	friend struct ::Z_Construct_UClass_UOnlineSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UOnlineSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UOnlineSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UOnlineSession_NoRegister) \
	DECLARE_SERIALIZER(UOnlineSession) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UOnlineSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UOnlineSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSession); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOnlineSession(UOnlineSession&&) = delete; \
	UOnlineSession(const UOnlineSession&) = delete; \
	ENGINE_API virtual ~UOnlineSession();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOnlineSession;

// ********** End Class UOnlineSession *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineSession_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
