// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuWidget.h"

#ifdef BLUTILITY_ToolMenuWidget_generated_h
#error "ToolMenuWidget.generated.h already included, missing '#pragma once' in ToolMenuWidget.h"
#endif
#define BLUTILITY_ToolMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToolMenuWidget **********************************************************
struct Z_Construct_UClass_UToolMenuWidget_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UToolMenuWidget_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_ToolMenuWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuWidget(); \
	friend struct ::Z_Construct_UClass_UToolMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UToolMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UToolMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuWidget)


#define FID_Engine_Source_Editor_Blutility_Public_ToolMenuWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuWidget(UToolMenuWidget&&) = delete; \
	UToolMenuWidget(const UToolMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UToolMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuWidget) \
	BLUTILITY_API virtual ~UToolMenuWidget();


#define FID_Engine_Source_Editor_Blutility_Public_ToolMenuWidget_h_19_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_ToolMenuWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_ToolMenuWidget_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_ToolMenuWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuWidget;

// ********** End Class UToolMenuWidget ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_ToolMenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
