// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReflexBlueprint.h"

#ifdef REFLEX_ReflexBlueprint_generated_h
#error "ReflexBlueprint.generated.h already included, missing '#pragma once' in ReflexBlueprint.h"
#endif
#define REFLEX_ReflexBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EReflexMode : uint8;

// ********** Begin Class UReflexBlueprintLibrary **************************************************
#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetGameLatencyInMs); \
	DECLARE_FUNCTION(execGetGameToRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetFlashIndicatorEnabled); \
	DECLARE_FUNCTION(execSetFlashIndicatorEnabled); \
	DECLARE_FUNCTION(execGetReflexMode); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execGetReflexAvailable);


struct Z_Construct_UClass_UReflexBlueprintLibrary_Statics;
REFLEX_API UClass* Z_Construct_UClass_UReflexBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUReflexBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UReflexBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REFLEX_API UClass* ::Z_Construct_UClass_UReflexBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UReflexBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Reflex"), Z_Construct_UClass_UReflexBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UReflexBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REFLEX_API UReflexBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflexBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REFLEX_API, UReflexBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflexBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReflexBlueprintLibrary(UReflexBlueprintLibrary&&) = delete; \
	UReflexBlueprintLibrary(const UReflexBlueprintLibrary&) = delete; \
	REFLEX_API virtual ~UReflexBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReflexBlueprintLibrary;

// ********** End Class UReflexBlueprintLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h

// ********** Begin Enum EReflexMode ***************************************************************
#define FOREACH_ENUM_EREFLEXMODE(op) \
	op(EReflexMode::Disabled) \
	op(EReflexMode::Enabled) \
	op(EReflexMode::EnabledPlusBoost) 

enum class EReflexMode : uint8;
template<> struct TIsUEnumClass<EReflexMode> { enum { Value = true }; };
template<> REFLEX_NON_ATTRIBUTED_API UEnum* StaticEnum<EReflexMode>();
// ********** End Enum EReflexMode *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
