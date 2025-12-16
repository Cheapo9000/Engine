// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/GLTFExporter.h"

#ifdef GLTFEXPORTER_GLTFExporter_generated_h
#error "GLTFExporter.generated.h already included, missing '#pragma once' in GLTFExporter.h"
#endif
#define GLTFEXPORTER_GLTFExporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGLTFExportOptions;
class UObject;
struct FGLTFExportMessages;

// ********** Begin ScriptStruct FGLTFExportMessages ***********************************************
struct Z_Construct_UScriptStruct_FGLTFExportMessages_Statics;
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGLTFExportMessages_Statics; \
	GLTFEXPORTER_API static class UScriptStruct* StaticStruct();


struct FGLTFExportMessages;
// ********** End ScriptStruct FGLTFExportMessages *************************************************

// ********** Begin Class UGLTFExporter ************************************************************
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportToGLTF);


struct Z_Construct_UClass_UGLTFExporter_Statics;
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter_NoRegister();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGLTFExporter(); \
	friend struct ::Z_Construct_UClass_UGLTFExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GLTFEXPORTER_API UClass* ::Z_Construct_UClass_UGLTFExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UGLTFExporter, UExporter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GLTFExporter"), Z_Construct_UClass_UGLTFExporter_NoRegister) \
	DECLARE_SERIALIZER(UGLTFExporter)


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGLTFExporter(UGLTFExporter&&) = delete; \
	UGLTFExporter(const UGLTFExporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GLTFEXPORTER_API, UGLTFExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFExporter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFExporter) \
	GLTFEXPORTER_API virtual ~UGLTFExporter();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_29_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_34_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGLTFExporter;

// ********** End Class UGLTFExporter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
