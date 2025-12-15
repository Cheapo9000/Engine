// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HotSpots/AIHotSpotManager.h"

#ifdef AIMODULE_AIHotSpotManager_generated_h
#error "AIHotSpotManager.generated.h already included, missing '#pragma once' in AIHotSpotManager.h"
#endif
#define AIMODULE_AIHotSpotManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAIHotSpotManager ********************************************************
struct Z_Construct_UClass_UAIHotSpotManager_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAIHotSpotManager(); \
	friend struct ::Z_Construct_UClass_UAIHotSpotManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UAIHotSpotManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIHotSpotManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UAIHotSpotManager_NoRegister) \
	DECLARE_SERIALIZER(UAIHotSpotManager)


#define FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIHotSpotManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIHotSpotManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIHotSpotManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIHotSpotManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIHotSpotManager(UAIHotSpotManager&&) = delete; \
	UAIHotSpotManager(const UAIHotSpotManager&) = delete; \
	AIMODULE_API virtual ~UAIHotSpotManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_9_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIHotSpotManager;

// ********** End Class UAIHotSpotManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
