// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/TG_AsyncExportTask.h"

#ifdef TEXTUREGRAPH_TG_AsyncExportTask_generated_h
#error "TG_AsyncExportTask.generated.h already included, missing '#pragma once' in TG_AsyncExportTask.h"
#endif
#define TEXTUREGRAPH_TG_AsyncExportTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureGraphBase;
class UTG_AsyncExportTask;

// ********** Begin Delegate FTSExportTaskDelegate *************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_18_DELEGATE \
TEXTUREGRAPH_API void FTSExportTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& TSExportTaskDelegate);


// ********** End Delegate FTSExportTaskDelegate ***************************************************

// ********** Begin Class UTG_AsyncExportTask ******************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnExportDone); \
	DECLARE_FUNCTION(execTG_AsyncExportTask);


struct Z_Construct_UClass_UTG_AsyncExportTask_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_AsyncExportTask_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTG_AsyncExportTask(); \
	friend struct ::Z_Construct_UClass_UTG_AsyncExportTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_AsyncExportTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_AsyncExportTask, UTG_AsyncRenderTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_AsyncExportTask_NoRegister) \
	DECLARE_SERIALIZER(UTG_AsyncExportTask)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_AsyncExportTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_AsyncExportTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_AsyncExportTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_AsyncExportTask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_AsyncExportTask(UTG_AsyncExportTask&&) = delete; \
	UTG_AsyncExportTask(const UTG_AsyncExportTask&) = delete; \
	TEXTUREGRAPH_API virtual ~UTG_AsyncExportTask();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_20_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_23_INCLASS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_AsyncExportTask;

// ********** End Class UTG_AsyncExportTask ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncExportTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
