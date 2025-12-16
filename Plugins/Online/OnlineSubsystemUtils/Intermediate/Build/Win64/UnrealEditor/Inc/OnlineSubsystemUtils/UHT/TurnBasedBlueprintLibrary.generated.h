// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedBlueprintLibrary.h"

#ifdef ONLINESUBSYSTEMUTILS_TurnBasedBlueprintLibrary_generated_h
#error "TurnBasedBlueprintLibrary.generated.h already included, missing '#pragma once' in TurnBasedBlueprintLibrary.h"
#endif
#define ONLINESUBSYSTEMUTILS_TurnBasedBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;

// ********** Begin Class UTurnBasedBlueprintLibrary ***********************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPlayerDisplayName); \
	DECLARE_FUNCTION(execRegisterTurnBasedMatchInterfaceObject); \
	DECLARE_FUNCTION(execGetMyPlayerIndex); \
	DECLARE_FUNCTION(execGetIsMyTurn);


struct Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UTurnBasedBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTurnBasedBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UTurnBasedBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTurnBasedBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UTurnBasedBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTurnBasedBlueprintLibrary)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UTurnBasedBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UTurnBasedBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTurnBasedBlueprintLibrary(UTurnBasedBlueprintLibrary&&) = delete; \
	UTurnBasedBlueprintLibrary(const UTurnBasedBlueprintLibrary&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UTurnBasedBlueprintLibrary();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTurnBasedBlueprintLibrary;

// ********** End Class UTurnBasedBlueprintLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
