// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/TG_AsyncTask.h"

#ifdef TEXTUREGRAPH_TG_AsyncTask_generated_h
#error "TG_AsyncTask.generated.h already included, missing '#pragma once' in TG_AsyncTask.h"
#endif
#define TEXTUREGRAPH_TG_AsyncTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_AsyncTask ************************************************************
struct Z_Construct_UClass_UTG_AsyncTask_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_AsyncTask_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncTask_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTG_AsyncTask(); \
	friend struct ::Z_Construct_UClass_UTG_AsyncTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_AsyncTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_AsyncTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_AsyncTask_NoRegister) \
	DECLARE_SERIALIZER(UTG_AsyncTask)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncTask_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_AsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_AsyncTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_AsyncTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_AsyncTask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_AsyncTask(UTG_AsyncTask&&) = delete; \
	UTG_AsyncTask(const UTG_AsyncTask&) = delete; \
	TEXTUREGRAPH_API virtual ~UTG_AsyncTask();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncTask_h_16_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncTask_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncTask_h_19_INCLASS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncTask_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_AsyncTask;

// ********** End Class UTG_AsyncTask **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
