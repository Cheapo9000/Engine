// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/NavLocalGridManager.h"

#ifdef AIMODULE_NavLocalGridManager_generated_h
#error "NavLocalGridManager.generated.h already included, missing '#pragma once' in NavLocalGridManager.h"
#endif
#define AIMODULE_NavLocalGridManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UNavLocalGridManager *****************************************************
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFindLocalNavigationGridPath); \
	DECLARE_FUNCTION(execRemoveLocalNavigationGrid); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForCapsule); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForBox); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoints); \
	DECLARE_FUNCTION(execAddLocalNavigationGridForPoint); \
	DECLARE_FUNCTION(execSetLocalNavigationGridDensity);


struct Z_Construct_UClass_UNavLocalGridManager_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUNavLocalGridManager(); \
	friend struct ::Z_Construct_UClass_UNavLocalGridManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UNavLocalGridManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavLocalGridManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UNavLocalGridManager_NoRegister) \
	DECLARE_SERIALIZER(UNavLocalGridManager)


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UNavLocalGridManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLocalGridManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UNavLocalGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLocalGridManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavLocalGridManager(UNavLocalGridManager&&) = delete; \
	UNavLocalGridManager(const UNavLocalGridManager&) = delete; \
	AIMODULE_API virtual ~UNavLocalGridManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_26_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavLocalGridManager;

// ********** End Class UNavLocalGridManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLocalGridManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
