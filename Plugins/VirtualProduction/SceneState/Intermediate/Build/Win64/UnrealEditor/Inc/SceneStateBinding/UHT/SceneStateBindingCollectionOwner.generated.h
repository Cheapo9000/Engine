// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateBindingCollectionOwner.h"

#ifdef SCENESTATEBINDING_SceneStateBindingCollectionOwner_generated_h
#error "SceneStateBindingCollectionOwner.generated.h already included, missing '#pragma once' in SceneStateBindingCollectionOwner.h"
#endif
#define SCENESTATEBINDING_SceneStateBindingCollectionOwner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USceneStateBindingCollectionOwner ************************************
struct Z_Construct_UClass_USceneStateBindingCollectionOwner_Statics;
SCENESTATEBINDING_API UClass* Z_Construct_UClass_USceneStateBindingCollectionOwner_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATEBINDING_API USceneStateBindingCollectionOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateBindingCollectionOwner(USceneStateBindingCollectionOwner&&) = delete; \
	USceneStateBindingCollectionOwner(const USceneStateBindingCollectionOwner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEBINDING_API, USceneStateBindingCollectionOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateBindingCollectionOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateBindingCollectionOwner) \
	virtual ~USceneStateBindingCollectionOwner() = default;


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSceneStateBindingCollectionOwner(); \
	friend struct ::Z_Construct_UClass_USceneStateBindingCollectionOwner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEBINDING_API UClass* ::Z_Construct_UClass_USceneStateBindingCollectionOwner_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateBindingCollectionOwner, UPropertyBindingBindingCollectionOwner, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SceneStateBinding"), Z_Construct_UClass_USceneStateBindingCollectionOwner_NoRegister) \
	DECLARE_SERIALIZER(USceneStateBindingCollectionOwner)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISceneStateBindingCollectionOwner() {} \
public: \
	typedef USceneStateBindingCollectionOwner UClassType; \
	typedef ISceneStateBindingCollectionOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateBindingCollectionOwner;

// ********** End Interface USceneStateBindingCollectionOwner **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateBinding_Public_SceneStateBindingCollectionOwner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
