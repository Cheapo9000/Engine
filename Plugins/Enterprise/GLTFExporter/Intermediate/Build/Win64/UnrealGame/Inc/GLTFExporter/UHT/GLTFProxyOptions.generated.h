// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Options/GLTFProxyOptions.h"

#ifdef GLTFEXPORTER_GLTFProxyOptions_generated_h
#error "GLTFProxyOptions.generated.h already included, missing '#pragma once' in GLTFProxyOptions.h"
#endif
#define GLTFEXPORTER_GLTFProxyOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGLTFProxyOptions ********************************************************
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_13_RPC_WRAPPERS \
	DECLARE_FUNCTION(execResetToDefault);


struct Z_Construct_UClass_UGLTFProxyOptions_Statics;
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFProxyOptions_NoRegister();

#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGLTFProxyOptions(); \
	friend struct ::Z_Construct_UClass_UGLTFProxyOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GLTFEXPORTER_API UClass* ::Z_Construct_UClass_UGLTFProxyOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UGLTFProxyOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GLTFExporter"), Z_Construct_UClass_UGLTFProxyOptions_NoRegister) \
	DECLARE_SERIALIZER(UGLTFProxyOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GLTFEXPORTER_API UGLTFProxyOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGLTFProxyOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GLTFEXPORTER_API, UGLTFProxyOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGLTFProxyOptions); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGLTFProxyOptions(UGLTFProxyOptions&&) = delete; \
	UGLTFProxyOptions(const UGLTFProxyOptions&) = delete; \
	GLTFEXPORTER_API virtual ~UGLTFProxyOptions();


#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_10_PROLOG
#define FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_13_INCLASS \
	FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGLTFProxyOptions;

// ********** End Class UGLTFProxyOptions **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFProxyOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
