// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_Factory.h"

#ifdef TEXTUREGRAPHEDITOR_TG_Factory_generated_h
#error "TG_Factory.generated.h already included, missing '#pragma once' in TG_Factory.h"
#endif
#define TEXTUREGRAPHEDITOR_TG_Factory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Factory **************************************************************
struct Z_Construct_UClass_UTG_Factory_Statics;
TEXTUREGRAPHEDITOR_API UClass* Z_Construct_UClass_UTG_Factory_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_Factory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Factory(); \
	friend struct ::Z_Construct_UClass_UTG_Factory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UTG_Factory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Factory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEditor"), Z_Construct_UClass_UTG_Factory_NoRegister) \
	DECLARE_SERIALIZER(UTG_Factory)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_Factory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Factory(UTG_Factory&&) = delete; \
	UTG_Factory(const UTG_Factory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTG_Factory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Factory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTG_Factory) \
	NO_API virtual ~UTG_Factory();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_Factory_h_8_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_Factory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_Factory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_Factory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Factory;

// ********** End Class UTG_Factory ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_Factory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
