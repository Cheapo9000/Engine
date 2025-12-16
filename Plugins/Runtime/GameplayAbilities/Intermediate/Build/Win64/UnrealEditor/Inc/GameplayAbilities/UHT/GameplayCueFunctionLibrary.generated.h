// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCueFunctionLibrary.h"

#ifdef GAMEPLAYABILITIES_GameplayCueFunctionLibrary_generated_h
#error "GameplayCueFunctionLibrary.generated.h already included, missing '#pragma once' in GameplayCueFunctionLibrary.h"
#endif
#define GAMEPLAYABILITIES_GameplayCueFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayCueParameters;
struct FGameplayTag;
struct FHitResult;

// ********** Begin Class UGameplayCueFunctionLibrary **********************************************
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveGameplayCueOnActor); \
	DECLARE_FUNCTION(execAddGameplayCueOnActor); \
	DECLARE_FUNCTION(execExecuteGameplayCueOnActor); \
	DECLARE_FUNCTION(execMakeGameplayCueParametersFromHitResult);


struct Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCueFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UGameplayCueFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayCueFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCueFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayCueFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCueFunctionLibrary)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayCueFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCueFunctionLibrary(UGameplayCueFunctionLibrary&&) = delete; \
	UGameplayCueFunctionLibrary(const UGameplayCueFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayCueFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCueFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCueFunctionLibrary) \
	GAMEPLAYABILITIES_API virtual ~UGameplayCueFunctionLibrary();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCueFunctionLibrary;

// ********** End Class UGameplayCueFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
