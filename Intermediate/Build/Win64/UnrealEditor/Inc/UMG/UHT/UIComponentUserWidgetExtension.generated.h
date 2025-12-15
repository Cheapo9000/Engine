// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/UIComponentUserWidgetExtension.h"

#ifdef UMG_UIComponentUserWidgetExtension_generated_h
#error "UIComponentUserWidgetExtension.generated.h already included, missing '#pragma once' in UIComponentUserWidgetExtension.h"
#endif
#define UMG_UIComponentUserWidgetExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUIComponentUserWidgetExtension ******************************************
struct Z_Construct_UClass_UUIComponentUserWidgetExtension_Statics;
UMG_API UClass* Z_Construct_UClass_UUIComponentUserWidgetExtension_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIComponentUserWidgetExtension(); \
	friend struct ::Z_Construct_UClass_UUIComponentUserWidgetExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UUIComponentUserWidgetExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIComponentUserWidgetExtension, UUserWidgetExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UUIComponentUserWidgetExtension_NoRegister) \
	DECLARE_SERIALIZER(UUIComponentUserWidgetExtension)


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUIComponentUserWidgetExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIComponentUserWidgetExtension(UUIComponentUserWidgetExtension&&) = delete; \
	UUIComponentUserWidgetExtension(const UUIComponentUserWidgetExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUIComponentUserWidgetExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIComponentUserWidgetExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIComponentUserWidgetExtension) \
	UMG_API virtual ~UUIComponentUserWidgetExtension();


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIComponentUserWidgetExtension;

// ********** End Class UUIComponentUserWidgetExtension ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Extensions_UIComponentUserWidgetExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
