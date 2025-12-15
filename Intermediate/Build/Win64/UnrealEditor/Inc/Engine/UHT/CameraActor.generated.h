// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraActor.h"

#ifdef ENGINE_CameraActor_generated_h
#error "CameraActor.generated.h already included, missing '#pragma once' in CameraActor.h"
#endif
#define ENGINE_CameraActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACameraActor *************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAutoActivatePlayerIndex);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ACameraActor, ENGINE_API)


struct Z_Construct_UClass_ACameraActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACameraActor(); \
	friend struct ::Z_Construct_UClass_ACameraActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ACameraActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACameraActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ACameraActor_NoRegister) \
	DECLARE_SERIALIZER(ACameraActor) \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ACameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ACameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACameraActor(ACameraActor&&) = delete; \
	ACameraActor(const ACameraActor&) = delete; \
	ENGINE_API virtual ~ACameraActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACameraActor;

// ********** End Class ACameraActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
