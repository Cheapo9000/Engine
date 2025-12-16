// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPUtilitiesEditorBlueprintLibrary.h"

#ifdef VPUTILITIESEDITOR_VPUtilitiesEditorBlueprintLibrary_generated_h
#error "VPUtilitiesEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in VPUtilitiesEditorBlueprintLibrary.h"
#endif
#define VPUTILITIESEDITOR_VPUtilitiesEditorBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVPEditorTickableActorBase;
class AVPTransientEditorTickableActorBase;
class UClass;
class UObject;
class UOSCServer;
class UTexture;

// ********** Begin Class UVPUtilitiesEditorBlueprintLibrary ***************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultOSCServer); \
	DECLARE_FUNCTION(execImportSnapshotTexture); \
	DECLARE_FUNCTION(execSpawnVPTransientEditorTickableActor); \
	DECLARE_FUNCTION(execSpawnVPEditorTickableActor);


struct Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics;
VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPUtilitiesEditorBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIESEDITOR_API UClass* ::Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPUtilitiesEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilitiesEditor"), Z_Construct_UClass_UVPUtilitiesEditorBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVPUtilitiesEditorBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPUtilitiesEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPUtilitiesEditorBlueprintLibrary(UVPUtilitiesEditorBlueprintLibrary&&) = delete; \
	UVPUtilitiesEditorBlueprintLibrary(const UVPUtilitiesEditorBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPUtilitiesEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPUtilitiesEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPUtilitiesEditorBlueprintLibrary) \
	NO_API virtual ~UVPUtilitiesEditorBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPUtilitiesEditorBlueprintLibrary;

// ********** End Class UVPUtilitiesEditorBlueprintLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VPUtilitiesEditorBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
