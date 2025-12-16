// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetPreviewFactory.h"

#ifdef UMGWIDGETPREVIEW_WidgetPreviewFactory_generated_h
#error "WidgetPreviewFactory.generated.h already included, missing '#pragma once' in WidgetPreviewFactory.h"
#endif
#define UMGWIDGETPREVIEW_WidgetPreviewFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWidgetPreviewFactory ****************************************************
struct Z_Construct_UClass_UWidgetPreviewFactory_Statics;
UMGWIDGETPREVIEW_API UClass* Z_Construct_UClass_UWidgetPreviewFactory_NoRegister();

#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetPreviewFactory(); \
	friend struct ::Z_Construct_UClass_UWidgetPreviewFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMGWIDGETPREVIEW_API UClass* ::Z_Construct_UClass_UWidgetPreviewFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetPreviewFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMGWidgetPreview"), Z_Construct_UClass_UWidgetPreviewFactory_NoRegister) \
	DECLARE_SERIALIZER(UWidgetPreviewFactory)


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetPreviewFactory(UWidgetPreviewFactory&&) = delete; \
	UWidgetPreviewFactory(const UWidgetPreviewFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMGWIDGETPREVIEW_API, UWidgetPreviewFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetPreviewFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetPreviewFactory) \
	UMGWIDGETPREVIEW_API virtual ~UWidgetPreviewFactory();


#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewFactory_h_9_PROLOG
#define FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetPreviewFactory;

// ********** End Class UWidgetPreviewFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UMGWidgetPreview_Source_UMGWidgetPreview_Private_WidgetPreviewFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
