// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimToTextureBPLibrary.h"

#ifdef ANIMTOTEXTUREEDITOR_AnimToTextureBPLibrary_generated_h
#error "AnimToTextureBPLibrary.generated.h already included, missing '#pragma once' in AnimToTextureBPLibrary.h"
#endif
#define ANIMTOTEXTUREEDITOR_AnimToTextureBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimToTextureDataAsset;
class UMaterialInstanceConstant;
class USkeletalMesh;
class UStaticMesh;

// ********** Begin Class UAnimToTextureBPLibrary **************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execUpdateMaterialInstanceFromDataAsset); \
	DECLARE_FUNCTION(execSetLightMapIndex); \
	DECLARE_FUNCTION(execConvertSkeletalMeshToStaticMesh); \
	DECLARE_FUNCTION(execAnimationToTexture);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAnimToTextureBPLibrary_Statics;
ANIMTOTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimToTextureBPLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAnimToTextureBPLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimToTextureBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMTOTEXTUREEDITOR_API UClass* ::Z_Construct_UClass_UAnimToTextureBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimToTextureBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTextureEditor"), Z_Construct_UClass_UAnimToTextureBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimToTextureBPLibrary)


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimToTextureBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimToTextureBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureBPLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimToTextureBPLibrary(UAnimToTextureBPLibrary&&) = delete; \
	UAnimToTextureBPLibrary(const UAnimToTextureBPLibrary&) = delete; \
	NO_API virtual ~UAnimToTextureBPLibrary();


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_INCLASS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimToTextureBPLibrary;

// ********** End Class UAnimToTextureBPLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
