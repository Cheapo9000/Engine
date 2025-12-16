// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/CameraRigInstanceID.h"

#ifdef GAMEPLAYCAMERAS_CameraRigInstanceID_generated_h
#error "CameraRigInstanceID.generated.h already included, missing '#pragma once' in CameraRigInstanceID.h"
#endif
#define GAMEPLAYCAMERAS_CameraRigInstanceID_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCameraRigInstanceID;

// ********** Begin ScriptStruct FCameraRigInstanceID **********************************************
struct Z_Construct_UScriptStruct_FCameraRigInstanceID_Statics;
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraRigInstanceID_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraRigInstanceID;
// ********** End ScriptStruct FCameraRigInstanceID ************************************************

// ********** Begin Class UCameraRigInstanceFunctions **********************************************
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid);


struct Z_Construct_UClass_UCameraRigInstanceFunctions_Statics;
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraRigInstanceFunctions_NoRegister();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraRigInstanceFunctions(); \
	friend struct ::Z_Construct_UClass_UCameraRigInstanceFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYCAMERAS_API UClass* ::Z_Construct_UClass_UCameraRigInstanceFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraRigInstanceFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), Z_Construct_UClass_UCameraRigInstanceFunctions_NoRegister) \
	DECLARE_SERIALIZER(UCameraRigInstanceFunctions)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYCAMERAS_API UCameraRigInstanceFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraRigInstanceFunctions(UCameraRigInstanceFunctions&&) = delete; \
	UCameraRigInstanceFunctions(const UCameraRigInstanceFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYCAMERAS_API, UCameraRigInstanceFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraRigInstanceFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraRigInstanceFunctions) \
	GAMEPLAYCAMERAS_API virtual ~UCameraRigInstanceFunctions();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_105_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraRigInstanceFunctions;

// ********** End Class UCameraRigInstanceFunctions ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h

// ********** Begin Enum ECameraRigLayer ***********************************************************
#define FOREACH_ENUM_ECAMERARIGLAYER(op) \
	op(ECameraRigLayer::None) \
	op(ECameraRigLayer::Base) \
	op(ECameraRigLayer::Main) \
	op(ECameraRigLayer::Global) \
	op(ECameraRigLayer::Visual) 

enum class ECameraRigLayer : uint8;
template<> struct TIsUEnumClass<ECameraRigLayer> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraRigLayer>();
// ********** End Enum ECameraRigLayer *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
