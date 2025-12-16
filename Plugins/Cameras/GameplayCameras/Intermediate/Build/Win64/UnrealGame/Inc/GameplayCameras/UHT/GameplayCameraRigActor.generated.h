// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayCameraRigActor.h"

#ifdef GAMEPLAYCAMERAS_GameplayCameraRigActor_generated_h
#error "GameplayCameraRigActor.generated.h already included, missing '#pragma once' in GameplayCameraRigActor.h"
#endif
#define GAMEPLAYCAMERAS_GameplayCameraRigActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayCameraRigComponent;

// ********** Begin Class AGameplayCameraRigActor **************************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraRigComponent);


struct Z_Construct_UClass_AGameplayCameraRigActor_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_AGameplayCameraRigActor_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayCameraRigActor(); \
	friend struct ::Z_Construct_UClass_AGameplayCameraRigActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_AGameplayCameraRigActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayCameraRigActor, AGameplayCameraActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_AGameplayCameraRigActor_NoRegister) \
	DECLARE_SERIALIZER(AGameplayCameraRigActor)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayCameraRigActor(AGameplayCameraRigActor&&) = delete; \
	AGameplayCameraRigActor(const AGameplayCameraRigActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, AGameplayCameraRigActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCameraRigActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayCameraRigActor) \
	GAMEPLAYCAMERAS_API virtual ~AGameplayCameraRigActor();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayCameraRigActor;

// ********** End Class AGameplayCameraRigActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraRigActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
