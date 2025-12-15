// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/ColorBinding.h"

#ifdef UMG_ColorBinding_generated_h
#error "ColorBinding.generated.h already included, missing '#pragma once' in ColorBinding.h"
#endif
#define UMG_ColorBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateColor;

// ********** Begin Class UColorBinding ************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLinearValue); \
	DECLARE_FUNCTION(execGetSlateValue);


struct Z_Construct_UClass_UColorBinding_Statics;
UMG_API UClass* Z_Construct_UClass_UColorBinding_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorBinding(); \
	friend struct ::Z_Construct_UClass_UColorBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UColorBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UColorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UColorBinding_NoRegister) \
	DECLARE_SERIALIZER(UColorBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UColorBinding(UColorBinding&&) = delete; \
	UColorBinding(const UColorBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UColorBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UColorBinding) \
	UMG_API virtual ~UColorBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_12_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UColorBinding;

// ********** End Class UColorBinding **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
