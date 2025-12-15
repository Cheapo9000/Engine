// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraShakeBase.h"

#ifdef ENGINE_CameraShakeBase_generated_h
#error "CameraShakeBase.generated.h already included, missing '#pragma once' in CameraShakeBase.h"
#endif
#define ENGINE_CameraShakeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraShakePattern;

// ********** Begin ScriptStruct FCameraShakePatternStartParams ************************************
struct Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCameraShakePatternStartParams;
// ********** End ScriptStruct FCameraShakePatternStartParams **************************************

// ********** Begin ScriptStruct FCameraShakePatternUpdateParams ***********************************
struct Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCameraShakePatternUpdateParams;
// ********** End ScriptStruct FCameraShakePatternUpdateParams *************************************

// ********** Begin ScriptStruct FCameraShakePatternScrubParams ************************************
struct Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCameraShakePatternScrubParams;
// ********** End ScriptStruct FCameraShakePatternScrubParams **************************************

// ********** Begin ScriptStruct FCameraShakePatternUpdateResult ***********************************
struct Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCameraShakePatternUpdateResult;
// ********** End ScriptStruct FCameraShakePatternUpdateResult *************************************

// ********** Begin ScriptStruct FCameraShakePatternStopParams *************************************
struct Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_175_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCameraShakePatternStopParams;
// ********** End ScriptStruct FCameraShakePatternStopParams ***************************************

// ********** Begin ScriptStruct FCameraShakeDuration **********************************************
struct Z_Construct_UScriptStruct_FCameraShakeDuration_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_215_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraShakeDuration_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCameraShakeDuration;
// ********** End ScriptStruct FCameraShakeDuration ************************************************

// ********** Begin ScriptStruct FCameraShakeInfo **************************************************
struct Z_Construct_UScriptStruct_FCameraShakeInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_257_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraShakeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCameraShakeInfo;
// ********** End ScriptStruct FCameraShakeInfo ****************************************************

// ********** Begin Class UCameraShakeBase *********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_441_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRootShakePattern); \
	DECLARE_FUNCTION(execGetRootShakePattern);


struct Z_Construct_UClass_UCameraShakeBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_441_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeBase(); \
	friend struct ::Z_Construct_UClass_UCameraShakeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCameraShakeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraShakeBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCameraShakeBase_NoRegister) \
	DECLARE_SERIALIZER(UCameraShakeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_441_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraShakeBase(UCameraShakeBase&&) = delete; \
	UCameraShakeBase(const UCameraShakeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraShakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeBase) \
	ENGINE_API virtual ~UCameraShakeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_438_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_441_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_441_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_441_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_441_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraShakeBase;

// ********** End Class UCameraShakeBase ***********************************************************

// ********** Begin Class UCameraShakePattern ******************************************************
struct Z_Construct_UClass_UCameraShakePattern_Statics;
ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_637_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakePattern(); \
	friend struct ::Z_Construct_UClass_UCameraShakePattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UCameraShakePattern_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraShakePattern, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UCameraShakePattern_NoRegister) \
	DECLARE_SERIALIZER(UCameraShakePattern)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_637_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraShakePattern(UCameraShakePattern&&) = delete; \
	UCameraShakePattern(const UCameraShakePattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakePattern); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakePattern) \
	ENGINE_API virtual ~UCameraShakePattern();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_634_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_637_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_637_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_637_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraShakePattern;

// ********** End Class UCameraShakePattern ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h

// ********** Begin Enum ECameraShakePatternUpdateResultFlags **************************************
#define FOREACH_ENUM_ECAMERASHAKEPATTERNUPDATERESULTFLAGS(op) \
	op(ECameraShakePatternUpdateResultFlags::ApplyAsAbsolute) \
	op(ECameraShakePatternUpdateResultFlags::SkipAutoScale) \
	op(ECameraShakePatternUpdateResultFlags::SkipAutoPlaySpace) \
	op(ECameraShakePatternUpdateResultFlags::Default) 

enum class ECameraShakePatternUpdateResultFlags : uint8;
template<> struct TIsUEnumClass<ECameraShakePatternUpdateResultFlags> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraShakePatternUpdateResultFlags>();
// ********** End Enum ECameraShakePatternUpdateResultFlags ****************************************

// ********** Begin Enum ECameraShakeDurationType **************************************************
#define FOREACH_ENUM_ECAMERASHAKEDURATIONTYPE(op) \
	op(ECameraShakeDurationType::Fixed) \
	op(ECameraShakeDurationType::Infinite) \
	op(ECameraShakeDurationType::Custom) 

enum class ECameraShakeDurationType : uint8;
template<> struct TIsUEnumClass<ECameraShakeDurationType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECameraShakeDurationType>();
// ********** End Enum ECameraShakeDurationType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
