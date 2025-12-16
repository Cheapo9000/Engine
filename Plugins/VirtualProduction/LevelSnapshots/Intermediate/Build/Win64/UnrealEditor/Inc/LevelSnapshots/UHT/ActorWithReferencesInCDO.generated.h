// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/Types/ActorWithReferencesInCDO.h"

#ifdef LEVELSNAPSHOTS_ActorWithReferencesInCDO_generated_h
#error "ActorWithReferencesInCDO.generated.h already included, missing '#pragma once' in ActorWithReferencesInCDO.h"
#endif
#define LEVELSNAPSHOTS_ActorWithReferencesInCDO_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FExternalReferenceDummy *******************************************
struct Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics;
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics; \
	LEVELSNAPSHOTS_API static class UScriptStruct* StaticStruct();


struct FExternalReferenceDummy;
// ********** End ScriptStruct FExternalReferenceDummy *********************************************

// ********** Begin Class AActorWithReferencesInCDO ************************************************
struct Z_Construct_UClass_AActorWithReferencesInCDO_Statics;
LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_AActorWithReferencesInCDO_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActorWithReferencesInCDO(); \
	friend struct ::Z_Construct_UClass_AActorWithReferencesInCDO_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTS_API UClass* ::Z_Construct_UClass_AActorWithReferencesInCDO_NoRegister(); \
public: \
	DECLARE_CLASS2(AActorWithReferencesInCDO, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSnapshots"), Z_Construct_UClass_AActorWithReferencesInCDO_NoRegister) \
	DECLARE_SERIALIZER(AActorWithReferencesInCDO)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AActorWithReferencesInCDO(AActorWithReferencesInCDO&&) = delete; \
	AActorWithReferencesInCDO(const AActorWithReferencesInCDO&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActorWithReferencesInCDO); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActorWithReferencesInCDO); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActorWithReferencesInCDO) \
	NO_API virtual ~AActorWithReferencesInCDO();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_36_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AActorWithReferencesInCDO;

// ********** End Class AActorWithReferencesInCDO **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
