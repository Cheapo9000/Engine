// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PreviewMeshCollection.h"

#ifdef ENGINE_PreviewMeshCollection_generated_h
#error "PreviewMeshCollection.generated.h already included, missing '#pragma once' in PreviewMeshCollection.h"
#endif
#define ENGINE_PreviewMeshCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPreviewMeshCollectionEntry ***************************************
struct Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPreviewMeshCollectionEntry;
// ********** End ScriptStruct FPreviewMeshCollectionEntry *****************************************

// ********** Begin Class UPreviewMeshCollection ***************************************************
struct Z_Construct_UClass_UPreviewMeshCollection_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreviewMeshCollection(); \
	friend struct ::Z_Construct_UClass_UPreviewMeshCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPreviewMeshCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UPreviewMeshCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPreviewMeshCollection_NoRegister) \
	DECLARE_SERIALIZER(UPreviewMeshCollection) \
	virtual UObject* _getUObject() const override { return const_cast<UPreviewMeshCollection*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPreviewMeshCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPreviewMeshCollection(UPreviewMeshCollection&&) = delete; \
	UPreviewMeshCollection(const UPreviewMeshCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPreviewMeshCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewMeshCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewMeshCollection) \
	ENGINE_API virtual ~UPreviewMeshCollection();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_43_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_47_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPreviewMeshCollection;

// ********** End Class UPreviewMeshCollection *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
