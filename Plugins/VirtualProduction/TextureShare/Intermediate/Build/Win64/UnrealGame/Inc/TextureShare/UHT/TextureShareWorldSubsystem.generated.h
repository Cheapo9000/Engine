// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/WorldSubsystem/TextureShareWorldSubsystem.h"

#ifdef TEXTURESHARE_TextureShareWorldSubsystem_generated_h
#error "TextureShareWorldSubsystem.generated.h already included, missing '#pragma once' in TextureShareWorldSubsystem.h"
#endif
#define TEXTURESHARE_TextureShareWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureShare;

// ********** Begin Class UTextureShareWorldSubsystem **********************************************
#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTextureShare);


struct Z_Construct_UClass_UTextureShareWorldSubsystem_Statics;
TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShareWorldSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureShareWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UTextureShareWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTURESHARE_API UClass* ::Z_Construct_UClass_UTextureShareWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureShareWorldSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TextureShare"), Z_Construct_UClass_UTextureShareWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UTextureShareWorldSubsystem)


#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureShareWorldSubsystem(UTextureShareWorldSubsystem&&) = delete; \
	UTextureShareWorldSubsystem(const UTextureShareWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureShareWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureShareWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTextureShareWorldSubsystem)


#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureShareWorldSubsystem;

// ********** End Class UTextureShareWorldSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
