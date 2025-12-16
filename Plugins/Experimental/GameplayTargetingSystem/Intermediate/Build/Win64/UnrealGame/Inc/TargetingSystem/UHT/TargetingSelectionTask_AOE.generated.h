// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/TargetingSelectionTask_AOE.h"

#ifdef TARGETINGSYSTEM_TargetingSelectionTask_AOE_generated_h
#error "TargetingSelectionTask_AOE.generated.h already included, missing '#pragma once' in TargetingSelectionTask_AOE.h"
#endif
#define TARGETINGSYSTEM_TargetingSelectionTask_AOE_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTargetingRequestHandle;

// ********** Begin Class UTargetingSelectionTask_AOE **********************************************
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	TARGETINGSYSTEM_API virtual FRotator GetSourceRotationOffset_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual FQuat GetSourceRotation_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual FVector GetSourceOffset_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual FVector GetSourceLocation_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	DECLARE_FUNCTION(execGetSourceRotationOffset); \
	DECLARE_FUNCTION(execGetSourceRotation); \
	DECLARE_FUNCTION(execGetSourceOffset); \
	DECLARE_FUNCTION(execGetSourceLocation);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics;
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSelectionTask_AOE_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingSelectionTask_AOE(); \
	friend struct ::Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TARGETINGSYSTEM_API UClass* ::Z_Construct_UClass_UTargetingSelectionTask_AOE_NoRegister(); \
public: \
	DECLARE_CLASS2(UTargetingSelectionTask_AOE, UTargetingTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), Z_Construct_UClass_UTargetingSelectionTask_AOE_NoRegister) \
	DECLARE_SERIALIZER(UTargetingSelectionTask_AOE)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTargetingSelectionTask_AOE(UTargetingSelectionTask_AOE&&) = delete; \
	UTargetingSelectionTask_AOE(const UTargetingSelectionTask_AOE&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TARGETINGSYSTEM_API, UTargetingSelectionTask_AOE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingSelectionTask_AOE); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingSelectionTask_AOE) \
	TARGETINGSYSTEM_API virtual ~UTargetingSelectionTask_AOE();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_48_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTargetingSelectionTask_AOE;

// ********** End Class UTargetingSelectionTask_AOE ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_AOE_h

// ********** Begin Enum ETargetingAOEShape ********************************************************
#define FOREACH_ENUM_ETARGETINGAOESHAPE(op) \
	op(ETargetingAOEShape::Box) \
	op(ETargetingAOEShape::Cylinder) \
	op(ETargetingAOEShape::Sphere) \
	op(ETargetingAOEShape::Capsule) \
	op(ETargetingAOEShape::SourceComponent) 

enum class ETargetingAOEShape : uint8;
template<> struct TIsUEnumClass<ETargetingAOEShape> { enum { Value = true }; };
template<> TARGETINGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ETargetingAOEShape>();
// ********** End Enum ETargetingAOEShape **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
