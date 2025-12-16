// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FxMat/MaterialManager.h"

#ifdef TEXTUREGRAPHENGINE_MaterialManager_generated_h
#error "MaterialManager.generated.h already included, missing '#pragma once' in MaterialManager.h"
#endif
#define TEXTUREGRAPHENGINE_MaterialManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMaterialManager *********************************************************
struct Z_Construct_UClass_UMaterialManager_Statics;
TEXTUREGRAPHENGINE_API UClass* Z_Construct_UClass_UMaterialManager_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_FxMat_MaterialManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialManager(); \
	friend struct ::Z_Construct_UClass_UMaterialManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHENGINE_API UClass* ::Z_Construct_UClass_UMaterialManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMaterialManager, UModelObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEngine"), Z_Construct_UClass_UMaterialManager_NoRegister) \
	DECLARE_SERIALIZER(UMaterialManager)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_FxMat_MaterialManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMaterialManager(UMaterialManager&&) = delete; \
	UMaterialManager(const UMaterialManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPHENGINE_API, UMaterialManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaterialManager)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_FxMat_MaterialManager_h_16_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_FxMat_MaterialManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_FxMat_MaterialManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_FxMat_MaterialManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMaterialManager;

// ********** End Class UMaterialManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_FxMat_MaterialManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
