// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/PFMExporterBlueprintAPIImpl.h"

#ifdef PFMEXPORTER_PFMExporterBlueprintAPIImpl_generated_h
#error "PFMExporterBlueprintAPIImpl.generated.h already included, missing '#pragma once' in PFMExporterBlueprintAPIImpl.h"
#endif
#define PFMEXPORTER_PFMExporterBlueprintAPIImpl_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class UStaticMeshComponent;

// ********** Begin Class UPFMExporterAPIImpl ******************************************************
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportPFM);


struct Z_Construct_UClass_UPFMExporterAPIImpl_Statics;
PFMEXPORTER_API UClass* Z_Construct_UClass_UPFMExporterAPIImpl_NoRegister();

#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPFMExporterAPIImpl(); \
	friend struct ::Z_Construct_UClass_UPFMExporterAPIImpl_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFMEXPORTER_API UClass* ::Z_Construct_UClass_UPFMExporterAPIImpl_NoRegister(); \
public: \
	DECLARE_CLASS2(UPFMExporterAPIImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PFMExporter"), Z_Construct_UClass_UPFMExporterAPIImpl_NoRegister) \
	DECLARE_SERIALIZER(UPFMExporterAPIImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UPFMExporterAPIImpl*>(this); }


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPFMExporterAPIImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPFMExporterAPIImpl(UPFMExporterAPIImpl&&) = delete; \
	UPFMExporterAPIImpl(const UPFMExporterAPIImpl&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPFMExporterAPIImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPFMExporterAPIImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPFMExporterAPIImpl) \
	NO_API virtual ~UPFMExporterAPIImpl();


#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPFMExporterAPIImpl;

// ********** End Class UPFMExporterAPIImpl ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WarpUtils_Source_PFMExporter_Private_Blueprints_PFMExporterBlueprintAPIImpl_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
