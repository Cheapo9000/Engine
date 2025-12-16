// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayCameraActor.h"

#ifdef GAMEPLAYCAMERAS_GameplayCameraActor_generated_h
#error "GameplayCameraActor.generated.h already included, missing '#pragma once' in GameplayCameraActor.h"
#endif
#define GAMEPLAYCAMERAS_GameplayCameraActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayCameraComponent;

// ********** Begin Class AGameplayCameraActor *****************************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraComponent);


struct Z_Construct_UClass_AGameplayCameraActor_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_AGameplayCameraActor_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayCameraActor(); \
	friend struct ::Z_Construct_UClass_AGameplayCameraActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_AGameplayCameraActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayCameraActor, AGameplayCameraActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_AGameplayCameraActor_NoRegister) \
	DECLARE_SERIALIZER(AGameplayCameraActor)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayCameraActor(AGameplayCameraActor&&) = delete; \
	AGameplayCameraActor(const AGameplayCameraActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, AGameplayCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayCameraActor) \
	GAMEPLAYCAMERAS_API virtual ~AGameplayCameraActor();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h_14_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayCameraActor;

// ********** End Class AGameplayCameraActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
