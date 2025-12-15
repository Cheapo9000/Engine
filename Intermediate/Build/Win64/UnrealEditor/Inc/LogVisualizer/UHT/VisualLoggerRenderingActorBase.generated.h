// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLoggerRenderingActorBase.h"

#ifdef LOGVISUALIZER_VisualLoggerRenderingActorBase_generated_h
#error "VisualLoggerRenderingActorBase.generated.h already included, missing '#pragma once' in VisualLoggerRenderingActorBase.h"
#endif
#define LOGVISUALIZER_VisualLoggerRenderingActorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVisualLoggerRenderingActorBase ******************************************
struct Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics;
LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerRenderingActorBase_NoRegister();

#define FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAVisualLoggerRenderingActorBase(); \
	friend struct ::Z_Construct_UClass_AVisualLoggerRenderingActorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOGVISUALIZER_API UClass* ::Z_Construct_UClass_AVisualLoggerRenderingActorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AVisualLoggerRenderingActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LogVisualizer"), Z_Construct_UClass_AVisualLoggerRenderingActorBase_NoRegister) \
	DECLARE_SERIALIZER(AVisualLoggerRenderingActorBase)


#define FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LOGVISUALIZER_API AVisualLoggerRenderingActorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVisualLoggerRenderingActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOGVISUALIZER_API, AVisualLoggerRenderingActorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVisualLoggerRenderingActorBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVisualLoggerRenderingActorBase(AVisualLoggerRenderingActorBase&&) = delete; \
	AVisualLoggerRenderingActorBase(const AVisualLoggerRenderingActorBase&) = delete;


#define FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_21_PROLOG
#define FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_25_INCLASS \
	FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVisualLoggerRenderingActorBase;

// ********** End Class AVisualLoggerRenderingActorBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_LogVisualizer_Public_VisualLoggerRenderingActorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
