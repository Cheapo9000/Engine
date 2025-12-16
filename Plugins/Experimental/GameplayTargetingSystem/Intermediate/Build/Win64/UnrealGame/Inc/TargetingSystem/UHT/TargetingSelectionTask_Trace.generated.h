// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/TargetingSelectionTask_Trace.h"

#ifdef TARGETINGSYSTEM_TargetingSelectionTask_Trace_generated_h
#error "TargetingSelectionTask_Trace.generated.h already included, missing '#pragma once' in TargetingSelectionTask_Trace.h"
#endif
#define TARGETINGSYSTEM_TargetingSelectionTask_Trace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTargetingRequestHandle;

// ********** Begin Class UTargetingSelectionTask_Trace ********************************************
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	TARGETINGSYSTEM_API virtual void GetAdditionalActorsToIgnore_Implementation(FTargetingRequestHandle const& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore) const; \
	TARGETINGSYSTEM_API virtual FRotator GetSweptTraceRotation_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual FVector GetSweptTraceBoxHalfExtents_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual float GetSweptTraceCapsuleHalfHeight_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual float GetSweptTraceRadius_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual float GetTraceLength_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual FVector GetTraceDirection_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual FVector GetSourceOffset_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	TARGETINGSYSTEM_API virtual FVector GetSourceLocation_Implementation(FTargetingRequestHandle const& TargetingHandle) const; \
	DECLARE_FUNCTION(execGetAdditionalActorsToIgnore); \
	DECLARE_FUNCTION(execGetSweptTraceRotation); \
	DECLARE_FUNCTION(execGetSweptTraceBoxHalfExtents); \
	DECLARE_FUNCTION(execGetSweptTraceCapsuleHalfHeight); \
	DECLARE_FUNCTION(execGetSweptTraceRadius); \
	DECLARE_FUNCTION(execGetTraceLength); \
	DECLARE_FUNCTION(execGetTraceDirection); \
	DECLARE_FUNCTION(execGetSourceOffset); \
	DECLARE_FUNCTION(execGetSourceLocation);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics;
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSelectionTask_Trace_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingSelectionTask_Trace(); \
	friend struct ::Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TARGETINGSYSTEM_API UClass* ::Z_Construct_UClass_UTargetingSelectionTask_Trace_NoRegister(); \
public: \
	DECLARE_CLASS2(UTargetingSelectionTask_Trace, UTargetingTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), Z_Construct_UClass_UTargetingSelectionTask_Trace_NoRegister) \
	DECLARE_SERIALIZER(UTargetingSelectionTask_Trace)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTargetingSelectionTask_Trace(UTargetingSelectionTask_Trace&&) = delete; \
	UTargetingSelectionTask_Trace(const UTargetingSelectionTask_Trace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TARGETINGSYSTEM_API, UTargetingSelectionTask_Trace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingSelectionTask_Trace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingSelectionTask_Trace) \
	TARGETINGSYSTEM_API virtual ~UTargetingSelectionTask_Trace();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTargetingSelectionTask_Trace;

// ********** End Class UTargetingSelectionTask_Trace **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Public_Tasks_TargetingSelectionTask_Trace_h

// ********** Begin Enum ETargetingTraceType *******************************************************
#define FOREACH_ENUM_ETARGETINGTRACETYPE(op) \
	op(ETargetingTraceType::Line) \
	op(ETargetingTraceType::Sphere) \
	op(ETargetingTraceType::Capsule) \
	op(ETargetingTraceType::Box) 

enum class ETargetingTraceType : uint8;
template<> struct TIsUEnumClass<ETargetingTraceType> { enum { Value = true }; };
template<> TARGETINGSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<ETargetingTraceType>();
// ********** End Enum ETargetingTraceType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
