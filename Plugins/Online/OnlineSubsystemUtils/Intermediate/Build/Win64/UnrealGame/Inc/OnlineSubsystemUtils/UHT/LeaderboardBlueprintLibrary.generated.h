// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LeaderboardBlueprintLibrary.h"

#ifdef ONLINESUBSYSTEMUTILS_LeaderboardBlueprintLibrary_generated_h
#error "LeaderboardBlueprintLibrary.generated.h already included, missing '#pragma once' in LeaderboardBlueprintLibrary.h"
#endif
#define ONLINESUBSYSTEMUTILS_LeaderboardBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;

// ********** Begin Class ULeaderboardBlueprintLibrary *********************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWriteLeaderboardInteger);


struct Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULeaderboardBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULeaderboardBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULeaderboardBlueprintLibrary)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaderboardBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULeaderboardBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaderboardBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULeaderboardBlueprintLibrary(ULeaderboardBlueprintLibrary&&) = delete; \
	ULeaderboardBlueprintLibrary(const ULeaderboardBlueprintLibrary&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~ULeaderboardBlueprintLibrary();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_18_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULeaderboardBlueprintLibrary;

// ********** End Class ULeaderboardBlueprintLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
