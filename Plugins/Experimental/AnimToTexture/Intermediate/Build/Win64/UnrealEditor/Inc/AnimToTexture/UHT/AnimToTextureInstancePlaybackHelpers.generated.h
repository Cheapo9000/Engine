// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimToTextureInstancePlaybackHelpers.h"

#ifdef ANIMTOTEXTURE_AnimToTextureInstancePlaybackHelpers_generated_h
#error "AnimToTextureInstancePlaybackHelpers.generated.h already included, missing '#pragma once' in AnimToTextureInstancePlaybackHelpers.h"
#endif
#define ANIMTOTEXTURE_AnimToTextureInstancePlaybackHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimToTextureDataAsset;
class UInstancedStaticMeshComponent;
struct FAnimToTextureAutoPlayData;
struct FAnimToTextureFrameData;

// ********** Begin ScriptStruct FAnimToTextureFrameData *******************************************
struct Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics;
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimToTextureFrameData_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


struct FAnimToTextureFrameData;
// ********** End ScriptStruct FAnimToTextureFrameData *********************************************

// ********** Begin ScriptStruct FAnimToTextureAutoPlayData ****************************************
struct Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics;
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnimToTextureAutoPlayData_Statics; \
	ANIMTOTEXTURE_API static class UScriptStruct* StaticStruct();


struct FAnimToTextureAutoPlayData;
// ********** End ScriptStruct FAnimToTextureAutoPlayData ******************************************

// ********** Begin Class UAnimToTextureInstancePlaybackLibrary ************************************
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrameDataFromDataAsset); \
	DECLARE_FUNCTION(execGetFrame); \
	DECLARE_FUNCTION(execGetAutoPlayDataFromDataAsset); \
	DECLARE_FUNCTION(execUpdateInstanceFrameData); \
	DECLARE_FUNCTION(execUpdateInstanceAutoPlayData); \
	DECLARE_FUNCTION(execBatchUpdateInstancesFrameData); \
	DECLARE_FUNCTION(execBatchUpdateInstancesAutoPlayData); \
	DECLARE_FUNCTION(execSetupInstancedMeshComponent);


struct Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics;
ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimToTextureInstancePlaybackLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMTOTEXTURE_API UClass* ::Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimToTextureInstancePlaybackLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimToTexture"), Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimToTextureInstancePlaybackLibrary)


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMTOTEXTURE_API UAnimToTextureInstancePlaybackLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimToTextureInstancePlaybackLibrary(UAnimToTextureInstancePlaybackLibrary&&) = delete; \
	UAnimToTextureInstancePlaybackLibrary(const UAnimToTextureInstancePlaybackLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMTOTEXTURE_API, UAnimToTextureInstancePlaybackLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimToTextureInstancePlaybackLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimToTextureInstancePlaybackLibrary) \
	ANIMTOTEXTURE_API virtual ~UAnimToTextureInstancePlaybackLibrary();


#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_63_PROLOG
#define FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimToTextureInstancePlaybackLibrary;

// ********** End Class UAnimToTextureInstancePlaybackLibrary **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
