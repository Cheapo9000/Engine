// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/ICustomCameraNodeParameterProvider.h"

#ifdef GAMEPLAYCAMERAS_ICustomCameraNodeParameterProvider_generated_h
#error "ICustomCameraNodeParameterProvider.generated.h already included, missing '#pragma once' in ICustomCameraNodeParameterProvider.h"
#endif
#define GAMEPLAYCAMERAS_ICustomCameraNodeParameterProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomCameraNodeBlendableParameter *******************************
struct Z_Construct_UScriptStruct_FCustomCameraNodeBlendableParameter_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomCameraNodeBlendableParameter_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCustomCameraNodeBlendableParameter;
// ********** End ScriptStruct FCustomCameraNodeBlendableParameter *********************************

// ********** Begin ScriptStruct FCustomCameraNodeDataParameter ************************************
struct Z_Construct_UScriptStruct_FCustomCameraNodeDataParameter_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomCameraNodeDataParameter_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCustomCameraNodeDataParameter;
// ********** End ScriptStruct FCustomCameraNodeDataParameter **************************************

// ********** Begin ScriptStruct FCustomCameraNodeParameters ***************************************
struct Z_Construct_UScriptStruct_FCustomCameraNodeParameters_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomCameraNodeParameters_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCustomCameraNodeParameters;
// ********** End ScriptStruct FCustomCameraNodeParameters *****************************************

// ********** Begin Interface UCustomCameraNodeParameterProvider ***********************************
struct Z_Construct_UClass_UCustomCameraNodeParameterProvider_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCustomCameraNodeParameterProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomCameraNodeParameterProvider(UCustomCameraNodeParameterProvider&&) = delete; \
	UCustomCameraNodeParameterProvider(const UCustomCameraNodeParameterProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCustomCameraNodeParameterProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomCameraNodeParameterProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomCameraNodeParameterProvider) \
	virtual ~UCustomCameraNodeParameterProvider() = default;


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_184_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCustomCameraNodeParameterProvider(); \
	friend struct ::Z_Construct_UClass_UCustomCameraNodeParameterProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomCameraNodeParameterProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister) \
	DECLARE_SERIALIZER(UCustomCameraNodeParameterProvider)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_184_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_184_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_184_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_184_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICustomCameraNodeParameterProvider() {} \
public: \
	typedef UCustomCameraNodeParameterProvider UClassType; \
	typedef ICustomCameraNodeParameterProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_181_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h_184_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomCameraNodeParameterProvider;

// ********** End Interface UCustomCameraNodeParameterProvider *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
