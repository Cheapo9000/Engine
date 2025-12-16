// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/ObjectTreeGraphRootObject.h"

#ifdef GAMEPLAYCAMERAS_ObjectTreeGraphRootObject_generated_h
#error "ObjectTreeGraphRootObject.generated.h already included, missing '#pragma once' in ObjectTreeGraphRootObject.h"
#endif
#define GAMEPLAYCAMERAS_ObjectTreeGraphRootObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UObjectTreeGraphRootObject *******************************************
struct Z_Construct_UClass_UObjectTreeGraphRootObject_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UObjectTreeGraphRootObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectTreeGraphRootObject(UObjectTreeGraphRootObject&&) = delete; \
	UObjectTreeGraphRootObject(const UObjectTreeGraphRootObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UObjectTreeGraphRootObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTreeGraphRootObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTreeGraphRootObject) \
	virtual ~UObjectTreeGraphRootObject() = default;


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObjectTreeGraphRootObject(); \
	friend struct ::Z_Construct_UClass_UObjectTreeGraphRootObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectTreeGraphRootObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister) \
	DECLARE_SERIALIZER(UObjectTreeGraphRootObject)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObjectTreeGraphRootObject() {} \
public: \
	typedef UObjectTreeGraphRootObject UClassType; \
	typedef IObjectTreeGraphRootObject ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_10_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectTreeGraphRootObject;

// ********** End Interface UObjectTreeGraphRootObject *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
