// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterLandscapeBrush.h"

#ifdef WATEREDITOR_WaterLandscapeBrush_generated_h
#error "WaterLandscapeBrush.generated.h already included, missing '#pragma once' in WaterLandscapeBrush.h"
#endif
#define WATEREDITOR_WaterLandscapeBrush_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AWaterBody;
class AWaterBodyIsland;
class IWaterBrushActorInterface;
class UClass;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;

// ********** Begin Class AWaterLandscapeBrush *****************************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BlueprintOnRenderTargetTexturesUpdated_Implementation(UTexture2D* VelocityTexture); \
	virtual void BlueprintGetRenderTargets_Implementation(UTextureRenderTarget2D* InHeightRenderTarget, UTextureRenderTarget2D*& OutVelocityRenderTarget); \
	virtual void BlueprintWaterBodyChanged_Implementation(AActor* Actor); \
	virtual void BlueprintWaterBodiesChanged_Implementation(); \
	DECLARE_FUNCTION(execForceWaterTextureUpdate); \
	DECLARE_FUNCTION(execBlueprintOnRenderTargetTexturesUpdated); \
	DECLARE_FUNCTION(execBlueprintGetRenderTargets); \
	DECLARE_FUNCTION(execClearActorCache); \
	DECLARE_FUNCTION(execGetActorCache); \
	DECLARE_FUNCTION(execSetActorCache); \
	DECLARE_FUNCTION(execClearWaterBodyCache); \
	DECLARE_FUNCTION(execGetWaterBodyCache); \
	DECLARE_FUNCTION(execSetWaterBodyCache); \
	DECLARE_FUNCTION(execBlueprintWaterBodyChanged); \
	DECLARE_FUNCTION(execBlueprintWaterBodiesChanged); \
	DECLARE_FUNCTION(execGetActorsAffectingLandscape); \
	DECLARE_FUNCTION(execGetWaterBodyIslands); \
	DECLARE_FUNCTION(execGetWaterBodies);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AWaterLandscapeBrush_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_AWaterLandscapeBrush_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterLandscapeBrush(); \
	friend struct ::Z_Construct_UClass_AWaterLandscapeBrush_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_AWaterLandscapeBrush_NoRegister(); \
public: \
	DECLARE_CLASS2(AWaterLandscapeBrush, ALandscapeBlueprintBrush, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_AWaterLandscapeBrush_NoRegister) \
	DECLARE_SERIALIZER(AWaterLandscapeBrush)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AWaterLandscapeBrush(AWaterLandscapeBrush&&) = delete; \
	AWaterLandscapeBrush(const AWaterLandscapeBrush&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterLandscapeBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterLandscapeBrush); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterLandscapeBrush) \
	NO_API virtual ~AWaterLandscapeBrush();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AWaterLandscapeBrush;

// ********** End Class AWaterLandscapeBrush *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
