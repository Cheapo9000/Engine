// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClientJoinManager.h"

#ifdef STATEGRAPHMANAGER_ClientJoinManager_generated_h
#error "ClientJoinManager.generated.h already included, missing '#pragma once' in ClientJoinManager.h"
#endif
#define STATEGRAPHMANAGER_ClientJoinManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClientJoinManager *******************************************************
struct Z_Construct_UClass_UClientJoinManager_Statics;
STATEGRAPHMANAGER_API UClass* Z_Construct_UClass_UClientJoinManager_NoRegister();

#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_ClientJoinManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientJoinManager(); \
	friend struct ::Z_Construct_UClass_UClientJoinManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATEGRAPHMANAGER_API UClass* ::Z_Construct_UClass_UClientJoinManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UClientJoinManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateGraphManager"), Z_Construct_UClass_UClientJoinManager_NoRegister) \
	DECLARE_SERIALIZER(UClientJoinManager)


#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_ClientJoinManager_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATEGRAPHMANAGER_API UClientJoinManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClientJoinManager(UClientJoinManager&&) = delete; \
	UClientJoinManager(const UClientJoinManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATEGRAPHMANAGER_API, UClientJoinManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientJoinManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClientJoinManager) \
	STATEGRAPHMANAGER_API virtual ~UClientJoinManager();


#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_ClientJoinManager_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_ClientJoinManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_ClientJoinManager_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_ClientJoinManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClientJoinManager;

// ********** End Class UClientJoinManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_ClientJoinManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
