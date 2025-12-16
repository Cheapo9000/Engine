// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/GLTFStaticMeshExporter.h"

#ifdef GLTFEXPORTER_GLTFStaticMeshExporter_generated_h
#error "GLTFStaticMeshExporter.generated.h already included, missing '#pragma once' in GLTFStaticMeshExporter.h"
#endif
#define GLTFEXPORTER_GLTFStaticMeshExporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGLTFStaticMeshExporter **************************************************
struct Z_Construct_UClass_UGLTFStaticMeshExporter_Statics;
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLTFStaticMeshExporter(); \
	friend struct ::Z_Construct_UClass_UGLTFStaticMeshExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GLTFEXPORTER_API UClass* ::Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UGLTFStaticMeshExporter, UGLTFExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GLTFExporter"), Z_Construct_UClass_UGLTFStaticMeshExporter_NoRegister) \
	DECLARE_SERIALIZER(UGLTFStaticMeshExporter)


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGLTFStaticMeshExporter(UGLTFStaticMeshExporter&&) = delete; \
	UGLTFStaticMeshExporter(const UGLTFStaticMeshExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GLTFEXPORTER_API, UGLTFStaticMeshExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFStaticMeshExporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFStaticMeshExporter) \
	GLTFEXPORTER_API virtual ~UGLTFStaticMeshExporter();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_10_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGLTFStaticMeshExporter;

// ********** End Class UGLTFStaticMeshExporter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFStaticMeshExporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
