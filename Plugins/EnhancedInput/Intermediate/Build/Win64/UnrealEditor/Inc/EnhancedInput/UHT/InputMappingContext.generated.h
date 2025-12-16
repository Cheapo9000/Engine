// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputMappingContext.h"

#ifdef ENHANCEDINPUT_InputMappingContext_generated_h
#error "InputMappingContext.generated.h already included, missing '#pragma once' in InputMappingContext.h"
#endif
#define ENHANCEDINPUT_InputMappingContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FEnhancedActionKeyMapping;
struct FKey;

// ********** Begin ScriptStruct FInputMappingContextMappingData ***********************************
struct Z_Construct_UScriptStruct_FInputMappingContextMappingData_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputMappingContextMappingData_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FInputMappingContextMappingData;
// ********** End ScriptStruct FInputMappingContextMappingData *************************************

// ********** Begin Class UInputMappingContext *****************************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnmapAll); \
	DECLARE_FUNCTION(execUnmapAllKeysFromAction); \
	DECLARE_FUNCTION(execUnmapKey); \
	DECLARE_FUNCTION(execMapKey); \
	DECLARE_FUNCTION(execShouldShowInputModeQuery);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInputMappingContext, ENHANCEDINPUT_API)


struct Z_Construct_UClass_UInputMappingContext_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputMappingContext(); \
	friend struct ::Z_Construct_UClass_UInputMappingContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UInputMappingContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputMappingContext, UDataAsset, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UInputMappingContext_NoRegister) \
	DECLARE_SERIALIZER(UInputMappingContext) \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputMappingContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputMappingContext(UInputMappingContext&&) = delete; \
	UInputMappingContext(const UInputMappingContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputMappingContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputMappingContext) \
	ENHANCEDINPUT_API virtual ~UInputMappingContext();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_86_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputMappingContext;

// ********** End Class UInputMappingContext *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputMappingContext_h

// ********** Begin Enum EMappingContextInputModeFilterOptions *************************************
#define FOREACH_ENUM_EMAPPINGCONTEXTINPUTMODEFILTEROPTIONS(op) \
	op(EMappingContextInputModeFilterOptions::UseProjectDefaultQuery) \
	op(EMappingContextInputModeFilterOptions::UseCustomQuery) \
	op(EMappingContextInputModeFilterOptions::DoNotFilter) 

enum class EMappingContextInputModeFilterOptions : uint8;
template<> struct TIsUEnumClass<EMappingContextInputModeFilterOptions> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMappingContextInputModeFilterOptions>();
// ********** End Enum EMappingContextInputModeFilterOptions ***************************************

// ********** Begin Enum EMappingContextRegistrationTrackingMode ***********************************
#define FOREACH_ENUM_EMAPPINGCONTEXTREGISTRATIONTRACKINGMODE(op) \
	op(EMappingContextRegistrationTrackingMode::Untracked) \
	op(EMappingContextRegistrationTrackingMode::CountRegistrations) 

enum class EMappingContextRegistrationTrackingMode : uint8;
template<> struct TIsUEnumClass<EMappingContextRegistrationTrackingMode> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMappingContextRegistrationTrackingMode>();
// ********** End Enum EMappingContextRegistrationTrackingMode *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
