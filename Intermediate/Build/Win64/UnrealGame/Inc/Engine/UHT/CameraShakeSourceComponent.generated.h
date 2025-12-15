// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraShakeSourceComponent.h"

#ifdef ENGINE_CameraShakeSourceComponent_generated_h
#error "CameraShakeSourceComponent.generated.h already included, missing '#pragma once' in CameraShakeSourceComponent.h"
#endif
#define ENGINE_CameraShakeSourceComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraShakeBase;
class UClass;
enum class ECameraShakePlaySpace : uint8;

// ********** Begin Class UCameraShakeSourceComponent **********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttenuationFactor); \
	DECLARE_FUNCTION(execStopAllCameraShakes); \
	DECLARE_FUNCTION(execStopAllCameraShakesOfType); \
	DECLARE_FUNCTION(execStartCameraShake); \
	DECLARE_FUNCTION(execStart);


struct Z_Construct_UClass_UCameraShakeSourceComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeSourceComponent(); \
	friend struct ::Z_Construct_UClass_UCameraShakeSourceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraShakeSourceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister) \
	DECLARE_SERIALIZER(UCameraShakeSourceComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraShakeSourceComponent(UCameraShakeSourceComponent&&) = delete; \
	UCameraShakeSourceComponent(const UCameraShakeSourceComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraShakeSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeSourceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeSourceComponent) \
	ENGINE_API virtual ~UCameraShakeSourceComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraShakeSourceComponent;

// ********** End Class UCameraShakeSourceComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceComponent_h

// ********** Begin Enum ECameraShakeAttenuation ***************************************************
#define FOREACH_ENUM_ECAMERASHAKEATTENUATION(op) \
	op(ECameraShakeAttenuation::Linear) \
	op(ECameraShakeAttenuation::Quadratic) 

enum class ECameraShakeAttenuation : uint8;
template<> struct TIsUEnumClass<ECameraShakeAttenuation> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraShakeAttenuation>();
// ********** End Enum ECameraShakeAttenuation *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
