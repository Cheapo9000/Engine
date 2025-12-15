// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClientPilotComponent.h"

#ifdef CLIENTPILOT_ClientPilotComponent_generated_h
#error "ClientPilotComponent.generated.h already included, missing '#pragma once' in ClientPilotComponent.h"
#endif
#define CLIENTPILOT_ClientPilotComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClientPilotComponent ****************************************************
struct Z_Construct_UClass_UClientPilotComponent_Statics;
CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotComponent_NoRegister();

#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientPilotComponent(); \
	friend struct ::Z_Construct_UClass_UClientPilotComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLIENTPILOT_API UClass* ::Z_Construct_UClass_UClientPilotComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UClientPilotComponent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClientPilot"), Z_Construct_UClass_UClientPilotComponent_NoRegister) \
	DECLARE_SERIALIZER(UClientPilotComponent)


#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClientPilotComponent(UClientPilotComponent&&) = delete; \
	UClientPilotComponent(const UClientPilotComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLIENTPILOT_API, UClientPilotComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientPilotComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClientPilotComponent) \
	CLIENTPILOT_API virtual ~UClientPilotComponent();


#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClientPilotComponent;

// ********** End Class UClientPilotComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
