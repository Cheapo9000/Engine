// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/PathFollowingManager.h"

#ifdef AIMODULE_PathFollowingManager_generated_h
#error "PathFollowingManager.generated.h already included, missing '#pragma once' in PathFollowingManager.h"
#endif
#define AIMODULE_PathFollowingManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPathFollowingManager ****************************************************
struct Z_Construct_UClass_UPathFollowingManager_Statics;
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingManager_NoRegister();

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathFollowingManager(); \
	friend struct ::Z_Construct_UClass_UPathFollowingManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIMODULE_API UClass* ::Z_Construct_UClass_UPathFollowingManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathFollowingManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), Z_Construct_UClass_UPathFollowingManager_NoRegister) \
	DECLARE_SERIALIZER(UPathFollowingManager)


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathFollowingManager(UPathFollowingManager&&) = delete; \
	UPathFollowingManager(const UPathFollowingManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UPathFollowingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFollowingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFollowingManager) \
	AIMODULE_API virtual ~UPathFollowingManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathFollowingManager;

// ********** End Class UPathFollowingManager ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
