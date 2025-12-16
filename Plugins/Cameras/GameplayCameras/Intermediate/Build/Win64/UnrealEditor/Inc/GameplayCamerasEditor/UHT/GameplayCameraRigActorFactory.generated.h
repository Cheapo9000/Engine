// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/GameplayCameraRigActorFactory.h"

#ifdef GAMEPLAYCAMERASEDITOR_GameplayCameraRigActorFactory_generated_h
#error "GameplayCameraRigActorFactory.generated.h already included, missing '#pragma once' in GameplayCameraRigActorFactory.h"
#endif
#define GAMEPLAYCAMERASEDITOR_GameplayCameraRigActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayCameraRigActorFactory *******************************************
struct Z_Construct_UClass_UGameplayCameraRigActorFactory_Statics;
GAMEPLAYCAMERASEDITOR_API UClass* Z_Construct_UClass_UGameplayCameraRigActorFactory_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraRigActorFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCameraRigActorFactory(); \
	friend struct ::Z_Construct_UClass_UGameplayCameraRigActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASEDITOR_API UClass* ::Z_Construct_UClass_UGameplayCameraRigActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCameraRigActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCamerasEditor"), Z_Construct_UClass_UGameplayCameraRigActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCameraRigActorFactory)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraRigActorFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCameraRigActorFactory(UGameplayCameraRigActorFactory&&) = delete; \
	UGameplayCameraRigActorFactory(const UGameplayCameraRigActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayCameraRigActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCameraRigActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCameraRigActorFactory) \
	NO_API virtual ~UGameplayCameraRigActorFactory();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraRigActorFactory_h_10_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraRigActorFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraRigActorFactory_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraRigActorFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCameraRigActorFactory;

// ********** End Class UGameplayCameraRigActorFactory *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasEditor_Private_ActorFactories_GameplayCameraRigActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
