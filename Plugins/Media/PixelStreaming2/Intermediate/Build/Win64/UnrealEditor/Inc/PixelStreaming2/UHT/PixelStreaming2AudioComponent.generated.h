// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PixelStreaming2AudioComponent.h"

#ifdef PIXELSTREAMING2_PixelStreaming2AudioComponent_generated_h
#error "PixelStreaming2AudioComponent.generated.h already included, missing '#pragma once' in PixelStreaming2AudioComponent.h"
#endif
#define PIXELSTREAMING2_PixelStreaming2AudioComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelStreaming2AudioComponent *******************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execIsListeningToPlayer); \
	DECLARE_FUNCTION(execStreamerListenTo); \
	DECLARE_FUNCTION(execListenTo);


struct Z_Construct_UClass_UPixelStreaming2AudioComponent_Statics;
PIXELSTREAMING2_API UClass* Z_Construct_UClass_UPixelStreaming2AudioComponent_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreaming2AudioComponent(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2AudioComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2_API UClass* ::Z_Construct_UClass_UPixelStreaming2AudioComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2AudioComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelStreaming2"), Z_Construct_UClass_UPixelStreaming2AudioComponent_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2AudioComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPixelStreaming2AudioComponent*>(this); }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2AudioComponent(UPixelStreaming2AudioComponent&&) = delete; \
	UPixelStreaming2AudioComponent(const UPixelStreaming2AudioComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreaming2AudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2AudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2AudioComponent) \
	NO_API virtual ~UPixelStreaming2AudioComponent();


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h_20_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2AudioComponent;

// ********** End Class UPixelStreaming2AudioComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Private_Blueprints_PixelStreaming2AudioComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
