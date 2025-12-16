// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MixedRealityCaptureActor.h"

#ifdef MIXEDREALITYCAPTUREFRAMEWORK_MixedRealityCaptureActor_generated_h
#error "MixedRealityCaptureActor.generated.h already included, missing '#pragma once' in MixedRealityCaptureActor.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_MixedRealityCaptureActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTexture;

// ********** Begin Class AMixedRealityCaptureActor ************************************************
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnTargetDestroyed); \
	DECLARE_FUNCTION(execGetCaptureTexture); \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execSetAutoBroadcast);


struct Z_Construct_UClass_AMixedRealityCaptureActor_Statics;
MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_AMixedRealityCaptureActor_NoRegister();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMixedRealityCaptureActor(); \
	friend struct ::Z_Construct_UClass_AMixedRealityCaptureActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIXEDREALITYCAPTUREFRAMEWORK_API UClass* ::Z_Construct_UClass_AMixedRealityCaptureActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMixedRealityCaptureActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), Z_Construct_UClass_AMixedRealityCaptureActor_NoRegister) \
	DECLARE_SERIALIZER(AMixedRealityCaptureActor)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMixedRealityCaptureActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMixedRealityCaptureActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMixedRealityCaptureActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMixedRealityCaptureActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMixedRealityCaptureActor(AMixedRealityCaptureActor&&) = delete; \
	AMixedRealityCaptureActor(const AMixedRealityCaptureActor&) = delete; \
	NO_API virtual ~AMixedRealityCaptureActor();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMixedRealityCaptureActor;

// ********** End Class AMixedRealityCaptureActor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
