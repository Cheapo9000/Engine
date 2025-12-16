// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameplayCameraParameterSetterComponent.h"

#ifdef GAMEPLAYCAMERAS_GameplayCameraParameterSetterComponent_generated_h
#error "GameplayCameraParameterSetterComponent.generated.h already included, missing '#pragma once' in GameplayCameraParameterSetterComponent.h"
#endif
#define GAMEPLAYCAMERAS_GameplayCameraParameterSetterComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UGameplayCameraParameterSetterComponent **********************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorEndOverlap); \
	DECLARE_FUNCTION(execOnActorBeginOverlap); \
	DECLARE_FUNCTION(execStopParameterSetters); \
	DECLARE_FUNCTION(execStartParameterSetters);


struct Z_Construct_UClass_UGameplayCameraParameterSetterComponent_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraParameterSetterComponent_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCameraParameterSetterComponent(); \
	friend struct ::Z_Construct_UClass_UGameplayCameraParameterSetterComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UGameplayCameraParameterSetterComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCameraParameterSetterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UGameplayCameraParameterSetterComponent_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCameraParameterSetterComponent)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCameraParameterSetterComponent(UGameplayCameraParameterSetterComponent&&) = delete; \
	UGameplayCameraParameterSetterComponent(const UGameplayCameraParameterSetterComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UGameplayCameraParameterSetterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCameraParameterSetterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCameraParameterSetterComponent) \
	GAMEPLAYCAMERAS_API virtual ~UGameplayCameraParameterSetterComponent();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h_17_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCameraParameterSetterComponent;

// ********** End Class UGameplayCameraParameterSetterComponent ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_GameplayCameraParameterSetterComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
