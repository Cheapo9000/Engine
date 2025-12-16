// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_Pin.h"

#ifdef TEXTUREGRAPH_TG_Pin_generated_h
#error "TG_Pin.generated.h already included, missing '#pragma once' in TG_Pin.h"
#endif
#define TEXTUREGRAPH_TG_Pin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Pin ******************************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_ACCESSORS \
static void GetAliasName_WrapperImpl(const void* Object, void* OutValue); \
static void SetAliasName_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTG_Pin, TEXTUREGRAPH_API)


struct Z_Construct_UClass_UTG_Pin_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Pin_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Pin(); \
	friend struct ::Z_Construct_UClass_UTG_Pin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Pin_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Pin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Pin_NoRegister) \
	DECLARE_SERIALIZER(UTG_Pin) \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_ARCHIVESERIALIZER


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Pin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Pin(UTG_Pin&&) = delete; \
	UTG_Pin(const UTG_Pin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Pin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Pin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Pin) \
	TEXTUREGRAPH_API virtual ~UTG_Pin();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_30_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_ACCESSORS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Pin;

// ********** End Class UTG_Pin ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Pin_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
