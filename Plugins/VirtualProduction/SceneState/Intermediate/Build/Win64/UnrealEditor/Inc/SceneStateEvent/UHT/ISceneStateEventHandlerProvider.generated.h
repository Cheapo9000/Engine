// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISceneStateEventHandlerProvider.h"

#ifdef SCENESTATEEVENT_ISceneStateEventHandlerProvider_generated_h
#error "ISceneStateEventHandlerProvider.generated.h already included, missing '#pragma once' in ISceneStateEventHandlerProvider.h"
#endif
#define SCENESTATEEVENT_ISceneStateEventHandlerProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USceneStateEventHandlerProvider **************************************
struct Z_Construct_UClass_USceneStateEventHandlerProvider_Statics;
SCENESTATEEVENT_API UClass* Z_Construct_UClass_USceneStateEventHandlerProvider_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATEEVENT_API USceneStateEventHandlerProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateEventHandlerProvider(USceneStateEventHandlerProvider&&) = delete; \
	USceneStateEventHandlerProvider(const USceneStateEventHandlerProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEEVENT_API, USceneStateEventHandlerProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateEventHandlerProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateEventHandlerProvider) \
	virtual ~USceneStateEventHandlerProvider() = default;


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSceneStateEventHandlerProvider(); \
	friend struct ::Z_Construct_UClass_USceneStateEventHandlerProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEEVENT_API UClass* ::Z_Construct_UClass_USceneStateEventHandlerProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateEventHandlerProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SceneStateEvent"), Z_Construct_UClass_USceneStateEventHandlerProvider_NoRegister) \
	DECLARE_SERIALIZER(USceneStateEventHandlerProvider)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISceneStateEventHandlerProvider() {} \
public: \
	typedef USceneStateEventHandlerProvider UClassType; \
	typedef ISceneStateEventHandlerProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateEventHandlerProvider;

// ********** End Interface USceneStateEventHandlerProvider ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateEvent_Public_ISceneStateEventHandlerProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
