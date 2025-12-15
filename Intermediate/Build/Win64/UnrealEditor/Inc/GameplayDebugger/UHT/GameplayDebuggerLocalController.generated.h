// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerLocalController.h"

#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerLocalController_generated_h
#error "GameplayDebuggerLocalController.generated.h already included, missing '#pragma once' in GameplayDebuggerLocalController.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerLocalController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayDebuggerLocalController *****************************************
struct Z_Construct_UClass_UGameplayDebuggerLocalController_Statics;
GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerLocalController(); \
	friend struct ::Z_Construct_UClass_UGameplayDebuggerLocalController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYDEBUGGER_API UClass* ::Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayDebuggerLocalController, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister) \
	DECLARE_SERIALIZER(UGameplayDebuggerLocalController)


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerLocalController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerLocalController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerLocalController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerLocalController); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayDebuggerLocalController(UGameplayDebuggerLocalController&&) = delete; \
	UGameplayDebuggerLocalController(const UGameplayDebuggerLocalController&) = delete; \
	NO_API virtual ~UGameplayDebuggerLocalController();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_20_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_23_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayDebuggerLocalController;

// ********** End Class UGameplayDebuggerLocalController *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
