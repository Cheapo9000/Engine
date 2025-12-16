// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeVREditorMode.h"

#ifdef XRCREATIVEEDITOR_XRCreativeVREditorMode_generated_h
#error "XRCreativeVREditorMode.generated.h already included, missing '#pragma once' in XRCreativeVREditorMode.h"
#endif
#define XRCREATIVEEDITOR_XRCreativeVREditorMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UXRCreativeVREditorMode **************************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHeadTransform); \
	DECLARE_FUNCTION(execSetRoomTransform); \
	DECLARE_FUNCTION(execGetHeadTransform); \
	DECLARE_FUNCTION(execGetRoomTransform);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UXRCreativeVREditorMode_Statics;
XRCREATIVEEDITOR_API UClass* Z_Construct_UClass_UXRCreativeVREditorMode_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeVREditorMode(); \
	friend struct ::Z_Construct_UClass_UXRCreativeVREditorMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVEEDITOR_API UClass* ::Z_Construct_UClass_UXRCreativeVREditorMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRCreativeVREditorMode, UVREditorModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/XRCreativeEditor"), Z_Construct_UClass_UXRCreativeVREditorMode_NoRegister) \
	DECLARE_SERIALIZER(UXRCreativeVREditorMode)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRCreativeVREditorMode(UXRCreativeVREditorMode&&) = delete; \
	UXRCreativeVREditorMode(const UXRCreativeVREditorMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeVREditorMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeVREditorMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UXRCreativeVREditorMode) \
	NO_API virtual ~UXRCreativeVREditorMode();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRCreativeVREditorMode;

// ********** End Class UXRCreativeVREditorMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreativeEditor_Private_XRCreativeVREditorMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
