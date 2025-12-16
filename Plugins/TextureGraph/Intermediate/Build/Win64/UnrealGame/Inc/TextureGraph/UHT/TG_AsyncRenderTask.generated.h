// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/TG_AsyncRenderTask.h"

#ifdef TEXTUREGRAPH_TG_AsyncRenderTask_generated_h
#error "TG_AsyncRenderTask.generated.h already included, missing '#pragma once' in TG_AsyncRenderTask.h"
#endif
#define TEXTUREGRAPH_TG_AsyncRenderTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureGraphBase;
class UTextureRenderTarget2D;
class UTG_AsyncRenderTask;

// ********** Begin Delegate FTSRenderTaskDelegate *************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_19_DELEGATE \
TEXTUREGRAPH_API void FTSRenderTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& TSRenderTaskDelegate, TArray<UTextureRenderTarget2D*> const& OutputRts);


// ********** End Delegate FTSRenderTaskDelegate ***************************************************

// ********** Begin Class UTG_AsyncRenderTaskBase **************************************************
struct Z_Construct_UClass_UTG_AsyncRenderTaskBase_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_AsyncRenderTaskBase_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTG_AsyncRenderTaskBase(); \
	friend struct ::Z_Construct_UClass_UTG_AsyncRenderTaskBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_AsyncRenderTaskBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_AsyncRenderTaskBase, UTG_AsyncTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_AsyncRenderTaskBase_NoRegister) \
	DECLARE_SERIALIZER(UTG_AsyncRenderTaskBase)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_AsyncRenderTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_AsyncRenderTaskBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_AsyncRenderTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_AsyncRenderTaskBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_AsyncRenderTaskBase(UTG_AsyncRenderTaskBase&&) = delete; \
	UTG_AsyncRenderTaskBase(const UTG_AsyncRenderTaskBase&) = delete; \
	TEXTUREGRAPH_API virtual ~UTG_AsyncRenderTaskBase();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_21_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_24_INCLASS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_AsyncRenderTaskBase;

// ********** End Class UTG_AsyncRenderTaskBase ****************************************************

// ********** Begin Class UTG_AsyncRenderTask ******************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_52_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTG_AsyncRenderTask);


struct Z_Construct_UClass_UTG_AsyncRenderTask_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_AsyncRenderTask_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUTG_AsyncRenderTask(); \
	friend struct ::Z_Construct_UClass_UTG_AsyncRenderTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_AsyncRenderTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_AsyncRenderTask, UTG_AsyncRenderTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_AsyncRenderTask_NoRegister) \
	DECLARE_SERIALIZER(UTG_AsyncRenderTask)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_AsyncRenderTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_AsyncRenderTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_AsyncRenderTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_AsyncRenderTask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_AsyncRenderTask(UTG_AsyncRenderTask&&) = delete; \
	UTG_AsyncRenderTask(const UTG_AsyncRenderTask&) = delete; \
	TEXTUREGRAPH_API virtual ~UTG_AsyncRenderTask();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_49_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_52_RPC_WRAPPERS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_52_INCLASS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_AsyncRenderTask;

// ********** End Class UTG_AsyncRenderTask ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_AsyncRenderTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
