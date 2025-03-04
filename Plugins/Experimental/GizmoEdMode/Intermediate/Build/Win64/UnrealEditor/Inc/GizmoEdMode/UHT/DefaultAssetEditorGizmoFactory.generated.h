// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultAssetEditorGizmoFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GIZMOEDMODE_DefaultAssetEditorGizmoFactory_generated_h
#error "DefaultAssetEditorGizmoFactory.generated.h already included, missing '#pragma once' in DefaultAssetEditorGizmoFactory.h"
#endif
#define GIZMOEDMODE_DefaultAssetEditorGizmoFactory_generated_h

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultAssetEditorGizmoFactory(); \
	friend struct Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics; \
public: \
	DECLARE_CLASS(UDefaultAssetEditorGizmoFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GizmoEdMode"), NO_API) \
	DECLARE_SERIALIZER(UDefaultAssetEditorGizmoFactory) \
	virtual UObject* _getUObject() const override { return const_cast<UDefaultAssetEditorGizmoFactory*>(this); }


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultAssetEditorGizmoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDefaultAssetEditorGizmoFactory(UDefaultAssetEditorGizmoFactory&&); \
	UDefaultAssetEditorGizmoFactory(const UDefaultAssetEditorGizmoFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultAssetEditorGizmoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultAssetEditorGizmoFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultAssetEditorGizmoFactory) \
	NO_API virtual ~UDefaultAssetEditorGizmoFactory();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GIZMOEDMODE_API UClass* StaticClass<class UDefaultAssetEditorGizmoFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
