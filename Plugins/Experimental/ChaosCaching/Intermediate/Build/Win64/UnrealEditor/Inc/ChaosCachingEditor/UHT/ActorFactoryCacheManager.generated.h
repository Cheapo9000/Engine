// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ActorFactoryCacheManager.h"

#ifdef CHAOSCACHINGEDITOR_ActorFactoryCacheManager_generated_h
#error "ActorFactoryCacheManager.generated.h already included, missing '#pragma once' in ActorFactoryCacheManager.h"
#endif
#define CHAOSCACHINGEDITOR_ActorFactoryCacheManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryCacheManager ************************************************
struct Z_Construct_UClass_UActorFactoryCacheManager_Statics;
CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UActorFactoryCacheManager_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorFactoryCacheManager(); \
	friend struct ::Z_Construct_UClass_UActorFactoryCacheManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSCACHINGEDITOR_API UClass* ::Z_Construct_UClass_UActorFactoryCacheManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryCacheManager, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosCachingEditor"), Z_Construct_UClass_UActorFactoryCacheManager_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryCacheManager)


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryCacheManager(UActorFactoryCacheManager&&) = delete; \
	UActorFactoryCacheManager(const UActorFactoryCacheManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHINGEDITOR_API, UActorFactoryCacheManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryCacheManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorFactoryCacheManager) \
	CHAOSCACHINGEDITOR_API virtual ~UActorFactoryCacheManager();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryCacheManager;

// ********** End Class UActorFactoryCacheManager **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Chaos_ActorFactoryCacheManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
