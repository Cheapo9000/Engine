// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLoggerHUD.h"

#ifdef LOGVISUALIZER_VisualLoggerHUD_generated_h
#error "VisualLoggerHUD.generated.h already included, missing '#pragma once' in VisualLoggerHUD.h"
#endif
#define LOGVISUALIZER_VisualLoggerHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVisualLoggerHUD *********************************************************
struct Z_Construct_UClass_AVisualLoggerHUD_Statics;
LOGVISUALIZER_API UClass* Z_Construct_UClass_AVisualLoggerHUD_NoRegister();

#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAVisualLoggerHUD(); \
	friend struct ::Z_Construct_UClass_AVisualLoggerHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOGVISUALIZER_API UClass* ::Z_Construct_UClass_AVisualLoggerHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(AVisualLoggerHUD, ADebugCameraHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/LogVisualizer"), Z_Construct_UClass_AVisualLoggerHUD_NoRegister) \
	DECLARE_SERIALIZER(AVisualLoggerHUD)


#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVisualLoggerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVisualLoggerHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVisualLoggerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVisualLoggerHUD); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVisualLoggerHUD(AVisualLoggerHUD&&) = delete; \
	AVisualLoggerHUD(const AVisualLoggerHUD&) = delete; \
	NO_API virtual ~AVisualLoggerHUD();


#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_13_PROLOG
#define FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_16_INCLASS \
	FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVisualLoggerHUD;

// ********** End Class AVisualLoggerHUD ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
