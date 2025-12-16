// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DisplayClusterCameraComponent.h"

#ifdef DISPLAYCLUSTER_DisplayClusterCameraComponent_generated_h
#error "DisplayClusterCameraComponent.generated.h already included, missing '#pragma once' in DisplayClusterCameraComponent.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterCameraComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDisplayClusterEyeStereoOffset : uint8;

// ********** Begin Class UDisplayClusterCameraComponent *******************************************
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetStereoOffset); \
	DECLARE_FUNCTION(execGetStereoOffset); \
	DECLARE_FUNCTION(execToggleSwapEyes); \
	DECLARE_FUNCTION(execSetSwapEyes); \
	DECLARE_FUNCTION(execGetSwapEyes); \
	DECLARE_FUNCTION(execSetInterpupillaryDistance); \
	DECLARE_FUNCTION(execGetInterpupillaryDistance);


struct Z_Construct_UClass_UDisplayClusterCameraComponent_Statics;
DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterCameraComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterCameraComponent(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterCameraComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTER_API UClass* ::Z_Construct_UClass_UDisplayClusterCameraComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), Z_Construct_UClass_UDisplayClusterCameraComponent_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterCameraComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDisplayClusterCameraComponent*>(this); }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterCameraComponent(UDisplayClusterCameraComponent&&) = delete; \
	UDisplayClusterCameraComponent(const UDisplayClusterCameraComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterCameraComponent) \
	NO_API virtual ~UDisplayClusterCameraComponent();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_57_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterCameraComponent;

// ********** End Class UDisplayClusterCameraComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h

// ********** Begin Enum EDisplayClusterEyeStereoOffset ********************************************
#define FOREACH_ENUM_EDISPLAYCLUSTEREYESTEREOOFFSET(op) \
	op(EDisplayClusterEyeStereoOffset::None) \
	op(EDisplayClusterEyeStereoOffset::Left) \
	op(EDisplayClusterEyeStereoOffset::Right) 

enum class EDisplayClusterEyeStereoOffset : uint8;
template<> struct TIsUEnumClass<EDisplayClusterEyeStereoOffset> { enum { Value = true }; };
template<> DISPLAYCLUSTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterEyeStereoOffset>();
// ********** End Enum EDisplayClusterEyeStereoOffset **********************************************

// ********** Begin Enum EDisplayClusterTargetCameraType *******************************************
#define FOREACH_ENUM_EDISPLAYCLUSTERTARGETCAMERATYPE(op) \
	op(EDisplayClusterTargetCameraType::None) \
	op(EDisplayClusterTargetCameraType::ActiveEngineCamera) \
	op(EDisplayClusterTargetCameraType::ICVFXCameraComponent) \
	op(EDisplayClusterTargetCameraType::ExternalCineCameraActor) 

enum class EDisplayClusterTargetCameraType : int32;
template<> struct TIsUEnumClass<EDisplayClusterTargetCameraType> { enum { Value = true }; };
template<> DISPLAYCLUSTER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDisplayClusterTargetCameraType>();
// ********** End Enum EDisplayClusterTargetCameraType *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
