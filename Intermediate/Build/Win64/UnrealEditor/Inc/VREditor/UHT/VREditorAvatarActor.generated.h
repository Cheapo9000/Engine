// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorAvatarActor.h"

#ifdef VREDITOR_VREditorAvatarActor_generated_h
#error "VREditorAvatarActor.generated.h already included, missing '#pragma once' in VREditorAvatarActor.h"
#endif
#define VREDITOR_VREditorAvatarActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVREditorAvatarActor *****************************************************
struct Z_Construct_UClass_AVREditorAvatarActor_Statics;
VREDITOR_API UClass* Z_Construct_UClass_AVREditorAvatarActor_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Private_VREditorAvatarActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVREditorAvatarActor(); \
	friend struct ::Z_Construct_UClass_AVREditorAvatarActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_AVREditorAvatarActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVREditorAvatarActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_AVREditorAvatarActor_NoRegister) \
	DECLARE_SERIALIZER(AVREditorAvatarActor)


#define FID_Engine_Source_Editor_VREditor_Private_VREditorAvatarActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVREditorAvatarActor(AVREditorAvatarActor&&) = delete; \
	AVREditorAvatarActor(const AVREditorAvatarActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVREditorAvatarActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVREditorAvatarActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVREditorAvatarActor) \
	NO_API virtual ~AVREditorAvatarActor();


#define FID_Engine_Source_Editor_VREditor_Private_VREditorAvatarActor_h_19_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_VREditorAvatarActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_VREditorAvatarActor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_VREditorAvatarActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVREditorAvatarActor;

// ********** End Class AVREditorAvatarActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Private_VREditorAvatarActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
