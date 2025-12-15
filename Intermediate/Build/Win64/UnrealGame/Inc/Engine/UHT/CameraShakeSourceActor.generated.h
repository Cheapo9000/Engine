// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraShakeSourceActor.h"

#ifdef ENGINE_CameraShakeSourceActor_generated_h
#error "CameraShakeSourceActor.generated.h already included, missing '#pragma once' in CameraShakeSourceActor.h"
#endif
#define ENGINE_CameraShakeSourceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACameraShakeSourceActor **************************************************
struct Z_Construct_UClass_ACameraShakeSourceActor_Statics;
ENGINE_API UClass* Z_Construct_UClass_ACameraShakeSourceActor_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraShakeSourceActor(); \
	friend struct ::Z_Construct_UClass_ACameraShakeSourceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ACameraShakeSourceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACameraShakeSourceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ACameraShakeSourceActor_NoRegister) \
	DECLARE_SERIALIZER(ACameraShakeSourceActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACameraShakeSourceActor(ACameraShakeSourceActor&&) = delete; \
	ACameraShakeSourceActor(const ACameraShakeSourceActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ACameraShakeSourceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraShakeSourceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraShakeSourceActor) \
	ENGINE_API virtual ~ACameraShakeSourceActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACameraShakeSourceActor;

// ********** End Class ACameraShakeSourceActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
