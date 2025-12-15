// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/BrushBinding.h"

#ifdef UMG_BrushBinding_generated_h
#error "BrushBinding.generated.h already included, missing '#pragma once' in BrushBinding.h"
#endif
#define UMG_BrushBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateBrush;

// ********** Begin Class UBrushBinding ************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


struct Z_Construct_UClass_UBrushBinding_Statics;
UMG_API UClass* Z_Construct_UClass_UBrushBinding_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBrushBinding(); \
	friend struct ::Z_Construct_UClass_UBrushBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UBrushBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UBrushBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UBrushBinding_NoRegister) \
	DECLARE_SERIALIZER(UBrushBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBrushBinding(UBrushBinding&&) = delete; \
	UBrushBinding(const UBrushBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UBrushBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrushBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBrushBinding) \
	UMG_API virtual ~UBrushBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_12_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBrushBinding;

// ********** End Class UBrushBinding **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_BrushBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
