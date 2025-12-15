// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorGroupingUtils.h"

#ifdef UNREALED_ActorGroupingUtils_generated_h
#error "ActorGroupingUtils.generated.h already included, missing '#pragma once' in ActorGroupingUtils.h"
#endif
#define UNREALED_ActorGroupingUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGroupActor;
class UActorGroupingUtils;

// ********** Begin Class UActorGroupingUtils ******************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanGroupSelectedActors); \
	DECLARE_FUNCTION(execCanGroupActors); \
	DECLARE_FUNCTION(execRemoveSelectedFromGroup); \
	DECLARE_FUNCTION(execAddSelectedToGroup); \
	DECLARE_FUNCTION(execUnlockSelectedGroups); \
	DECLARE_FUNCTION(execLockSelectedGroups); \
	DECLARE_FUNCTION(execUngroupActors); \
	DECLARE_FUNCTION(execUngroupSelected); \
	DECLARE_FUNCTION(execGroupActors); \
	DECLARE_FUNCTION(execGroupSelected); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execSetGroupingActive); \
	DECLARE_FUNCTION(execIsGroupingActive);


struct Z_Construct_UClass_UActorGroupingUtils_Statics;
UNREALED_API UClass* Z_Construct_UClass_UActorGroupingUtils_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorGroupingUtils(); \
	friend struct ::Z_Construct_UClass_UActorGroupingUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UActorGroupingUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorGroupingUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UActorGroupingUtils_NoRegister) \
	DECLARE_SERIALIZER(UActorGroupingUtils)


#define FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UActorGroupingUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorGroupingUtils(UActorGroupingUtils&&) = delete; \
	UActorGroupingUtils(const UActorGroupingUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UActorGroupingUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorGroupingUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorGroupingUtils) \
	UNREALED_API virtual ~UActorGroupingUtils();


#define FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorGroupingUtils;

// ********** End Class UActorGroupingUtils ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
