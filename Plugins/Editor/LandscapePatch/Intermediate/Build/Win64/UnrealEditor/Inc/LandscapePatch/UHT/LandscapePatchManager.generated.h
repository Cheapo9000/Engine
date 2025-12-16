// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapePatchManager.h"

#ifdef LANDSCAPEPATCH_LandscapePatchManager_generated_h
#error "LandscapePatchManager.generated.h already included, missing '#pragma once' in LandscapePatchManager.h"
#endif
#define LANDSCAPEPATCH_LandscapePatchManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALandscape;
class ULandscapePatchComponent;

// ********** Begin Class ADEPRECATED_LandscapePatchManager ****************************************
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovePatchToIndex); \
	DECLARE_FUNCTION(execGetIndexOfPatch); \
	DECLARE_FUNCTION(execRemovePatch); \
	DECLARE_FUNCTION(execAddPatch); \
	DECLARE_FUNCTION(execContainsPatch); \
	DECLARE_FUNCTION(execSetTargetLandscape);


#if WITH_EDITOR
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execMigrateToPrioritySystemAndDelete);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_ADEPRECATED_LandscapePatchManager_Statics;
LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ADEPRECATED_LandscapePatchManager_NoRegister();

#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADEPRECATED_LandscapePatchManager(); \
	friend struct ::Z_Construct_UClass_ADEPRECATED_LandscapePatchManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEPATCH_API UClass* ::Z_Construct_UClass_ADEPRECATED_LandscapePatchManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ADEPRECATED_LandscapePatchManager, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(0 | CLASS_Config | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/LandscapePatch"), Z_Construct_UClass_ADEPRECATED_LandscapePatchManager_NoRegister) \
	DECLARE_SERIALIZER(ADEPRECATED_LandscapePatchManager)


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADEPRECATED_LandscapePatchManager(ADEPRECATED_LandscapePatchManager&&) = delete; \
	ADEPRECATED_LandscapePatchManager(const ADEPRECATED_LandscapePatchManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADEPRECATED_LandscapePatchManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADEPRECATED_LandscapePatchManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADEPRECATED_LandscapePatchManager) \
	NO_API virtual ~ADEPRECATED_LandscapePatchManager();


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_21_PROLOG
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADEPRECATED_LandscapePatchManager;

// ********** End Class ADEPRECATED_LandscapePatchManager ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
