// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoReferencingEditorBPLibrary.h"

#ifdef GEOREFERENCINGEDITOR_GeoReferencingEditorBPLibrary_generated_h
#error "GeoReferencingEditorBPLibrary.generated.h already included, missing '#pragma once' in GeoReferencingEditorBPLibrary.h"
#endif
#define GEOREFERENCINGEDITOR_GeoReferencingEditorBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;

// ********** Begin Class UGeoReferencingEditorBPLibrary *******************************************
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLineTrace); \
	DECLARE_FUNCTION(execLineTraceViewport); \
	DECLARE_FUNCTION(execGetViewportCursorInformation); \
	DECLARE_FUNCTION(execGetViewportCursorLocation);


struct Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics;
GEOREFERENCINGEDITOR_API UClass* Z_Construct_UClass_UGeoReferencingEditorBPLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeoReferencingEditorBPLibrary(); \
	friend struct ::Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOREFERENCINGEDITOR_API UClass* ::Z_Construct_UClass_UGeoReferencingEditorBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeoReferencingEditorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoReferencingEditor"), Z_Construct_UClass_UGeoReferencingEditorBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGeoReferencingEditorBPLibrary)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeoReferencingEditorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeoReferencingEditorBPLibrary(UGeoReferencingEditorBPLibrary&&) = delete; \
	UGeoReferencingEditorBPLibrary(const UGeoReferencingEditorBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeoReferencingEditorBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeoReferencingEditorBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeoReferencingEditorBPLibrary) \
	NO_API virtual ~UGeoReferencingEditorBPLibrary();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeoReferencingEditorBPLibrary;

// ********** End Class UGeoReferencingEditorBPLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
