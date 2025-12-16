// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/EditorOnlyModifierFactory.h"

#ifdef VCAMCOREEDITOR_EditorOnlyModifierFactory_generated_h
#error "EditorOnlyModifierFactory.generated.h already included, missing '#pragma once' in EditorOnlyModifierFactory.h"
#endif
#define VCAMCOREEDITOR_EditorOnlyModifierFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorOnlyModifierFactory ***********************************************
struct Z_Construct_UClass_UEditorOnlyModifierFactory_Statics;
VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UEditorOnlyModifierFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorOnlyModifierFactory(); \
	friend struct ::Z_Construct_UClass_UEditorOnlyModifierFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCOREEDITOR_API UClass* ::Z_Construct_UClass_UEditorOnlyModifierFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorOnlyModifierFactory, UVCamObjectWithInputFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCoreEditor"), Z_Construct_UClass_UEditorOnlyModifierFactory_NoRegister) \
	DECLARE_SERIALIZER(UEditorOnlyModifierFactory)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorOnlyModifierFactory(UEditorOnlyModifierFactory&&) = delete; \
	UEditorOnlyModifierFactory(const UEditorOnlyModifierFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorOnlyModifierFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorOnlyModifierFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorOnlyModifierFactory) \
	NO_API virtual ~UEditorOnlyModifierFactory();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorOnlyModifierFactory;

// ********** End Class UEditorOnlyModifierFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_EditorOnlyModifierFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
