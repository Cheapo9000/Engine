// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VCamEditorLibrary.h"

#ifdef VCAMCOREEDITOR_VCamEditorLibrary_generated_h
#error "VCamEditorLibrary.generated.h already included, missing '#pragma once' in VCamEditorLibrary.h"
#endif
#define VCAMCOREEDITOR_VCamEditorLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;

// ********** Begin Class UVCamEditorLibrary *******************************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllVCamComponentsInLevel);


struct Z_Construct_UClass_UVCamEditorLibrary_Statics;
VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamEditorLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamEditorLibrary(); \
	friend struct ::Z_Construct_UClass_UVCamEditorLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VCAMCOREEDITOR_API UClass* ::Z_Construct_UClass_UVCamEditorLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVCamEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamCoreEditor"), Z_Construct_UClass_UVCamEditorLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVCamEditorLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVCamEditorLibrary(UVCamEditorLibrary&&) = delete; \
	UVCamEditorLibrary(const UVCamEditorLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamEditorLibrary) \
	NO_API virtual ~UVCamEditorLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVCamEditorLibrary;

// ********** End Class UVCamEditorLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
