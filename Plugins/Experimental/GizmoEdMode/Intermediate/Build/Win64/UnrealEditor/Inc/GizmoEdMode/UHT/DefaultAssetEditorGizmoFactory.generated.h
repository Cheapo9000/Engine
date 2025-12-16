// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultAssetEditorGizmoFactory.h"

#ifdef GIZMOEDMODE_DefaultAssetEditorGizmoFactory_generated_h
#error "DefaultAssetEditorGizmoFactory.generated.h already included, missing '#pragma once' in DefaultAssetEditorGizmoFactory.h"
#endif
#define GIZMOEDMODE_DefaultAssetEditorGizmoFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDefaultAssetEditorGizmoFactory ******************************************
struct Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics;
GIZMOEDMODE_API UClass* Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultAssetEditorGizmoFactory(); \
	friend struct ::Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GIZMOEDMODE_API UClass* ::Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultAssetEditorGizmoFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GizmoEdMode"), Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_NoRegister) \
	DECLARE_SERIALIZER(UDefaultAssetEditorGizmoFactory) \
	virtual UObject* _getUObject() const override { return const_cast<UDefaultAssetEditorGizmoFactory*>(this); }


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GIZMOEDMODE_API UDefaultAssetEditorGizmoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultAssetEditorGizmoFactory(UDefaultAssetEditorGizmoFactory&&) = delete; \
	UDefaultAssetEditorGizmoFactory(const UDefaultAssetEditorGizmoFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GIZMOEDMODE_API, UDefaultAssetEditorGizmoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultAssetEditorGizmoFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultAssetEditorGizmoFactory) \
	GIZMOEDMODE_API virtual ~UDefaultAssetEditorGizmoFactory();


#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultAssetEditorGizmoFactory;

// ********** End Class UDefaultAssetEditorGizmoFactory ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
