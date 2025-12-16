// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/ModelObject.h"

#ifdef TEXTUREGRAPHENGINE_ModelObject_generated_h
#error "ModelObject.generated.h already included, missing '#pragma once' in ModelObject.h"
#endif
#define TEXTUREGRAPHENGINE_ModelObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInvalidationDetails **********************************************
struct Z_Construct_UScriptStruct_FInvalidationDetails_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInvalidationDetails_Statics; \
	TEXTUREGRAPHENGINE_API static class UScriptStruct* StaticStruct();


struct FInvalidationDetails;
// ********** End ScriptStruct FInvalidationDetails ************************************************

// ********** Begin ScriptStruct FModelInvalidateInfo **********************************************
struct Z_Construct_UScriptStruct_FModelInvalidateInfo_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModelInvalidateInfo_Statics; \
	TEXTUREGRAPHENGINE_API static class UScriptStruct* StaticStruct();


struct FModelInvalidateInfo;
// ********** End ScriptStruct FModelInvalidateInfo ************************************************

// ********** Begin Class UModelObject *************************************************************
struct Z_Construct_UClass_UModelObject_Statics;
TEXTUREGRAPHENGINE_API UClass* Z_Construct_UClass_UModelObject_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelObject(); \
	friend struct ::Z_Construct_UClass_UModelObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHENGINE_API UClass* ::Z_Construct_UClass_UModelObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEngine"), Z_Construct_UClass_UModelObject_NoRegister) \
	DECLARE_SERIALIZER(UModelObject)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPHENGINE_API UModelObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelObject(UModelObject&&) = delete; \
	UModelObject(const UModelObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPHENGINE_API, UModelObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModelObject)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h_120_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModelObject;

// ********** End Class UModelObject ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_ModelObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
