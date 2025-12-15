// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaComponent.h"

#ifdef MEDIAASSETS_MediaComponent_generated_h
#error "MediaComponent.generated.h already included, missing '#pragma once' in MediaComponent.h"
#endif
#define MEDIAASSETS_MediaComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
class UMediaTexture;

// ********** Begin Class UMediaComponent **********************************************************
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execGetMediaPlayer);


struct Z_Construct_UClass_UMediaComponent_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaComponent_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaComponent(); \
	friend struct ::Z_Construct_UClass_UMediaComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UMediaComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UMediaComponent_NoRegister) \
	DECLARE_SERIALIZER(UMediaComponent)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaComponent(UMediaComponent&&) = delete; \
	UMediaComponent(const UMediaComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaComponent) \
	MEDIAASSETS_API virtual ~UMediaComponent();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_12_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaComponent;

// ********** End Class UMediaComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
