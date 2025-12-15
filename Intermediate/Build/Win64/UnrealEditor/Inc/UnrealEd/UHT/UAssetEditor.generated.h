// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/UAssetEditor.h"

#ifdef UNREALED_UAssetEditor_generated_h
#error "UAssetEditor.generated.h already included, missing '#pragma once' in UAssetEditor.h"
#endif
#define UNREALED_UAssetEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetEditor *************************************************************
struct Z_Construct_UClass_UAssetEditor_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAssetEditor_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetEditor(); \
	friend struct ::Z_Construct_UClass_UAssetEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAssetEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetEditor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAssetEditor_NoRegister) \
	DECLARE_SERIALIZER(UAssetEditor)


#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetEditor(UAssetEditor&&) = delete; \
	UAssetEditor(const UAssetEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAssetEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAssetEditor) \
	UNREALED_API virtual ~UAssetEditor();


#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_21_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetEditor;

// ********** End Class UAssetEditor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Tools_UAssetEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
