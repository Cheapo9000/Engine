// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorModeBase.h"

#ifdef VREDITOR_VREditorModeBase_generated_h
#error "VREditorModeBase.generated.h already included, missing '#pragma once' in VREditorModeBase.h"
#endif
#define VREDITOR_VREditorModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVREditorModeBase ********************************************************
struct Z_Construct_UClass_UVREditorModeBase_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVREditorModeBase_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorModeBase(); \
	friend struct ::Z_Construct_UClass_UVREditorModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVREditorModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UVREditorModeBase, UEditorWorldExtension, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVREditorModeBase_NoRegister) \
	DECLARE_SERIALIZER(UVREditorModeBase)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VREDITOR_API UVREditorModeBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVREditorModeBase(UVREditorModeBase&&) = delete; \
	UVREditorModeBase(const UVREditorModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VREDITOR_API, UVREditorModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorModeBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVREditorModeBase) \
	VREDITOR_API virtual ~UVREditorModeBase();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_19_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVREditorModeBase;

// ********** End Class UVREditorModeBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VREditorModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
