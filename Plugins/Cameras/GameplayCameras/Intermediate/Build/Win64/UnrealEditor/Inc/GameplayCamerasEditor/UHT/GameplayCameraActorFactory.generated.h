// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/GameplayCameraActorFactory.h"

#ifdef GAMEPLAYCAMERASEDITOR_GameplayCameraActorFactory_generated_h
#error "GameplayCameraActorFactory.generated.h already included, missing '#pragma once' in GameplayCameraActorFactory.h"
#endif
#define GAMEPLAYCAMERASEDITOR_GameplayCameraActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayCameraActorFactory **********************************************
struct Z_Construct_UClass_UGameplayCameraActorFactory_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UGameplayCameraActorFactory_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraActorFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCameraActorFactory(); \
	friend struct ::Z_Construct_UClass_UGameplayCameraActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UGameplayCameraActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCameraActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UGameplayCameraActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCameraActorFactory)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraActorFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCameraActorFactory(UGameplayCameraActorFactory&&) = delete; \
	UGameplayCameraActorFactory(const UGameplayCameraActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayCameraActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCameraActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCameraActorFactory) \
	NO_API virtual ~UGameplayCameraActorFactory();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraActorFactory_h_10_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraActorFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraActorFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraActorFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCameraActorFactory;

// ********** End Class UGameplayCameraActorFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
