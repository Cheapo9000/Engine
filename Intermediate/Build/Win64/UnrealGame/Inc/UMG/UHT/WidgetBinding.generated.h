// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/WidgetBinding.h"

#ifdef UMG_WidgetBinding_generated_h
#error "WidgetBinding.generated.h already included, missing '#pragma once' in WidgetBinding.h"
#endif
#define UMG_WidgetBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;

// ********** Begin Class UWidgetBinding ***********************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


struct Z_Construct_UClass_UWidgetBinding_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetBinding_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBinding(); \
	friend struct ::Z_Construct_UClass_UWidgetBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetBinding_NoRegister) \
	DECLARE_SERIALIZER(UWidgetBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetBinding(UWidgetBinding&&) = delete; \
	UWidgetBinding(const UWidgetBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetBinding) \
	UMG_API virtual ~UWidgetBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_13_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetBinding;

// ********** End Class UWidgetBinding *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_WidgetBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
