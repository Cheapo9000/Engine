// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/AnimSequenceExporterFBX.h"

#ifdef UNREALED_AnimSequenceExporterFBX_generated_h
#error "AnimSequenceExporterFBX.generated.h already included, missing '#pragma once' in AnimSequenceExporterFBX.h"
#endif
#define UNREALED_AnimSequenceExporterFBX_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimSequenceExporterFBX *************************************************
struct Z_Construct_UClass_UAnimSequenceExporterFBX_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceExporterFBX_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequenceExporterFBX(); \
	friend struct ::Z_Construct_UClass_UAnimSequenceExporterFBX_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAnimSequenceExporterFBX_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequenceExporterFBX, UExporterFBX, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAnimSequenceExporterFBX_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequenceExporterFBX)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequenceExporterFBX(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequenceExporterFBX) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequenceExporterFBX); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceExporterFBX); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequenceExporterFBX(UAnimSequenceExporterFBX&&) = delete; \
	UAnimSequenceExporterFBX(const UAnimSequenceExporterFBX&) = delete; \
	NO_API virtual ~UAnimSequenceExporterFBX();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_15_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_18_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequenceExporterFBX;

// ********** End Class UAnimSequenceExporterFBX ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_AnimSequenceExporterFBX_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
