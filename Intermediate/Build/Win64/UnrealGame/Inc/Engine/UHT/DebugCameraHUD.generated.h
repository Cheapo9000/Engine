// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DebugCameraHUD.h"

#ifdef ENGINE_DebugCameraHUD_generated_h
#error "DebugCameraHUD.generated.h already included, missing '#pragma once' in DebugCameraHUD.h"
#endif
#define ENGINE_DebugCameraHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADebugCameraHUD **********************************************************
struct Z_Construct_UClass_ADebugCameraHUD_Statics;
ENGINE_API UClass* Z_Construct_UClass_ADebugCameraHUD_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADebugCameraHUD(); \
	friend struct ::Z_Construct_UClass_ADebugCameraHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ADebugCameraHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(ADebugCameraHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ADebugCameraHUD_NoRegister) \
	DECLARE_SERIALIZER(ADebugCameraHUD)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADebugCameraHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugCameraHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADebugCameraHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugCameraHUD); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADebugCameraHUD(ADebugCameraHUD&&) = delete; \
	ADebugCameraHUD(const ADebugCameraHUD&) = delete; \
	ENGINE_API virtual ~ADebugCameraHUD();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADebugCameraHUD;

// ********** End Class ADebugCameraHUD ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
