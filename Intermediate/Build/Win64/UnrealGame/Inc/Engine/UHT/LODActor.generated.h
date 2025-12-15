// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LODActor.h"

#ifdef ENGINE_LODActor_generated_h
#error "LODActor.generated.h already included, missing '#pragma once' in LODActor.h"
#endif
#define ENGINE_LODActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin ScriptStruct FHLODInstancingKey ************************************************
struct Z_Construct_UScriptStruct_FHLODInstancingKey_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHLODInstancingKey_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FHLODInstancingKey;
// ********** End ScriptStruct FHLODInstancingKey **************************************************

// ********** Begin Class ALODActor ****************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnSubActorEndPlay);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALODActor, ENGINE_API)


struct Z_Construct_UClass_ALODActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ALODActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_INCLASS \
private: \
	static void StaticRegisterNativesALODActor(); \
	friend struct ::Z_Construct_UClass_ALODActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ALODActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALODActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ALODActor_NoRegister) \
	DECLARE_SERIALIZER(ALODActor) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALODActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALODActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALODActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALODActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALODActor(ALODActor&&) = delete; \
	ALODActor(const ALODActor&) = delete; \
	ENGINE_API virtual ~ALODActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_68_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALODActor;

// ********** End Class ALODActor ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
