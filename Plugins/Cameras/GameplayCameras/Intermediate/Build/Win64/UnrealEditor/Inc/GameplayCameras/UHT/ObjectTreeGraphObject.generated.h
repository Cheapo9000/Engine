// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/ObjectTreeGraphObject.h"

#ifdef GAMEPLAYCAMERAS_ObjectTreeGraphObject_generated_h
#error "ObjectTreeGraphObject.generated.h already included, missing '#pragma once' in ObjectTreeGraphObject.h"
#endif
#define GAMEPLAYCAMERAS_ObjectTreeGraphObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UObjectTreeGraphObject ***********************************************
struct Z_Construct_UClass_UObjectTreeGraphObject_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphObject_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UObjectTreeGraphObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTreeGraphObject(UObjectTreeGraphObject&&) = delete; \
	UObjectTreeGraphObject(const UObjectTreeGraphObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UObjectTreeGraphObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTreeGraphObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTreeGraphObject) \
	virtual ~UObjectTreeGraphObject() = default;


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObjectTreeGraphObject(); \
	friend struct ::Z_Construct_UClass_UObjectTreeGraphObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UObjectTreeGraphObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTreeGraphObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UObjectTreeGraphObject_NoRegister) \
	DECLARE_SERIALIZER(UObjectTreeGraphObject)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObjectTreeGraphObject() {} \
public: \
	typedef UObjectTreeGraphObject UClassType; \
	typedef IObjectTreeGraphObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_11_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTreeGraphObject;

// ********** End Interface UObjectTreeGraphObject *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
