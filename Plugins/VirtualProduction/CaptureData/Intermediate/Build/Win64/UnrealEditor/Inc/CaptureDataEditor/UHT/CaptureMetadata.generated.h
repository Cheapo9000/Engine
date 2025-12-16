// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureMetadata.h"

#ifdef CAPTUREDATAEDITOR_CaptureMetadata_generated_h
#error "CaptureMetadata.generated.h already included, missing '#pragma once' in CaptureMetadata.h"
#endif
#define CAPTUREDATAEDITOR_CaptureMetadata_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCaptureMetadata;
class UObject;
struct FCaptureMetadataWindowOptions;

// ********** Begin ScriptStruct FCaptureMetadataWindowOptions *************************************
struct Z_Construct_UScriptStruct_FCaptureMetadataWindowOptions_Statics;
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCaptureMetadataWindowOptions_Statics; \
	CAPTUREDATAEDITOR_API static class UScriptStruct* StaticStruct();


struct FCaptureMetadataWindowOptions;
// ********** End ScriptStruct FCaptureMetadataWindowOptions ***************************************

// ********** Begin Class UCaptureMetadata *********************************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowCaptureMetadataObjects); \
	DECLARE_FUNCTION(execClearCaptureMetadata); \
	DECLARE_FUNCTION(execGetCaptureMetadata); \
	DECLARE_FUNCTION(execSetCaptureMetadata);


struct Z_Construct_UClass_UCaptureMetadata_Statics;
CAPTUREDATAEDITOR_API UClass* Z_Construct_UClass_UCaptureMetadata_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureMetadata(); \
	friend struct ::Z_Construct_UClass_UCaptureMetadata_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREDATAEDITOR_API UClass* ::Z_Construct_UClass_UCaptureMetadata_NoRegister(); \
public: \
	DECLARE_CLASS2(UCaptureMetadata, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureDataEditor"), Z_Construct_UClass_UCaptureMetadata_NoRegister) \
	DECLARE_SERIALIZER(UCaptureMetadata)


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAPTUREDATAEDITOR_API UCaptureMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCaptureMetadata(UCaptureMetadata&&) = delete; \
	UCaptureMetadata(const UCaptureMetadata&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAPTUREDATAEDITOR_API, UCaptureMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureMetadata) \
	CAPTUREDATAEDITOR_API virtual ~UCaptureMetadata();


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCaptureMetadata;

// ********** End Class UCaptureMetadata ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CaptureMetadata_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
