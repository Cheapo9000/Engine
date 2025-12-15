// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlayerInput.h"

#ifdef ENGINE_PlayerInput_generated_h
#error "PlayerInput.generated.h already included, missing '#pragma once' in PlayerInput.h"
#endif
#define ENGINE_PlayerInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FKey;

// ********** Begin ScriptStruct FKeyBind **********************************************************
struct Z_Construct_UScriptStruct_FKeyBind_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FKeyBind_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FKeyBind;
// ********** End ScriptStruct FKeyBind ************************************************************

// ********** Begin ScriptStruct FInputAxisProperties **********************************************
struct Z_Construct_UScriptStruct_FInputAxisProperties_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputAxisProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInputAxisProperties;
// ********** End ScriptStruct FInputAxisProperties ************************************************

// ********** Begin ScriptStruct FInputAxisConfigEntry *********************************************
struct Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInputAxisConfigEntry;
// ********** End ScriptStruct FInputAxisConfigEntry ***********************************************

// ********** Begin ScriptStruct FInputActionKeyMapping ********************************************
struct Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInputActionKeyMapping;
// ********** End ScriptStruct FInputActionKeyMapping **********************************************

// ********** Begin ScriptStruct FInputAxisKeyMapping **********************************************
struct Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInputAxisKeyMapping;
// ********** End ScriptStruct FInputAxisKeyMapping ************************************************

// ********** Begin ScriptStruct FInputActionSpeechMapping *****************************************
struct Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_276_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FInputActionSpeechMapping;
// ********** End ScriptStruct FInputActionSpeechMapping *******************************************

// ********** Begin Class UPlayerInput *************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_423_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOuterAPlayerController); \
	DECLARE_FUNCTION(execClearSmoothing); \
	DECLARE_FUNCTION(execInvertAxis); \
	DECLARE_FUNCTION(execInvertAxisKey); \
	DECLARE_FUNCTION(execSetBind); \
	DECLARE_FUNCTION(execSetMouseSensitivity);


struct Z_Construct_UClass_UPlayerInput_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_423_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInput(); \
	friend struct ::Z_Construct_UClass_UPlayerInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPlayerInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerInput, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPlayerInput_NoRegister) \
	DECLARE_SERIALIZER(UPlayerInput) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_423_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerInput(UPlayerInput&&) = delete; \
	UPlayerInput(const UPlayerInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlayerInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInput) \
	ENGINE_API virtual ~UPlayerInput();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_420_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_423_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_423_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_423_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_423_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerInput;

// ********** End Class UPlayerInput ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
