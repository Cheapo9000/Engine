// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DetailsView.h"

#ifdef SCRIPTABLEEDITORWIDGETS_DetailsView_generated_h
#error "DetailsView.generated.h already included, missing '#pragma once' in DetailsView.h"
#endif
#define SCRIPTABLEEDITORWIDGETS_DetailsView_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDetailsView *************************************************************
struct Z_Construct_UClass_UDetailsView_Statics;
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();

#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailsView(); \
	friend struct ::Z_Construct_UClass_UDetailsView_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLEEDITORWIDGETS_API UClass* ::Z_Construct_UClass_UDetailsView_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailsView, UPropertyViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptableEditorWidgets"), Z_Construct_UClass_UDetailsView_NoRegister) \
	DECLARE_SERIALIZER(UDetailsView)


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLEEDITORWIDGETS_API UDetailsView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailsView(UDetailsView&&) = delete; \
	UDetailsView(const UDetailsView&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLEEDITORWIDGETS_API, UDetailsView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailsView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailsView) \
	SCRIPTABLEEDITORWIDGETS_API virtual ~UDetailsView();


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_27_PROLOG
#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailsView;

// ********** End Class UDetailsView ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_DetailsView_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
