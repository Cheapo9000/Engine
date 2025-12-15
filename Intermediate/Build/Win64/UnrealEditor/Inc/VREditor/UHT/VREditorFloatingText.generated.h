// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorFloatingText.h"

#ifdef VREDITOR_VREditorFloatingText_generated_h
#error "VREditorFloatingText.generated.h already included, missing '#pragma once' in VREditorFloatingText.h"
#endif
#define VREDITOR_VREditorFloatingText_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFloatingText ************************************************************
struct Z_Construct_UClass_AFloatingText_Statics;
VREDITOR_API UClass* Z_Construct_UClass_AFloatingText_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Private_VREditorFloatingText_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloatingText(); \
	friend struct ::Z_Construct_UClass_AFloatingText_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_AFloatingText_NoRegister(); \
public: \
	DECLARE_CLASS2(AFloatingText, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_AFloatingText_NoRegister) \
	DECLARE_SERIALIZER(AFloatingText)


#define FID_Engine_Source_Editor_VREditor_Private_VREditorFloatingText_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFloatingText(AFloatingText&&) = delete; \
	AFloatingText(const AFloatingText&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingText); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloatingText) \
	NO_API virtual ~AFloatingText();


#define FID_Engine_Source_Editor_VREditor_Private_VREditorFloatingText_h_13_PROLOG
#define FID_Engine_Source_Editor_VREditor_Private_VREditorFloatingText_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Private_VREditorFloatingText_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Private_VREditorFloatingText_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFloatingText;

// ********** End Class AFloatingText **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Private_VREditorFloatingText_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
