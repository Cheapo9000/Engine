// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/GatherTextFromAssetsCommandlet.h"

#ifdef UNREALED_GatherTextFromAssetsCommandlet_generated_h
#error "GatherTextFromAssetsCommandlet.generated.h already included, missing '#pragma once' in GatherTextFromAssetsCommandlet.h"
#endif
#define UNREALED_GatherTextFromAssetsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGatherTextFromAssetsWorkerMessage_Ping ***************************
struct Z_Construct_UScriptStruct_FGatherTextFromAssetsWorkerMessage_Ping_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGatherTextFromAssetsWorkerMessage_Ping_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FGatherTextFromAssetsWorkerMessage_Ping;
// ********** End ScriptStruct FGatherTextFromAssetsWorkerMessage_Ping *****************************

// ********** Begin ScriptStruct FGatherTextFromAssetsWorkerMessage_Pong ***************************
struct Z_Construct_UScriptStruct_FGatherTextFromAssetsWorkerMessage_Pong_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGatherTextFromAssetsWorkerMessage_Pong_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FGatherTextFromAssetsWorkerMessage_Pong;
// ********** End ScriptStruct FGatherTextFromAssetsWorkerMessage_Pong *****************************

// ********** Begin ScriptStruct FGatherTextFromAssetsWorkerMessage_PackageRequest *****************
struct Z_Construct_UScriptStruct_FGatherTextFromAssetsWorkerMessage_PackageRequest_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGatherTextFromAssetsWorkerMessage_PackageRequest_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FGatherTextFromAssetsWorkerMessage_PackageRequest;
// ********** End ScriptStruct FGatherTextFromAssetsWorkerMessage_PackageRequest *******************

// ********** Begin ScriptStruct FGatherTextFromAssetsWorkerMessage_PackageResult ******************
struct Z_Construct_UScriptStruct_FGatherTextFromAssetsWorkerMessage_PackageResult_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGatherTextFromAssetsWorkerMessage_PackageResult_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FGatherTextFromAssetsWorkerMessage_PackageResult;
// ********** End ScriptStruct FGatherTextFromAssetsWorkerMessage_PackageResult ********************

// ********** Begin Class UGatherTextFromAssetsCommandlet ******************************************
struct Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUGatherTextFromAssetsCommandlet(); \
	friend struct ::Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGatherTextFromAssetsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGatherTextFromAssetsCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGatherTextFromAssetsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGatherTextFromAssetsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGatherTextFromAssetsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGatherTextFromAssetsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGatherTextFromAssetsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGatherTextFromAssetsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGatherTextFromAssetsCommandlet(UGatherTextFromAssetsCommandlet&&) = delete; \
	UGatherTextFromAssetsCommandlet(const UGatherTextFromAssetsCommandlet&) = delete; \
	NO_API virtual ~UGatherTextFromAssetsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_78_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_81_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGatherTextFromAssetsCommandlet;

// ********** End Class UGatherTextFromAssetsCommandlet ********************************************

// ********** Begin Class UGatherTextFromAssetsWorkerCommandlet ************************************
struct Z_Construct_UClass_UGatherTextFromAssetsWorkerCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromAssetsWorkerCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_235_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGatherTextFromAssetsWorkerCommandlet(); \
	friend struct ::Z_Construct_UClass_UGatherTextFromAssetsWorkerCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UGatherTextFromAssetsWorkerCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UGatherTextFromAssetsWorkerCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UGatherTextFromAssetsWorkerCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UGatherTextFromAssetsWorkerCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_235_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGatherTextFromAssetsWorkerCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGatherTextFromAssetsWorkerCommandlet(UGatherTextFromAssetsWorkerCommandlet&&) = delete; \
	UGatherTextFromAssetsWorkerCommandlet(const UGatherTextFromAssetsWorkerCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGatherTextFromAssetsWorkerCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGatherTextFromAssetsWorkerCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGatherTextFromAssetsWorkerCommandlet) \
	NO_API virtual ~UGatherTextFromAssetsWorkerCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_232_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_235_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_235_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_235_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGatherTextFromAssetsWorkerCommandlet;

// ********** End Class UGatherTextFromAssetsWorkerCommandlet **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
