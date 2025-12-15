// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/ExportTextContainer.h"

#ifdef UNREALED_ExportTextContainer_generated_h
#error "ExportTextContainer.generated.h already included, missing '#pragma once' in ExportTextContainer.h"
#endif
#define UNREALED_ExportTextContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExportTextContainer *****************************************************
struct Z_Construct_UClass_UExportTextContainer_Statics;
UNREALED_API UClass* Z_Construct_UClass_UExportTextContainer_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUExportTextContainer(); \
	friend struct ::Z_Construct_UClass_UExportTextContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UExportTextContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UExportTextContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UExportTextContainer_NoRegister) \
	DECLARE_SERIALIZER(UExportTextContainer)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UExportTextContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExportTextContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UExportTextContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExportTextContainer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExportTextContainer(UExportTextContainer&&) = delete; \
	UExportTextContainer(const UExportTextContainer&) = delete; \
	UNREALED_API virtual ~UExportTextContainer();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExportTextContainer;

// ********** End Class UExportTextContainer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ExportTextContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
