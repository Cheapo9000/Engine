// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLoggerRenderingActor.h"

#ifdef LOGVISUALIZER_VisualLoggerRenderingActor_generated_h
#error "VisualLoggerRenderingActor.generated.h already included, missing '#pragma once' in VisualLoggerRenderingActor.h"
#endif
#define LOGVISUALIZER_VisualLoggerRenderingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVisualLoggerRenderingActor **********************************************
struct Z_Construct_UClass_AVisualLoggerRenderingActor_Statics;
LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerRenderingActor_NoRegister();

#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAVisualLoggerRenderingActor(); \
	friend struct ::Z_Construct_UClass_AVisualLoggerRenderingActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOGVISUALIZER_API UClass* ::Z_Construct_UClass_AVisualLoggerRenderingActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVisualLoggerRenderingActor, AVisualLoggerRenderingActorBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LogVisualizer"), Z_Construct_UClass_AVisualLoggerRenderingActor_NoRegister) \
	DECLARE_SERIALIZER(AVisualLoggerRenderingActor)


#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOGVISUALIZER_API AVisualLoggerRenderingActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVisualLoggerRenderingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOGVISUALIZER_API, AVisualLoggerRenderingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVisualLoggerRenderingActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVisualLoggerRenderingActor(AVisualLoggerRenderingActor&&) = delete; \
	AVisualLoggerRenderingActor(const AVisualLoggerRenderingActor&) = delete;


#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_22_PROLOG
#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_26_INCLASS \
	FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVisualLoggerRenderingActor;

// ********** End Class AVisualLoggerRenderingActor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
