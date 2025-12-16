// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosOutfitAsset/Outfit.h"

#ifdef CHAOSOUTFITASSETENGINE_Outfit_generated_h
#error "Outfit.generated.h already included, missing '#pragma once' in Outfit.h"
#endif
#define CHAOSOUTFITASSETENGINE_Outfit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosOutfitPiece *************************************************
struct Z_Construct_UScriptStruct_FChaosOutfitPiece_Statics;
#define FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosOutfitPiece_Statics; \
	CHAOSOUTFITASSETENGINE_API static class UScriptStruct* StaticStruct();


struct FChaosOutfitPiece;
// ********** End ScriptStruct FChaosOutfitPiece ***************************************************

// ********** Begin Class UChaosOutfit *************************************************************
#define FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_86_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosOutfit, CHAOSOUTFITASSETENGINE_API)


struct Z_Construct_UClass_UChaosOutfit_Statics;
CHAOSOUTFITASSETENGINE_API UClass* Z_Construct_UClass_UChaosOutfit_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosOutfit(); \
	friend struct ::Z_Construct_UClass_UChaosOutfit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSOUTFITASSETENGINE_API UClass* ::Z_Construct_UClass_UChaosOutfit_NoRegister(); \
public: \
	DECLARE_CLASS2(UChaosOutfit, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosOutfitAssetEngine"), Z_Construct_UClass_UChaosOutfit_NoRegister) \
	DECLARE_SERIALIZER(UChaosOutfit) \
	FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_86_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_86_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChaosOutfit(UChaosOutfit&&) = delete; \
	UChaosOutfit(const UChaosOutfit&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosOutfit); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosOutfit)


#define FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_83_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChaosOutfit;

// ********** End Class UChaosOutfit ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosOutfitAsset_Source_ChaosOutfitAssetEngine_Public_ChaosOutfitAsset_Outfit_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
