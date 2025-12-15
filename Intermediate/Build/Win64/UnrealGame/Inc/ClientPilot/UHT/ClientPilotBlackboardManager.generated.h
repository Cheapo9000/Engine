// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClientPilotBlackboardManager.h"

#ifdef CLIENTPILOT_ClientPilotBlackboardManager_generated_h
#error "ClientPilotBlackboardManager.generated.h already included, missing '#pragma once' in ClientPilotBlackboardManager.h"
#endif
#define CLIENTPILOT_ClientPilotBlackboardManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClientPilotBlackboardManager ********************************************
struct Z_Construct_UClass_UClientPilotBlackboardManager_Statics;
CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotBlackboardManager_NoRegister();

#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientPilotBlackboardManager(); \
	friend struct ::Z_Construct_UClass_UClientPilotBlackboardManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIENTPILOT_API UClass* ::Z_Construct_UClass_UClientPilotBlackboardManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UClientPilotBlackboardManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPilot"), Z_Construct_UClass_UClientPilotBlackboardManager_NoRegister) \
	DECLARE_SERIALIZER(UClientPilotBlackboardManager)


#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTPILOT_API UClientPilotBlackboardManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClientPilotBlackboardManager(UClientPilotBlackboardManager&&) = delete; \
	UClientPilotBlackboardManager(const UClientPilotBlackboardManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTPILOT_API, UClientPilotBlackboardManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientPilotBlackboardManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientPilotBlackboardManager) \
	CLIENTPILOT_API virtual ~UClientPilotBlackboardManager();


#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_15_PROLOG
#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClientPilotBlackboardManager;

// ********** End Class UClientPilotBlackboardManager **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
