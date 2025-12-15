// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VREditorUISystem.h"

#ifdef VREDITOR_VREditorUISystem_generated_h
#error "VREditorUISystem.generated.h already included, missing '#pragma once' in VREditorUISystem.h"
#endif
#define VREDITOR_VREditorUISystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVRButton *********************************************************
struct Z_Construct_UScriptStruct_FVRButton_Statics;
#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVRButton_Statics; \
	VREDITOR_API static class UScriptStruct* StaticStruct();


struct FVRButton;
// ********** End ScriptStruct FVRButton ***********************************************************

// ********** Begin Class UVREditorUISystem ********************************************************
struct Z_Construct_UClass_UVREditorUISystem_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVREditorUISystem_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorUISystem(); \
	friend struct ::Z_Construct_UClass_UVREditorUISystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVREditorUISystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UVREditorUISystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVREditorUISystem_NoRegister) \
	DECLARE_SERIALIZER(UVREditorUISystem)


#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_107_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVREditorUISystem(UVREditorUISystem&&) = delete; \
	UVREditorUISystem(const UVREditorUISystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorUISystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorUISystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorUISystem) \
	NO_API virtual ~UVREditorUISystem();


#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_104_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVREditorUISystem;

// ********** End Class UVREditorUISystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_UI_VREditorUISystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
