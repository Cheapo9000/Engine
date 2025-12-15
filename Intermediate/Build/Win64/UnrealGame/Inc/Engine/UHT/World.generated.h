// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/World.h"

#ifdef ENGINE_World_generated_h
#error "World.generated.h already included, missing '#pragma once' in World.h"
#endif
#define ENGINE_World_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWorldSettings;
class UDataLayerManager;

// ********** Begin ScriptStruct FLevelViewportInfo ************************************************
struct Z_Construct_UScriptStruct_FLevelViewportInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_294_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelViewportInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FLevelViewportInfo;
// ********** End ScriptStruct FLevelViewportInfo **************************************************

// ********** Begin ScriptStruct FStartPhysicsTickFunction *****************************************
struct Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_355_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FStartPhysicsTickFunction;
// ********** End ScriptStruct FStartPhysicsTickFunction *******************************************

// ********** Begin ScriptStruct FEndPhysicsTickFunction *******************************************
struct Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_389_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


struct FEndPhysicsTickFunction;
// ********** End ScriptStruct FEndPhysicsTickFunction *********************************************

// ********** Begin ScriptStruct FLevelCollection **************************************************
struct Z_Construct_UScriptStruct_FLevelCollection_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_635_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelCollection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FLevelCollection;
// ********** End ScriptStruct FLevelCollection ****************************************************

// ********** Begin ScriptStruct FStreamingLevelsToConsider ****************************************
struct Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_784_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStreamingLevelsToConsider;
// ********** End ScriptStruct FStreamingLevelsToConsider ******************************************

// ********** Begin Class UWorld *******************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDataLayerManager); \
	DECLARE_FUNCTION(execK2_GetWorldSettings); \
	DECLARE_FUNCTION(execHandleTimelineScrubbed);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorld, ENGINE_API)


struct Z_Construct_UClass_UWorld_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_INCLASS \
private: \
	static void StaticRegisterNativesUWorld(); \
	friend struct ::Z_Construct_UClass_UWorld_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorld_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorld, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorld_NoRegister) \
	DECLARE_SERIALIZER(UWorld) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorld); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorld(UWorld&&) = delete; \
	UWorld(const UWorld&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_916_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_919_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorld;

// ********** End Class UWorld *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
