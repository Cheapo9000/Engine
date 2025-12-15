// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorMode.h"

#ifdef VREDITOR_VREditorMode_generated_h
#error "VREditorMode.generated.h already included, missing '#pragma once' in VREditorMode.h"
#endif
#define VREDITOR_VREditorMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVREditorMode ************************************************************
#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWorldScaleFactor); \
	DECLARE_FUNCTION(execIsInGameView); \
	DECLARE_FUNCTION(execSetGameView);


struct Z_Construct_UClass_UVREditorMode_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorMode(); \
	friend struct ::Z_Construct_UClass_UVREditorMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVREditorMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UVREditorMode, UVREditorModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVREditorMode_NoRegister) \
	DECLARE_SERIALIZER(UVREditorMode)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVREditorMode(UVREditorMode&&) = delete; \
	UVREditorMode(const UVREditorMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VREDITOR_API, UVREditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVREditorMode) \
	VREDITOR_API virtual ~UVREditorMode();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_58_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVREditorMode;

// ********** End Class UVREditorMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
