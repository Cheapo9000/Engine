// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RegisterServerManager.h"

#ifdef STATEGRAPHMANAGER_RegisterServerManager_generated_h
#error "RegisterServerManager.generated.h already included, missing '#pragma once' in RegisterServerManager.h"
#endif
#define STATEGRAPHMANAGER_RegisterServerManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URegisterServerManager ***************************************************
struct Z_Construct_UClass_URegisterServerManager_Statics;
STATEGRAPHMANAGER_API UClass* Z_Construct_UClass_URegisterServerManager_NoRegister();

#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RegisterServerManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURegisterServerManager(); \
	friend struct ::Z_Construct_UClass_URegisterServerManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATEGRAPHMANAGER_API UClass* ::Z_Construct_UClass_URegisterServerManager_NoRegister(); \
public: \
	DECLARE_CLASS2(URegisterServerManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateGraphManager"), Z_Construct_UClass_URegisterServerManager_NoRegister) \
	DECLARE_SERIALIZER(URegisterServerManager)


#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RegisterServerManager_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATEGRAPHMANAGER_API URegisterServerManager(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URegisterServerManager(URegisterServerManager&&) = delete; \
	URegisterServerManager(const URegisterServerManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATEGRAPHMANAGER_API, URegisterServerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegisterServerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URegisterServerManager) \
	STATEGRAPHMANAGER_API virtual ~URegisterServerManager();


#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RegisterServerManager_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RegisterServerManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RegisterServerManager_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RegisterServerManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URegisterServerManager;

// ********** End Class URegisterServerManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_StateGraph_Source_StateGraphManager_Public_RegisterServerManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
