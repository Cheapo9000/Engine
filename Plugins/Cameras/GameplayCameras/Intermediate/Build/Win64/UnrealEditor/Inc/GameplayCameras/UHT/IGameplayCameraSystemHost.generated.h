// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/IGameplayCameraSystemHost.h"

#ifdef GAMEPLAYCAMERAS_IGameplayCameraSystemHost_generated_h
#error "IGameplayCameraSystemHost.generated.h already included, missing '#pragma once' in IGameplayCameraSystemHost.h"
#endif
#define GAMEPLAYCAMERAS_IGameplayCameraSystemHost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UGameplayCameraSystemHost ********************************************
struct Z_Construct_UClass_UGameplayCameraSystemHost_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UGameplayCameraSystemHost(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayCameraSystemHost(UGameplayCameraSystemHost&&) = delete; \
	UGameplayCameraSystemHost(const UGameplayCameraSystemHost&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UGameplayCameraSystemHost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCameraSystemHost); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCameraSystemHost) \
	virtual ~UGameplayCameraSystemHost() = default;


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayCameraSystemHost(); \
	friend struct ::Z_Construct_UClass_UGameplayCameraSystemHost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayCameraSystemHost, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UGameplayCameraSystemHost_NoRegister) \
	DECLARE_SERIALIZER(UGameplayCameraSystemHost)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplayCameraSystemHost() {} \
public: \
	typedef UGameplayCameraSystemHost UClassType; \
	typedef IGameplayCameraSystemHost ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_25_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayCameraSystemHost;

// ********** End Interface UGameplayCameraSystemHost **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_IGameplayCameraSystemHost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
