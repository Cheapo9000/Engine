// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AssetEditorContextInterface.h"

#ifdef EDITORFRAMEWORK_AssetEditorContextInterface_generated_h
#error "AssetEditorContextInterface.generated.h already included, missing '#pragma once' in AssetEditorContextInterface.h"
#endif
#define EDITORFRAMEWORK_AssetEditorContextInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAssetEditorContextInterface *****************************************
struct Z_Construct_UClass_UAssetEditorContextInterface_Statics;
EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorContextInterface_NoRegister();

#define FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORFRAMEWORK_API UAssetEditorContextInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetEditorContextInterface(UAssetEditorContextInterface&&) = delete; \
	UAssetEditorContextInterface(const UAssetEditorContextInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORFRAMEWORK_API, UAssetEditorContextInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditorContextInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetEditorContextInterface) \
	virtual ~UAssetEditorContextInterface() = default;


#define FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetEditorContextInterface(); \
	friend struct ::Z_Construct_UClass_UAssetEditorContextInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORFRAMEWORK_API UClass* ::Z_Construct_UClass_UAssetEditorContextInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetEditorContextInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EditorFramework"), Z_Construct_UClass_UAssetEditorContextInterface_NoRegister) \
	DECLARE_SERIALIZER(UAssetEditorContextInterface)


#define FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetEditorContextInterface() {} \
public: \
	typedef UAssetEditorContextInterface UClassType; \
	typedef IAssetEditorContextInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_13_PROLOG
#define FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetEditorContextInterface;

// ********** End Interface UAssetEditorContextInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorFramework_Public_Tools_AssetEditorContextInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
