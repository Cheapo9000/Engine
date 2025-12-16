// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeEditorUtilities.h"

#ifdef INTERCHANGEEDITORUTILITIES_InterchangeEditorUtilities_generated_h
#error "InterchangeEditorUtilities.generated.h already included, missing '#pragma once' in InterchangeEditorUtilities.h"
#endif
#define INTERCHANGEEDITORUTILITIES_InterchangeEditorUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeEditorUtilities **********************************************
struct Z_Construct_UClass_UInterchangeEditorUtilities_Statics;
INTERCHANGEEDITORUTILITIES_API UClass* Z_Construct_UClass_UInterchangeEditorUtilities_NoRegister();

#define FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeEditorUtilities_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeEditorUtilities(); \
	friend struct ::Z_Construct_UClass_UInterchangeEditorUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEEDITORUTILITIES_API UClass* ::Z_Construct_UClass_UInterchangeEditorUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeEditorUtilities, UInterchangeEditorUtilitiesBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEditorUtilities"), Z_Construct_UClass_UInterchangeEditorUtilities_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeEditorUtilities)


#define FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeEditorUtilities_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEEDITORUTILITIES_API UInterchangeEditorUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeEditorUtilities(UInterchangeEditorUtilities&&) = delete; \
	UInterchangeEditorUtilities(const UInterchangeEditorUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEEDITORUTILITIES_API, UInterchangeEditorUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeEditorUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeEditorUtilities) \
	INTERCHANGEEDITORUTILITIES_API virtual ~UInterchangeEditorUtilities();


#define FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeEditorUtilities_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeEditorUtilities_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeEditorUtilities_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeEditorUtilities_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeEditorUtilities;

// ********** End Class UInterchangeEditorUtilities ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Editor_Source_Utilities_Public_InterchangeEditorUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
