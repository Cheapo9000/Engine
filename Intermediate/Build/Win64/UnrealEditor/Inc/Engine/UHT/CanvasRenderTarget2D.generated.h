// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CanvasRenderTarget2D.h"

#ifdef ENGINE_CanvasRenderTarget2D_generated_h
#error "CanvasRenderTarget2D.generated.h already included, missing '#pragma once' in CanvasRenderTarget2D.h"
#endif
#define ENGINE_CanvasRenderTarget2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvas;
class UCanvasRenderTarget2D;
class UClass;
class UObject;
enum class ETextureRenderTargetSampleCount : uint8;

// ********** Begin Delegate FOnCanvasRenderTargetUpdate *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_15_DELEGATE \
ENGINE_API void FOnCanvasRenderTargetUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnCanvasRenderTargetUpdate, UCanvas* Canvas, int32 Width, int32 Height);


// ********** End Delegate FOnCanvasRenderTargetUpdate *********************************************

// ********** Begin Class UCanvasRenderTarget2D ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSampleCount); \
	DECLARE_FUNCTION(execGetSampleCount); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execCreateCanvasRenderTarget2D); \
	DECLARE_FUNCTION(execUpdateResource);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCanvasRenderTarget2D_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUCanvasRenderTarget2D(); \
	friend struct ::Z_Construct_UClass_UCanvasRenderTarget2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UCanvasRenderTarget2D, UTextureRenderTarget2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister) \
	DECLARE_SERIALIZER(UCanvasRenderTarget2D)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCanvasRenderTarget2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasRenderTarget2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCanvasRenderTarget2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasRenderTarget2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCanvasRenderTarget2D(UCanvasRenderTarget2D&&) = delete; \
	UCanvasRenderTarget2D(const UCanvasRenderTarget2D&) = delete; \
	ENGINE_API virtual ~UCanvasRenderTarget2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCanvasRenderTarget2D;

// ********** End Class UCanvasRenderTarget2D ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CanvasRenderTarget2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
