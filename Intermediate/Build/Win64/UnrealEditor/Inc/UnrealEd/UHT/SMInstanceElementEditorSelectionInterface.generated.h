// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceElementEditorSelectionInterface.h"

#ifdef UNREALED_SMInstanceElementEditorSelectionInterface_generated_h
#error "SMInstanceElementEditorSelectionInterface.generated.h already included, missing '#pragma once' in SMInstanceElementEditorSelectionInterface.h"
#endif
#define UNREALED_SMInstanceElementEditorSelectionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USMInstanceElementEditorSelectionInterface *******************************
struct Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics;
UNREALED_API UClass* Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstanceElementEditorSelectionInterface(); \
	friend struct ::Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USMInstanceElementEditorSelectionInterface, USMInstanceElementSelectionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USMInstanceElementEditorSelectionInterface_NoRegister) \
	DECLARE_SERIALIZER(USMInstanceElementEditorSelectionInterface)


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USMInstanceElementEditorSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USMInstanceElementEditorSelectionInterface(USMInstanceElementEditorSelectionInterface&&) = delete; \
	USMInstanceElementEditorSelectionInterface(const USMInstanceElementEditorSelectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USMInstanceElementEditorSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceElementEditorSelectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceElementEditorSelectionInterface) \
	UNREALED_API virtual ~USMInstanceElementEditorSelectionInterface();


#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_8_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USMInstanceElementEditorSelectionInterface;

// ********** End Class USMInstanceElementEditorSelectionInterface *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementEditorSelectionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
