// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelInspectorView.h"

#ifdef PIXELINSPECTORMODULE_PixelInspectorView_generated_h
#error "PixelInspectorView.generated.h already included, missing '#pragma once' in PixelInspectorView.h"
#endif
#define PIXELINSPECTORMODULE_PixelInspectorView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPixelInspectorView ******************************************************
struct Z_Construct_UClass_UPixelInspectorView_Statics;
PIXELINSPECTORMODULE_API UClass* Z_Construct_UClass_UPixelInspectorView_NoRegister();

#define FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPixelInspectorView(); \
	friend struct ::Z_Construct_UClass_UPixelInspectorView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELINSPECTORMODULE_API UClass* ::Z_Construct_UClass_UPixelInspectorView_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelInspectorView, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelInspectorModule"), Z_Construct_UClass_UPixelInspectorView_NoRegister) \
	DECLARE_SERIALIZER(UPixelInspectorView)


#define FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELINSPECTORMODULE_API UPixelInspectorView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelInspectorView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELINSPECTORMODULE_API, UPixelInspectorView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelInspectorView); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelInspectorView(UPixelInspectorView&&) = delete; \
	UPixelInspectorView(const UPixelInspectorView&) = delete; \
	PIXELINSPECTORMODULE_API virtual ~UPixelInspectorView();


#define FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_21_PROLOG
#define FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_24_INCLASS \
	FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelInspectorView;

// ********** End Class UPixelInspectorView ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PixelInspector_Private_PixelInspectorView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
