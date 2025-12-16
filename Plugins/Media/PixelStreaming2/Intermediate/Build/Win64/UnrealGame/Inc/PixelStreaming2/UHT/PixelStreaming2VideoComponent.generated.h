// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PixelStreaming2VideoComponent.h"

#ifdef PIXELSTREAMING2_PixelStreaming2VideoComponent_generated_h
#error "PixelStreaming2VideoComponent.generated.h already included, missing '#pragma once' in PixelStreaming2VideoComponent.h"
#endif
#define PIXELSTREAMING2_PixelStreaming2VideoComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreaming2VideoComponent *******************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execIsWatchingPlayer); \
	DECLARE_FUNCTION(execStreamerWatch); \
	DECLARE_FUNCTION(execWatch);


struct Z_Construct_UClass_UPixelStreaming2VideoComponent_Statics;
PIXELSTREAMING2_API UClass* Z_Construct_UClass_UPixelStreaming2VideoComponent_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreaming2VideoComponent(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2VideoComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2_API UClass* ::Z_Construct_UClass_UPixelStreaming2VideoComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2VideoComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreaming2"), Z_Construct_UClass_UPixelStreaming2VideoComponent_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2VideoComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPixelStreaming2VideoComponent*>(this); }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2VideoComponent(UPixelStreaming2VideoComponent&&) = delete; \
	UPixelStreaming2VideoComponent(const UPixelStreaming2VideoComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreaming2VideoComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2VideoComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2VideoComponent) \
	NO_API virtual ~UPixelStreaming2VideoComponent();


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h_18_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2VideoComponent;

// ********** End Class UPixelStreaming2VideoComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2VideoComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
