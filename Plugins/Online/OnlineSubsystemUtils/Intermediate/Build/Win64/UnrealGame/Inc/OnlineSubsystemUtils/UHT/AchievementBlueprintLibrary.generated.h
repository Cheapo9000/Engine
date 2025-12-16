// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AchievementBlueprintLibrary.h"

#ifdef ONLINESUBSYSTEMUTILS_AchievementBlueprintLibrary_generated_h
#error "AchievementBlueprintLibrary.generated.h already included, missing '#pragma once' in AchievementBlueprintLibrary.h"
#endif
#define ONLINESUBSYSTEMUTILS_AchievementBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;

// ********** Begin Class UAchievementBlueprintLibrary *********************************************
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetCachedAchievementDescription); \
	DECLARE_FUNCTION(execGetCachedAchievementProgress);


struct Z_Construct_UClass_UAchievementBlueprintLibrary_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UAchievementBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UAchievementBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAchievementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UAchievementBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAchievementBlueprintLibrary)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UAchievementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UAchievementBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAchievementBlueprintLibrary(UAchievementBlueprintLibrary&&) = delete; \
	UAchievementBlueprintLibrary(const UAchievementBlueprintLibrary&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UAchievementBlueprintLibrary();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_16_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAchievementBlueprintLibrary;

// ********** End Class UAchievementBlueprintLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
