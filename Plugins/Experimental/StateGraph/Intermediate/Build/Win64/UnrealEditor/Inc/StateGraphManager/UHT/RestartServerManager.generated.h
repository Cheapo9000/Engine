// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RestartServerManager.h"

#ifdef STATEGRAPHMANAGER_RestartServerManager_generated_h
#error "RestartServerManager.generated.h already included, missing '#pragma once' in RestartServerManager.h"
#endif
#define STATEGRAPHMANAGER_RestartServerManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URestartServerManager ****************************************************
struct Z_Construct_UClass_URestartServerManager_Statics;
STATEGRAPHMANAGER_API UClass* Z_Construct_UClass_URestartServerManager_NoRegister();

#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RestartServerManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURestartServerManager(); \
	friend struct ::Z_Construct_UClass_URestartServerManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATEGRAPHMANAGER_API UClass* ::Z_Construct_UClass_URestartServerManager_NoRegister(); \
public: \
	DECLARE_CLASS2(URestartServerManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateGraphManager"), Z_Construct_UClass_URestartServerManager_NoRegister) \
	DECLARE_SERIALIZER(URestartServerManager)


#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RestartServerManager_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATEGRAPHMANAGER_API URestartServerManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URestartServerManager(URestartServerManager&&) = delete; \
	URestartServerManager(const URestartServerManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATEGRAPHMANAGER_API, URestartServerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestartServerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URestartServerManager) \
	STATEGRAPHMANAGER_API virtual ~URestartServerManager();


#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RestartServerManager_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RestartServerManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RestartServerManager_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RestartServerManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URestartServerManager;

// ********** End Class URestartServerManager ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RestartServerManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
