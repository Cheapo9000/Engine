// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserFindProperties.h"

#ifdef CHOOSEREDITOR_ChooserFindProperties_generated_h
#error "ChooserFindProperties.generated.h already included, missing '#pragma once' in ChooserFindProperties.h"
#endif
#define CHOOSEREDITOR_ChooserFindProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChooserFindProperties ***************************************************
struct Z_Construct_UClass_UChooserFindProperties_Statics;
CHOOSEREDITOR_API UClass* Z_Construct_UClass_UChooserFindProperties_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFindProperties_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChooserFindProperties(); \
	friend struct ::Z_Construct_UClass_UChooserFindProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSEREDITOR_API UClass* ::Z_Construct_UClass_UChooserFindProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserFindProperties, UAnimAssetFindReplaceProcessor_StringBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChooserEditor"), Z_Construct_UClass_UChooserFindProperties_NoRegister) \
	DECLARE_SERIALIZER(UChooserFindProperties)


#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFindProperties_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSEREDITOR_API UChooserFindProperties(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserFindProperties(UChooserFindProperties&&) = delete; \
	UChooserFindProperties(const UChooserFindProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSEREDITOR_API, UChooserFindProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserFindProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChooserFindProperties) \
	CHOOSEREDITOR_API virtual ~UChooserFindProperties();


#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFindProperties_h_10_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFindProperties_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFindProperties_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFindProperties_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserFindProperties;

// ********** End Class UChooserFindProperties *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserFindProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
