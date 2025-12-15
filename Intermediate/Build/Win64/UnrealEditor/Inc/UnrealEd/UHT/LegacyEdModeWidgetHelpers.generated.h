// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/LegacyEdModeWidgetHelpers.h"

#ifdef UNREALED_LegacyEdModeWidgetHelpers_generated_h
#error "LegacyEdModeWidgetHelpers.generated.h already included, missing '#pragma once' in LegacyEdModeWidgetHelpers.h"
#endif
#define UNREALED_LegacyEdModeWidgetHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseLegacyWidgetEdMode **************************************************
struct Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_143_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseLegacyWidgetEdMode(); \
	friend struct ::Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBaseLegacyWidgetEdMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseLegacyWidgetEdMode, UEdMode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBaseLegacyWidgetEdMode_NoRegister) \
	DECLARE_SERIALIZER(UBaseLegacyWidgetEdMode) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseLegacyWidgetEdMode*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBaseLegacyWidgetEdMode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseLegacyWidgetEdMode(UBaseLegacyWidgetEdMode&&) = delete; \
	UBaseLegacyWidgetEdMode(const UBaseLegacyWidgetEdMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBaseLegacyWidgetEdMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseLegacyWidgetEdMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseLegacyWidgetEdMode) \
	UNREALED_API virtual ~UBaseLegacyWidgetEdMode();


#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_140_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_143_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_143_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseLegacyWidgetEdMode;

// ********** End Class UBaseLegacyWidgetEdMode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
