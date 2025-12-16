// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeOpenFileDialog.h"

#ifdef INTERCHANGEEDITORUTILITIES_InterchangeOpenFileDialog_generated_h
#error "InterchangeOpenFileDialog.generated.h already included, missing '#pragma once' in InterchangeOpenFileDialog.h"
#endif
#define INTERCHANGEEDITORUTILITIES_InterchangeOpenFileDialog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeFilePickerGeneric ********************************************
struct Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics;
INTERCHANGEEDITORUTILITIES_API UClass* Z_Construct_UClass_UInterchangeFilePickerGeneric_NoRegister();

#define FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFilePickerGeneric(); \
	friend struct ::Z_Construct_UClass_UInterchangeFilePickerGeneric_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEEDITORUTILITIES_API UClass* ::Z_Construct_UClass_UInterchangeFilePickerGeneric_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeFilePickerGeneric, UInterchangeFilePickerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEditorUtilities"), Z_Construct_UClass_UInterchangeFilePickerGeneric_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeFilePickerGeneric)


#define FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEEDITORUTILITIES_API UInterchangeFilePickerGeneric(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeFilePickerGeneric(UInterchangeFilePickerGeneric&&) = delete; \
	UInterchangeFilePickerGeneric(const UInterchangeFilePickerGeneric&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEEDITORUTILITIES_API, UInterchangeFilePickerGeneric); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFilePickerGeneric); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFilePickerGeneric) \
	INTERCHANGEEDITORUTILITIES_API virtual ~UInterchangeFilePickerGeneric();


#define FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeFilePickerGeneric;

// ********** End Class UInterchangeFilePickerGeneric **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeOpenFileDialog_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
