// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/GLTFSkeletalMeshExporter.h"

#ifdef GLTFEXPORTER_GLTFSkeletalMeshExporter_generated_h
#error "GLTFSkeletalMeshExporter.generated.h already included, missing '#pragma once' in GLTFSkeletalMeshExporter.h"
#endif
#define GLTFEXPORTER_GLTFSkeletalMeshExporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGLTFSkeletalMeshExporter ************************************************
struct Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics;
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFSkeletalMeshExporter_NoRegister();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLTFSkeletalMeshExporter(); \
	friend struct ::Z_Construct_UClass_UGLTFSkeletalMeshExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GLTFEXPORTER_API UClass* ::Z_Construct_UClass_UGLTFSkeletalMeshExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UGLTFSkeletalMeshExporter, UGLTFExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GLTFExporter"), Z_Construct_UClass_UGLTFSkeletalMeshExporter_NoRegister) \
	DECLARE_SERIALIZER(UGLTFSkeletalMeshExporter)


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGLTFSkeletalMeshExporter(UGLTFSkeletalMeshExporter&&) = delete; \
	UGLTFSkeletalMeshExporter(const UGLTFSkeletalMeshExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GLTFEXPORTER_API, UGLTFSkeletalMeshExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFSkeletalMeshExporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFSkeletalMeshExporter) \
	GLTFEXPORTER_API virtual ~UGLTFSkeletalMeshExporter();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_10_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGLTFSkeletalMeshExporter;

// ********** End Class UGLTFSkeletalMeshExporter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFSkeletalMeshExporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
