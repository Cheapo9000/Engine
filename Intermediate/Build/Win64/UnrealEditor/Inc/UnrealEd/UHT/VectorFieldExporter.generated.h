// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/VectorFieldExporter.h"

#ifdef UNREALED_VectorFieldExporter_generated_h
#error "VectorFieldExporter.generated.h already included, missing '#pragma once' in VectorFieldExporter.h"
#endif
#define UNREALED_VectorFieldExporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVectorFieldExporter *****************************************************
struct Z_Construct_UClass_UVectorFieldExporter_Statics;
UNREALED_API UClass* Z_Construct_UClass_UVectorFieldExporter_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVectorFieldExporter(); \
	friend struct ::Z_Construct_UClass_UVectorFieldExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UVectorFieldExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UVectorFieldExporter, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UVectorFieldExporter_NoRegister) \
	DECLARE_SERIALIZER(UVectorFieldExporter)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVectorFieldExporter(UVectorFieldExporter&&) = delete; \
	UVectorFieldExporter(const UVectorFieldExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UVectorFieldExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldExporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldExporter) \
	UNREALED_API virtual ~UVectorFieldExporter();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVectorFieldExporter;

// ********** End Class UVectorFieldExporter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_VectorFieldExporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
