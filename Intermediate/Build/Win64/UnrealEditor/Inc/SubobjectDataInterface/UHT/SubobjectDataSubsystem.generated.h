// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubobjectDataSubsystem.h"

#ifdef SUBOBJECTDATAINTERFACE_SubobjectDataSubsystem_generated_h
#error "SubobjectDataSubsystem.generated.h already included, missing '#pragma once' in SubobjectDataSubsystem.h"
#endif
#define SUBOBJECTDATAINTERFACE_SubobjectDataSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UBlueprint;
class UClass;
class UObject;
struct FAddNewSubobjectParams;
struct FReparentSubobjectParams;
struct FSubobjectData;
struct FSubobjectDataHandle;

// ********** Begin ScriptStruct FAddNewSubobjectParams ********************************************
struct Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics;
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics; \
	SUBOBJECTDATAINTERFACE_API static class UScriptStruct* StaticStruct();


struct FAddNewSubobjectParams;
// ********** End ScriptStruct FAddNewSubobjectParams **********************************************

// ********** Begin ScriptStruct FReparentSubobjectParams ******************************************
struct Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics;
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics; \
	SUBOBJECTDATAINTERFACE_API static class UScriptStruct* StaticStruct();


struct FReparentSubobjectParams;
// ********** End ScriptStruct FReparentSubobjectParams ********************************************

// ********** Begin Class USubobjectDataSubsystem **************************************************
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRenameSubobjectMemberVariable); \
	DECLARE_FUNCTION(execDuplicateSubobjects); \
	DECLARE_FUNCTION(execPasteSubobjects); \
	DECLARE_FUNCTION(execCanPasteSubobjects); \
	DECLARE_FUNCTION(execCopySubobjects); \
	DECLARE_FUNCTION(execCanCopySubobjects); \
	DECLARE_FUNCTION(execIsValidRename); \
	DECLARE_FUNCTION(execAttachSubobject); \
	DECLARE_FUNCTION(execDetachSubobject); \
	DECLARE_FUNCTION(execReparentSubobjects); \
	DECLARE_FUNCTION(execMakeNewSceneRoot); \
	DECLARE_FUNCTION(execReparentSubobject); \
	DECLARE_FUNCTION(execChangeSubobjectClass); \
	DECLARE_FUNCTION(execRenameSubobject); \
	DECLARE_FUNCTION(execK2_DeleteSubobjectFromInstance); \
	DECLARE_FUNCTION(execDeleteSubobject); \
	DECLARE_FUNCTION(execK2_DeleteSubobjectsFromInstance); \
	DECLARE_FUNCTION(execDeleteSubobjects); \
	DECLARE_FUNCTION(execAddNewSubobject); \
	DECLARE_FUNCTION(execCreateNewBPComponent); \
	DECLARE_FUNCTION(execCreateNewCPPComponent); \
	DECLARE_FUNCTION(execFindHandleForObject); \
	DECLARE_FUNCTION(execK2_FindSubobjectDataFromHandle); \
	DECLARE_FUNCTION(execK2_GatherSubobjectDataForInstance); \
	DECLARE_FUNCTION(execK2_GatherSubobjectDataForBlueprint);


struct Z_Construct_UClass_USubobjectDataSubsystem_Statics;
SUBOBJECTDATAINTERFACE_API UClass* Z_Construct_UClass_USubobjectDataSubsystem_NoRegister();

#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectDataSubsystem(); \
	friend struct ::Z_Construct_UClass_USubobjectDataSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBOBJECTDATAINTERFACE_API UClass* ::Z_Construct_UClass_USubobjectDataSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USubobjectDataSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubobjectDataInterface"), Z_Construct_UClass_USubobjectDataSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USubobjectDataSubsystem)


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBOBJECTDATAINTERFACE_API USubobjectDataSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubobjectDataSubsystem(USubobjectDataSubsystem&&) = delete; \
	USubobjectDataSubsystem(const USubobjectDataSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBOBJECTDATAINTERFACE_API, USubobjectDataSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectDataSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubobjectDataSubsystem) \
	SUBOBJECTDATAINTERFACE_API virtual ~USubobjectDataSubsystem();


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_95_PROLOG
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubobjectDataSubsystem;

// ********** End Class USubobjectDataSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
