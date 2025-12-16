// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputLibrary.h"

#ifdef ENHANCEDINPUT_EnhancedInputLibrary_generated_h
#error "EnhancedInputLibrary.generated.h already included, missing '#pragma once' in EnhancedInputLibrary.h"
#endif
#define ENHANCEDINPUT_EnhancedInputLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class UInputAction;
class UInputMappingContext;
class UPlayerMappableKeySettings;
enum class EInputActionValueType : uint8;
enum class ETriggerEvent : uint8;
struct FEnhancedActionKeyMapping;
struct FInputActionValue;

// ********** Begin Class UEnhancedInputLibrary ****************************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFlushPlayerInput); \
	DECLARE_FUNCTION(execConv_TriggerEventValueToString); \
	DECLARE_FUNCTION(execConv_InputActionValueToString); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis3D); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis2D); \
	DECLARE_FUNCTION(execConv_InputActionValueToAxis1D); \
	DECLARE_FUNCTION(execConv_InputActionValueToBool); \
	DECLARE_FUNCTION(execGetBoundActionValue); \
	DECLARE_FUNCTION(execIsActionKeyMappingPlayerMappable); \
	DECLARE_FUNCTION(execGetMappingName); \
	DECLARE_FUNCTION(execGetPlayerMappableKeySettings); \
	DECLARE_FUNCTION(execMakeInputActionValueOfType); \
	DECLARE_FUNCTION(execBreakInputActionValue); \
	DECLARE_FUNCTION(execRequestRebuildControlMappingsUsingContext);


struct Z_Construct_UClass_UEnhancedInputLibrary_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLibrary_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputLibrary(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedInputLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedInputLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputLibrary)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputLibrary(UEnhancedInputLibrary&&) = delete; \
	UEnhancedInputLibrary(const UEnhancedInputLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputLibrary) \
	ENHANCEDINPUT_API virtual ~UEnhancedInputLibrary();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_20_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputLibrary;

// ********** End Class UEnhancedInputLibrary ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
