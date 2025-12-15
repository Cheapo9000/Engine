// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/LevelExporterFBX.h"

#ifdef UNREALED_LevelExporterFBX_generated_h
#error "LevelExporterFBX.generated.h already included, missing '#pragma once' in LevelExporterFBX.h"
#endif
#define UNREALED_LevelExporterFBX_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelExporterFBX ********************************************************
struct Z_Construct_UClass_ULevelExporterFBX_Statics;
UNREALED_API UClass* Z_Construct_UClass_ULevelExporterFBX_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterFBX_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelExporterFBX(); \
	friend struct ::Z_Construct_UClass_ULevelExporterFBX_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_ULevelExporterFBX_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelExporterFBX, UExporterFBX, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_ULevelExporterFBX_NoRegister) \
	DECLARE_SERIALIZER(ULevelExporterFBX)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterFBX_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelExporterFBX(ULevelExporterFBX&&) = delete; \
	ULevelExporterFBX(const ULevelExporterFBX&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelExporterFBX); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelExporterFBX); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelExporterFBX) \
	NO_API virtual ~ULevelExporterFBX();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterFBX_h_16_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterFBX_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterFBX_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterFBX_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelExporterFBX;

// ********** End Class ULevelExporterFBX **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterFBX_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
