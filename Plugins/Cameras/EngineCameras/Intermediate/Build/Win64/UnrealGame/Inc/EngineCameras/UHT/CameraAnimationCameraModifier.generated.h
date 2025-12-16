// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animations/CameraAnimationCameraModifier.h"

#ifdef ENGINECAMERAS_CameraAnimationCameraModifier_generated_h
#error "CameraAnimationCameraModifier.generated.h already included, missing '#pragma once' in CameraAnimationCameraModifier.h"
#endif
#define ENGINECAMERAS_CameraAnimationCameraModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerCameraManager;
class APlayerController;
class UCameraAnimationCameraModifier;
class UCameraAnimationSequence;
class UObject;
enum class ECameraAnimationPlaySpace : uint8;
enum class ECameraShakePlaySpace : uint8;
struct FCameraAnimationHandle;
struct FCameraAnimationParams;

// ********** Begin ScriptStruct FCameraAnimationParams ********************************************
struct Z_Construct_UScriptStruct_FCameraAnimationParams_Statics;
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraAnimationParams_Statics; \
	ENGINECAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraAnimationParams;
// ********** End ScriptStruct FCameraAnimationParams **********************************************

// ********** Begin ScriptStruct FCameraAnimationHandle ********************************************
struct Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics;
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics; \
	ENGINECAMERAS_API static class UScriptStruct* StaticStruct();


struct FCameraAnimationHandle;
// ********** End ScriptStruct FCameraAnimationHandle **********************************************

// ********** Begin ScriptStruct FActiveCameraAnimationInfo ****************************************
struct Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics;
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_136_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics; \
	ENGINECAMERAS_API static class UScriptStruct* StaticStruct();


struct FActiveCameraAnimationInfo;
// ********** End ScriptStruct FActiveCameraAnimationInfo ******************************************

// ********** Begin Class UCameraAnimationCameraModifier *******************************************
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifierFromPlayerController); \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifierFromID); \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifier); \
	DECLARE_FUNCTION(execStopAllCameraAnimations); \
	DECLARE_FUNCTION(execStopAllCameraAnimationsOf); \
	DECLARE_FUNCTION(execStopCameraAnimation); \
	DECLARE_FUNCTION(execIsCameraAnimationActive); \
	DECLARE_FUNCTION(execPlayCameraAnimation);


struct Z_Construct_UClass_UCameraAnimationCameraModifier_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_189_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraAnimationCameraModifier(); \
	friend struct ::Z_Construct_UClass_UCameraAnimationCameraModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraAnimationCameraModifier, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister) \
	DECLARE_SERIALIZER(UCameraAnimationCameraModifier) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Camera");} \



#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_189_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraAnimationCameraModifier(UCameraAnimationCameraModifier&&) = delete; \
	UCameraAnimationCameraModifier(const UCameraAnimationCameraModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, UCameraAnimationCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnimationCameraModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnimationCameraModifier) \
	ENGINECAMERAS_API virtual ~UCameraAnimationCameraModifier();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_186_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_189_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_189_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_189_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_189_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraAnimationCameraModifier;

// ********** End Class UCameraAnimationCameraModifier *********************************************

// ********** Begin Class UEngineCameraAnimationFunctionLibrary ************************************
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_CameraAnimationPlaySpace); \
	DECLARE_FUNCTION(execConv_CameraShakePlaySpace); \
	DECLARE_FUNCTION(execConv_CameraAnimationCameraModifier);


struct Z_Construct_UClass_UEngineCameraAnimationFunctionLibrary_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_UEngineCameraAnimationFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_278_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineCameraAnimationFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UEngineCameraAnimationFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_UEngineCameraAnimationFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEngineCameraAnimationFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_UEngineCameraAnimationFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEngineCameraAnimationFunctionLibrary)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_278_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINECAMERAS_API UEngineCameraAnimationFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEngineCameraAnimationFunctionLibrary(UEngineCameraAnimationFunctionLibrary&&) = delete; \
	UEngineCameraAnimationFunctionLibrary(const UEngineCameraAnimationFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, UEngineCameraAnimationFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineCameraAnimationFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineCameraAnimationFunctionLibrary) \
	ENGINECAMERAS_API virtual ~UEngineCameraAnimationFunctionLibrary();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_275_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_278_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_278_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h_278_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEngineCameraAnimationFunctionLibrary;

// ********** End Class UEngineCameraAnimationFunctionLibrary **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Animations_CameraAnimationCameraModifier_h

// ********** Begin Enum ECameraAnimationPlaySpace *************************************************
#define FOREACH_ENUM_ECAMERAANIMATIONPLAYSPACE(op) \
	op(ECameraAnimationPlaySpace::CameraLocal) \
	op(ECameraAnimationPlaySpace::World) \
	op(ECameraAnimationPlaySpace::UserDefined) 

enum class ECameraAnimationPlaySpace : uint8;
template<> struct TIsUEnumClass<ECameraAnimationPlaySpace> { enum { Value = true }; };
template<> ENGINECAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraAnimationPlaySpace>();
// ********** End Enum ECameraAnimationPlaySpace ***************************************************

// ********** Begin Enum ECameraAnimationEasingType ************************************************
#define FOREACH_ENUM_ECAMERAANIMATIONEASINGTYPE(op) \
	op(ECameraAnimationEasingType::Linear) \
	op(ECameraAnimationEasingType::Sinusoidal) \
	op(ECameraAnimationEasingType::Quadratic) \
	op(ECameraAnimationEasingType::Cubic) \
	op(ECameraAnimationEasingType::Quartic) \
	op(ECameraAnimationEasingType::Quintic) \
	op(ECameraAnimationEasingType::Exponential) \
	op(ECameraAnimationEasingType::Circular) 

enum class ECameraAnimationEasingType : uint8;
template<> struct TIsUEnumClass<ECameraAnimationEasingType> { enum { Value = true }; };
template<> ENGINECAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraAnimationEasingType>();
// ********** End Enum ECameraAnimationEasingType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
