// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraRigRail.h"

#ifdef CINECAMERARIGS_CineCameraRigRail_generated_h
#error "CineCameraRigRail.generated.h already included, missing '#pragma once' in CineCameraRigRail.h"
#endif
#define CINECAMERARIGS_CineCameraRigRail_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineSplineComponent;
class UMaterialInterface;
class UTexture2D;
enum class ECineCameraRigRailDriveMode : uint8;

// ********** Begin Class ACineCameraRigRail *******************************************************
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAbsolutePositionOnRail); \
	DECLARE_FUNCTION(execIsSequencerDriven); \
	DECLARE_FUNCTION(execSetDisplaySpeedHeatmap); \
	DECLARE_FUNCTION(execSetDriveMode); \
	DECLARE_FUNCTION(execGetVelocityAtPosition); \
	DECLARE_FUNCTION(execSetSplineMeshTexture); \
	DECLARE_FUNCTION(execSetSplineMeshMaterial); \
	DECLARE_FUNCTION(execGetCineSplineComponent);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execOnSequencerCheck);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_ACineCameraRigRail_Statics;
CINECAMERARIGS_API UClass* Z_Construct_UClass_ACineCameraRigRail_NoRegister();

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACineCameraRigRail(); \
	friend struct ::Z_Construct_UClass_ACineCameraRigRail_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINECAMERARIGS_API UClass* ::Z_Construct_UClass_ACineCameraRigRail_NoRegister(); \
public: \
	DECLARE_CLASS2(ACineCameraRigRail, ACameraRig_Rail, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), Z_Construct_UClass_ACineCameraRigRail_NoRegister) \
	DECLARE_SERIALIZER(ACineCameraRigRail)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACineCameraRigRail(ACineCameraRigRail&&) = delete; \
	ACineCameraRigRail(const ACineCameraRigRail&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACineCameraRigRail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACineCameraRigRail); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACineCameraRigRail) \
	NO_API virtual ~ACineCameraRigRail();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACineCameraRigRail;

// ********** End Class ACineCameraRigRail *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h

// ********** Begin Enum ECineCameraRigRailDriveMode ***********************************************
#define FOREACH_ENUM_ECINECAMERARIGRAILDRIVEMODE(op) \
	op(ECineCameraRigRailDriveMode::Manual) \
	op(ECineCameraRigRailDriveMode::Duration) \
	op(ECineCameraRigRailDriveMode::Speed) 

enum class ECineCameraRigRailDriveMode : uint8;
template<> struct TIsUEnumClass<ECineCameraRigRailDriveMode> { enum { Value = true }; };
template<> CINECAMERARIGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECineCameraRigRailDriveMode>();
// ********** End Enum ECineCameraRigRailDriveMode *************************************************

// ********** Begin Enum ECineCameraRigRailLoopMode ************************************************
#define FOREACH_ENUM_ECINECAMERARIGRAILLOOPMODE(op) \
	op(ECineCameraRigRailLoopMode::NoLoop) \
	op(ECineCameraRigRailLoopMode::Loop) \
	op(ECineCameraRigRailLoopMode::Bounce) 

enum class ECineCameraRigRailLoopMode : uint8;
template<> struct TIsUEnumClass<ECineCameraRigRailLoopMode> { enum { Value = true }; };
template<> CINECAMERARIGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ECineCameraRigRailLoopMode>();
// ********** End Enum ECineCameraRigRailLoopMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
