// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelStreamingDynamic.h"

#ifdef ENGINE_LevelStreamingDynamic_generated_h
#error "LevelStreamingDynamic.generated.h already included, missing '#pragma once' in LevelStreamingDynamic.h"
#endif
#define ENGINE_LevelStreamingDynamic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULevelStreamingDynamic;
class UObject;
class UWorld;

// ********** Begin Class ULevelStreamingDynamic ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLoadLevelInstanceBySoftObjectPtr); \
	DECLARE_FUNCTION(execLoadLevelInstance);


struct Z_Construct_UClass_ULevelStreamingDynamic_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingDynamic(); \
	friend struct ::Z_Construct_UClass_ULevelStreamingDynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULevelStreamingDynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelStreamingDynamic, ULevelStreaming, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister) \
	DECLARE_SERIALIZER(ULevelStreamingDynamic)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreamingDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreamingDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingDynamic); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelStreamingDynamic(ULevelStreamingDynamic&&) = delete; \
	ULevelStreamingDynamic(const ULevelStreamingDynamic&) = delete; \
	ENGINE_API virtual ~ULevelStreamingDynamic();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelStreamingDynamic;

// ********** End Class ULevelStreamingDynamic *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingDynamic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
