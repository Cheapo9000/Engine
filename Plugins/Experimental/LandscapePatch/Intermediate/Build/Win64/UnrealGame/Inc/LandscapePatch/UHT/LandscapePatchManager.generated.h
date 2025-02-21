// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapePatchManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandscape;
class ULandscapePatchComponent;
#ifdef LANDSCAPEPATCH_LandscapePatchManager_generated_h
#error "LandscapePatchManager.generated.h already included, missing '#pragma once' in LandscapePatchManager.h"
#endif
#define LANDSCAPEPATCH_LandscapePatchManager_generated_h

#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovePatchToIndex); \
	DECLARE_FUNCTION(execGetIndexOfPatch); \
	DECLARE_FUNCTION(execRemovePatch); \
	DECLARE_FUNCTION(execAddPatch); \
	DECLARE_FUNCTION(execContainsPatch); \
	DECLARE_FUNCTION(execSetTargetLandscape);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execMigrateToPrioritySystemAndDelete);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapePatchManager(); \
	friend struct Z_Construct_UClass_ALandscapePatchManager_Statics; \
public: \
	DECLARE_CLASS(ALandscapePatchManager, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), NO_API) \
	DECLARE_SERIALIZER(ALandscapePatchManager)


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandscapePatchManager(ALandscapePatchManager&&); \
	ALandscapePatchManager(const ALandscapePatchManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapePatchManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapePatchManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapePatchManager) \
	NO_API virtual ~ALandscapePatchManager();


#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPEPATCH_API UClass* StaticClass<class ALandscapePatchManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
