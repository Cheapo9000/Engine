// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/VisibilityBinding.h"

#ifdef UMG_VisibilityBinding_generated_h
#error "VisibilityBinding.generated.h already included, missing '#pragma once' in VisibilityBinding.h"
#endif
#define UMG_VisibilityBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;

// ********** Begin Class UVisibilityBinding *******************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


struct Z_Construct_UClass_UVisibilityBinding_Statics;
UMG_API UClass* Z_Construct_UClass_UVisibilityBinding_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisibilityBinding(); \
	friend struct ::Z_Construct_UClass_UVisibilityBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UVisibilityBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UVisibilityBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UVisibilityBinding_NoRegister) \
	DECLARE_SERIALIZER(UVisibilityBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVisibilityBinding(UVisibilityBinding&&) = delete; \
	UVisibilityBinding(const UVisibilityBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UVisibilityBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisibilityBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVisibilityBinding) \
	UMG_API virtual ~UVisibilityBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_14_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVisibilityBinding;

// ********** End Class UVisibilityBinding *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_VisibilityBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
