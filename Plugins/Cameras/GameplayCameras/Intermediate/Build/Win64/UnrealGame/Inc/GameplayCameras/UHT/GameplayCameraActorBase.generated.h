// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayCameraActorBase.h"

#ifdef GAMEPLAYCAMERAS_GameplayCameraActorBase_generated_h
#error "GameplayCameraActorBase.generated.h already included, missing '#pragma once' in GameplayCameraActorBase.h"
#endif
#define GAMEPLAYCAMERAS_GameplayCameraActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameplayCameraActorBase *************************************************
struct Z_Construct_UClass_AGameplayCameraActorBase_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_AGameplayCameraActorBase_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActorBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayCameraActorBase(); \
	friend struct ::Z_Construct_UClass_AGameplayCameraActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_AGameplayCameraActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameplayCameraActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_AGameplayCameraActorBase_NoRegister) \
	DECLARE_SERIALIZER(AGameplayCameraActorBase)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActorBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameplayCameraActorBase(AGameplayCameraActorBase&&) = delete; \
	AGameplayCameraActorBase(const AGameplayCameraActorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, AGameplayCameraActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayCameraActorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayCameraActorBase) \
	GAMEPLAYCAMERAS_API virtual ~AGameplayCameraActorBase();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActorBase_h_20_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActorBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActorBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActorBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameplayCameraActorBase;

// ********** End Class AGameplayCameraActorBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraActorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
