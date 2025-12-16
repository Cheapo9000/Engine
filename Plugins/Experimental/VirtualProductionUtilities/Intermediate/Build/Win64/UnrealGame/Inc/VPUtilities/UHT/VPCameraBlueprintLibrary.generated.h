// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Libraries/VPCameraBlueprintLibrary.h"

#ifdef VPUTILITIES_VPCameraBlueprintLibrary_generated_h
#error "VPCameraBlueprintLibrary.generated.h already included, missing '#pragma once' in VPCameraBlueprintLibrary.h"
#endif
#define VPUTILITIES_VPCameraBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACameraRig_Rail;
class UObject;
struct FVPCameraRigSpawnParams;

// ********** Begin ScriptStruct FVPCameraRigSpawnParams *******************************************
struct Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics;
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics; \
	VPUTILITIES_API static class UScriptStruct* StaticStruct();


struct FVPCameraRigSpawnParams;
// ********** End ScriptStruct FVPCameraRigSpawnParams *********************************************

// ********** Begin Class UVPCameraBlueprintLibrary ************************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnCameraRigFromSelectedActors); \
	DECLARE_FUNCTION(execSpawnCameraRigFromPoints); \
	DECLARE_FUNCTION(execSpawnCameraRigFromActors); \
	DECLARE_FUNCTION(execSpawnDollyTrackFromPointsSmooth); \
	DECLARE_FUNCTION(execSpawnDollyTrackFromPoints);


struct Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_UVPCameraBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPCameraBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_UVPCameraBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPCameraBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_UVPCameraBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVPCameraBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPCameraBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPCameraBlueprintLibrary(UVPCameraBlueprintLibrary&&) = delete; \
	UVPCameraBlueprintLibrary(const UVPCameraBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPCameraBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPCameraBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPCameraBlueprintLibrary) \
	NO_API virtual ~UVPCameraBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_67_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPCameraBlueprintLibrary;

// ********** End Class UVPCameraBlueprintLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPCameraBlueprintLibrary_h

// ********** Begin Enum EVPCameraRigSpawnLinearApproximationMode **********************************
#define FOREACH_ENUM_EVPCAMERARIGSPAWNLINEARAPPROXIMATIONMODE(op) \
	op(EVPCameraRigSpawnLinearApproximationMode::None) \
	op(EVPCameraRigSpawnLinearApproximationMode::Density) \
	op(EVPCameraRigSpawnLinearApproximationMode::IntegrationStep) 

enum class EVPCameraRigSpawnLinearApproximationMode : uint8;
template<> struct TIsUEnumClass<EVPCameraRigSpawnLinearApproximationMode> { enum { Value = true }; };
template<> VPUTILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVPCameraRigSpawnLinearApproximationMode>();
// ********** End Enum EVPCameraRigSpawnLinearApproximationMode ************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
