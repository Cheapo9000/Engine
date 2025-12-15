// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/MouseCursorBinding.h"

#ifdef UMG_MouseCursorBinding_generated_h
#error "MouseCursorBinding.generated.h already included, missing '#pragma once' in MouseCursorBinding.h"
#endif
#define UMG_MouseCursorBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMouseCursorBinding ******************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


struct Z_Construct_UClass_UMouseCursorBinding_Statics;
UMG_API UClass* Z_Construct_UClass_UMouseCursorBinding_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMouseCursorBinding(); \
	friend struct ::Z_Construct_UClass_UMouseCursorBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UMouseCursorBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UMouseCursorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UMouseCursorBinding_NoRegister) \
	DECLARE_SERIALIZER(UMouseCursorBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMouseCursorBinding(UMouseCursorBinding&&) = delete; \
	UMouseCursorBinding(const UMouseCursorBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMouseCursorBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMouseCursorBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMouseCursorBinding) \
	UMG_API virtual ~UMouseCursorBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_12_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMouseCursorBinding;

// ********** End Class UMouseCursorBinding ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
