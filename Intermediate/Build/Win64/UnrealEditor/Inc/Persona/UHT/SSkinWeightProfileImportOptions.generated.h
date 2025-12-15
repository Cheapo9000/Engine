// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SSkinWeightProfileImportOptions.h"

#ifdef PERSONA_SSkinWeightProfileImportOptions_generated_h
#error "SSkinWeightProfileImportOptions.generated.h already included, missing '#pragma once' in SSkinWeightProfileImportOptions.h"
#endif
#define PERSONA_SSkinWeightProfileImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkinWeightImportOptions *************************************************
struct Z_Construct_UClass_USkinWeightImportOptions_Statics;
PERSONA_API UClass* Z_Construct_UClass_USkinWeightImportOptions_NoRegister();

#define FID_Engine_Source_Editor_Persona_Public_SSkinWeightProfileImportOptions_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkinWeightImportOptions(); \
	friend struct ::Z_Construct_UClass_USkinWeightImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_USkinWeightImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(USkinWeightImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_USkinWeightImportOptions_NoRegister) \
	DECLARE_SERIALIZER(USkinWeightImportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Persona_Public_SSkinWeightProfileImportOptions_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkinWeightImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkinWeightImportOptions(USkinWeightImportOptions&&) = delete; \
	USkinWeightImportOptions(const USkinWeightImportOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkinWeightImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinWeightImportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinWeightImportOptions) \
	NO_API virtual ~USkinWeightImportOptions();


#define FID_Engine_Source_Editor_Persona_Public_SSkinWeightProfileImportOptions_h_25_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_SSkinWeightProfileImportOptions_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_SSkinWeightProfileImportOptions_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_SSkinWeightProfileImportOptions_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkinWeightImportOptions;

// ********** End Class USkinWeightImportOptions ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_SSkinWeightProfileImportOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
