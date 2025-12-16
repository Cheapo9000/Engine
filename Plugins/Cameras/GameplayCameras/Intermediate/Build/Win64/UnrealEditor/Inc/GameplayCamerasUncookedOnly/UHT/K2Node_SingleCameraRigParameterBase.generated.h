// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintGraph/K2Node_SingleCameraRigParameterBase.h"

#ifdef GAMEPLAYCAMERASUNCOOKEDONLY_K2Node_SingleCameraRigParameterBase_generated_h
#error "K2Node_SingleCameraRigParameterBase.generated.h already included, missing '#pragma once' in K2Node_SingleCameraRigParameterBase.h"
#endif
#define GAMEPLAYCAMERASUNCOOKEDONLY_K2Node_SingleCameraRigParameterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_SingleCameraRigParameterBase *************************************
struct Z_Construct_UClass_UK2Node_SingleCameraRigParameterBase_Statics;
GAMEPLAYCAMERASUNCOOKEDONLY_API UClass* Z_Construct_UClass_UK2Node_SingleCameraRigParameterBase_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasUncookedOnly_Private_BlueprintGraph_K2Node_SingleCameraRigParameterBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_SingleCameraRigParameterBase(); \
	friend struct ::Z_Construct_UClass_UK2Node_SingleCameraRigParameterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERASUNCOOKEDONLY_API UClass* ::Z_Construct_UClass_UK2Node_SingleCameraRigParameterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_SingleCameraRigParameterBase, UK2Node_CameraRigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCamerasUncookedOnly"), Z_Construct_UClass_UK2Node_SingleCameraRigParameterBase_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_SingleCameraRigParameterBase)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasUncookedOnly_Private_BlueprintGraph_K2Node_SingleCameraRigParameterBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_SingleCameraRigParameterBase(UK2Node_SingleCameraRigParameterBase&&) = delete; \
	UK2Node_SingleCameraRigParameterBase(const UK2Node_SingleCameraRigParameterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERASUNCOOKEDONLY_API, UK2Node_SingleCameraRigParameterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_SingleCameraRigParameterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_SingleCameraRigParameterBase) \
	GAMEPLAYCAMERASUNCOOKEDONLY_API virtual ~UK2Node_SingleCameraRigParameterBase();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasUncookedOnly_Private_BlueprintGraph_K2Node_SingleCameraRigParameterBase_h_23_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasUncookedOnly_Private_BlueprintGraph_K2Node_SingleCameraRigParameterBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasUncookedOnly_Private_BlueprintGraph_K2Node_SingleCameraRigParameterBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasUncookedOnly_Private_BlueprintGraph_K2Node_SingleCameraRigParameterBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_SingleCameraRigParameterBase;

// ********** End Class UK2Node_SingleCameraRigParameterBase ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCamerasUncookedOnly_Private_BlueprintGraph_K2Node_SingleCameraRigParameterBase_h

// ********** Begin Enum EK2Node_CameraParameterType ***********************************************
#define FOREACH_ENUM_EK2NODE_CAMERAPARAMETERTYPE(op) \
	op(EK2Node_CameraParameterType::Unknown) \
	op(EK2Node_CameraParameterType::Blendable) \
	op(EK2Node_CameraParameterType::Data) 

enum class EK2Node_CameraParameterType : uint8;
template<> struct TIsUEnumClass<EK2Node_CameraParameterType> { enum { Value = true }; };
template<> GAMEPLAYCAMERASUNCOOKEDONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EK2Node_CameraParameterType>();
// ********** End Enum EK2Node_CameraParameterType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
