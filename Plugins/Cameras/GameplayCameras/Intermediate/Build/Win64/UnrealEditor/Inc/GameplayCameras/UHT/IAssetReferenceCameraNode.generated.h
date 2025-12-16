// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/IAssetReferenceCameraNode.h"

#ifdef GAMEPLAYCAMERAS_IAssetReferenceCameraNode_generated_h
#error "IAssetReferenceCameraNode.generated.h already included, missing '#pragma once' in IAssetReferenceCameraNode.h"
#endif
#define GAMEPLAYCAMERAS_IAssetReferenceCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAssetReferenceCameraNode ********************************************
struct Z_Construct_UClass_UAssetReferenceCameraNode_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UAssetReferenceCameraNode_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UAssetReferenceCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetReferenceCameraNode(UAssetReferenceCameraNode&&) = delete; \
	UAssetReferenceCameraNode(const UAssetReferenceCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UAssetReferenceCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetReferenceCameraNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetReferenceCameraNode) \
	virtual ~UAssetReferenceCameraNode() = default;


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetReferenceCameraNode(); \
	friend struct ::Z_Construct_UClass_UAssetReferenceCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UAssetReferenceCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetReferenceCameraNode, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UAssetReferenceCameraNode_NoRegister) \
	DECLARE_SERIALIZER(UAssetReferenceCameraNode)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetReferenceCameraNode() {} \
public: \
	typedef UAssetReferenceCameraNode UClassType; \
	typedef IAssetReferenceCameraNode ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_13_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetReferenceCameraNode;

// ********** End Interface UAssetReferenceCameraNode **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
