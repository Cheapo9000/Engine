// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Teleporter/VREditorTeleporter.h"

#ifdef VREDITOR_VREditorTeleporter_generated_h
#error "VREditorTeleporter.generated.h already included, missing '#pragma once' in VREditorTeleporter.h"
#endif
#define VREDITOR_VREditorTeleporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class UVREditorInteractor;
class UVREditorMode;
struct FLinearColor;

// ********** Begin Class AVREditorTeleporter ******************************************************
#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	VREDITOR_API virtual float GetSlideDelta_Implementation(UVREditorInteractor* Interactor, bool Axis); \
	VREDITOR_API virtual void TeleportDone_Implementation(); \
	VREDITOR_API virtual void StartTeleport_Implementation(); \
	VREDITOR_API virtual void Shutdown_Implementation(); \
	VREDITOR_API virtual void Init_Implementation(UVREditorMode* InMode); \
	DECLARE_FUNCTION(execGetInteractorTryingTeleport); \
	DECLARE_FUNCTION(execDoTeleport); \
	DECLARE_FUNCTION(execStopAiming); \
	DECLARE_FUNCTION(execStartAiming); \
	DECLARE_FUNCTION(execGetSlideDelta); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execTeleportDone); \
	DECLARE_FUNCTION(execStartTeleport); \
	DECLARE_FUNCTION(execGetVRMode); \
	DECLARE_FUNCTION(execIsTeleporting); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AVREditorTeleporter_Statics;
VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorTeleporter(); \
	friend struct ::Z_Construct_UClass_AVREditorTeleporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_AVREditorTeleporter_NoRegister(); \
public: \
	DECLARE_CLASS2(AVREditorTeleporter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_AVREditorTeleporter_NoRegister) \
	DECLARE_SERIALIZER(AVREditorTeleporter)


#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVREditorTeleporter(AVREditorTeleporter&&) = delete; \
	AVREditorTeleporter(const AVREditorTeleporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VREDITOR_API, AVREditorTeleporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorTeleporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorTeleporter) \
	VREDITOR_API virtual ~AVREditorTeleporter();


#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_25_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVREditorTeleporter;

// ********** End Class AVREditorTeleporter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_Teleporter_VREditorTeleporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
