// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PreLoginAsyncManager.h"

#ifdef STATEGRAPHMANAGER_PreLoginAsyncManager_generated_h
#error "PreLoginAsyncManager.generated.h already included, missing '#pragma once' in PreLoginAsyncManager.h"
#endif
#define STATEGRAPHMANAGER_PreLoginAsyncManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPreLoginAsyncManager ****************************************************
struct Z_Construct_UClass_UPreLoginAsyncManager_Statics;
STATEGRAPHMANAGER_API UClass* Z_Construct_UClass_UPreLoginAsyncManager_NoRegister();

#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_PreLoginAsyncManager_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreLoginAsyncManager(); \
	friend struct ::Z_Construct_UClass_UPreLoginAsyncManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATEGRAPHMANAGER_API UClass* ::Z_Construct_UClass_UPreLoginAsyncManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UPreLoginAsyncManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateGraphManager"), Z_Construct_UClass_UPreLoginAsyncManager_NoRegister) \
	DECLARE_SERIALIZER(UPreLoginAsyncManager)


#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_PreLoginAsyncManager_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATEGRAPHMANAGER_API UPreLoginAsyncManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPreLoginAsyncManager(UPreLoginAsyncManager&&) = delete; \
	UPreLoginAsyncManager(const UPreLoginAsyncManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATEGRAPHMANAGER_API, UPreLoginAsyncManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreLoginAsyncManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPreLoginAsyncManager) \
	STATEGRAPHMANAGER_API virtual ~UPreLoginAsyncManager();


#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_PreLoginAsyncManager_h_73_PROLOG
#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_PreLoginAsyncManager_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_PreLoginAsyncManager_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_PreLoginAsyncManager_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPreLoginAsyncManager;

// ********** End Class UPreLoginAsyncManager ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_PreLoginAsyncManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
