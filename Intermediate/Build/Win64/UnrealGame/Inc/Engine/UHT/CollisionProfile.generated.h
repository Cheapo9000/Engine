// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CollisionProfile.h"

#ifdef ENGINE_CollisionProfile_generated_h
#error "CollisionProfile.generated.h already included, missing '#pragma once' in CollisionProfile.h"
#endif
#define ENGINE_CollisionProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCollisionProfileName *********************************************
struct Z_Construct_UScriptStruct_FCollisionProfileName_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollisionProfileName_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCollisionProfileName;
// ********** End ScriptStruct FCollisionProfileName ***********************************************

// ********** Begin ScriptStruct FCollisionResponseTemplate ****************************************
struct Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollisionResponseTemplate_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCollisionResponseTemplate;
// ********** End ScriptStruct FCollisionResponseTemplate ******************************************

// ********** Begin ScriptStruct FCustomChannelSetup ***********************************************
struct Z_Construct_UScriptStruct_FCustomChannelSetup_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomChannelSetup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCustomChannelSetup;
// ********** End ScriptStruct FCustomChannelSetup *************************************************

// ********** Begin ScriptStruct FCustomProfile ****************************************************
struct Z_Construct_UScriptStruct_FCustomProfile_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomProfile_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCustomProfile;
// ********** End ScriptStruct FCustomProfile ******************************************************

// ********** Begin Class UCollisionProfile ********************************************************
struct Z_Construct_UClass_UCollisionProfile_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCollisionProfile_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_INCLASS \
private: \
	static void StaticRegisterNativesUCollisionProfile(); \
	friend struct ::Z_Construct_UClass_UCollisionProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCollisionProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(UCollisionProfile, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCollisionProfile_NoRegister) \
	DECLARE_SERIALIZER(UCollisionProfile) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCollisionProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollisionProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCollisionProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollisionProfile); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCollisionProfile(UCollisionProfile&&) = delete; \
	UCollisionProfile(const UCollisionProfile&) = delete; \
	ENGINE_API virtual ~UCollisionProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_159_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h_162_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCollisionProfile;

// ********** End Class UCollisionProfile **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CollisionProfile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
