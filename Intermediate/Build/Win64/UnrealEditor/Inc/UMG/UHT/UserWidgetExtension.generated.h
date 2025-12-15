// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/UserWidgetExtension.h"

#ifdef UMG_UserWidgetExtension_generated_h
#error "UserWidgetExtension.generated.h already included, missing '#pragma once' in UserWidgetExtension.h"
#endif
#define UMG_UserWidgetExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUserWidgetExtension *****************************************************
struct Z_Construct_UClass_UUserWidgetExtension_Statics;
UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserWidgetExtension(); \
	friend struct ::Z_Construct_UClass_UUserWidgetExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UUserWidgetExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserWidgetExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UUserWidgetExtension_NoRegister) \
	DECLARE_SERIALIZER(UUserWidgetExtension) \
	DECLARE_WITHIN(UUserWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUserWidgetExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserWidgetExtension(UUserWidgetExtension&&) = delete; \
	UUserWidgetExtension(const UUserWidgetExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUserWidgetExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidgetExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidgetExtension) \
	UMG_API virtual ~UUserWidgetExtension();


#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserWidgetExtension;

// ********** End Class UUserWidgetExtension *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
