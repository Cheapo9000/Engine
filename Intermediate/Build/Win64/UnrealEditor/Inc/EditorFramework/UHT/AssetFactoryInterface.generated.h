// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AssetFactoryInterface.h"

#ifdef EDITORFRAMEWORK_AssetFactoryInterface_generated_h
#error "AssetFactoryInterface.generated.h already included, missing '#pragma once' in AssetFactoryInterface.h"
#endif
#define EDITORFRAMEWORK_AssetFactoryInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAssetFactoryInterface ***********************************************
struct Z_Construct_UClass_UAssetFactoryInterface_Statics;
EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetFactoryInterface_NoRegister();

#define FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORFRAMEWORK_API UAssetFactoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetFactoryInterface(UAssetFactoryInterface&&) = delete; \
	UAssetFactoryInterface(const UAssetFactoryInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORFRAMEWORK_API, UAssetFactoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetFactoryInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetFactoryInterface) \
	virtual ~UAssetFactoryInterface() = default;


#define FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_26_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetFactoryInterface(); \
	friend struct ::Z_Construct_UClass_UAssetFactoryInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORFRAMEWORK_API UClass* ::Z_Construct_UClass_UAssetFactoryInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetFactoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EditorFramework"), Z_Construct_UClass_UAssetFactoryInterface_NoRegister) \
	DECLARE_SERIALIZER(UAssetFactoryInterface)


#define FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_26_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_26_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_26_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetFactoryInterface() {} \
public: \
	typedef UAssetFactoryInterface UClassType; \
	typedef IAssetFactoryInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_23_PROLOG
#define FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetFactoryInterface;

// ********** End Interface UAssetFactoryInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorFramework_Public_Factories_AssetFactoryInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
