// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClientPilotBlackboard.h"

#ifdef CLIENTPILOT_ClientPilotBlackboard_generated_h
#error "ClientPilotBlackboard.generated.h already included, missing '#pragma once' in ClientPilotBlackboard.h"
#endif
#define CLIENTPILOT_ClientPilotBlackboard_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClientPilotBlackboard ***************************************************
struct Z_Construct_UClass_UClientPilotBlackboard_Statics;
CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotBlackboard_NoRegister();

#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientPilotBlackboard(); \
	friend struct ::Z_Construct_UClass_UClientPilotBlackboard_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIENTPILOT_API UClass* ::Z_Construct_UClass_UClientPilotBlackboard_NoRegister(); \
public: \
	DECLARE_CLASS2(UClientPilotBlackboard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPilot"), Z_Construct_UClass_UClientPilotBlackboard_NoRegister) \
	DECLARE_SERIALIZER(UClientPilotBlackboard)


#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLIENTPILOT_API UClientPilotBlackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClientPilotBlackboard(UClientPilotBlackboard&&) = delete; \
	UClientPilotBlackboard(const UClientPilotBlackboard&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTPILOT_API, UClientPilotBlackboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientPilotBlackboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientPilotBlackboard) \
	CLIENTPILOT_API virtual ~UClientPilotBlackboard();


#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_13_PROLOG
#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClientPilotBlackboard;

// ********** End Class UClientPilotBlackboard *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboard_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
