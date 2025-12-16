// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_InstanceFactory.h"

#ifdef TEXTUREGRAPHEDITOR_TG_InstanceFactory_generated_h
#error "TG_InstanceFactory.generated.h already included, missing '#pragma once' in TG_InstanceFactory.h"
#endif
#define TEXTUREGRAPHEDITOR_TG_InstanceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_InstanceFactory ******************************************************
struct Z_Construct_UClass_UTG_InstanceFactory_Statics;
TEXTUREGRAPHEDITOR_API UClass* Z_Construct_UClass_UTG_InstanceFactory_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_InstanceFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_InstanceFactory(); \
	friend struct ::Z_Construct_UClass_UTG_InstanceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UTG_InstanceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_InstanceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEditor"), Z_Construct_UClass_UTG_InstanceFactory_NoRegister) \
	DECLARE_SERIALIZER(UTG_InstanceFactory)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_InstanceFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_InstanceFactory(UTG_InstanceFactory&&) = delete; \
	UTG_InstanceFactory(const UTG_InstanceFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTG_InstanceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_InstanceFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTG_InstanceFactory) \
	NO_API virtual ~UTG_InstanceFactory();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_InstanceFactory_h_9_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_InstanceFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_InstanceFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_InstanceFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_InstanceFactory;

// ********** End Class UTG_InstanceFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Private_TG_InstanceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
