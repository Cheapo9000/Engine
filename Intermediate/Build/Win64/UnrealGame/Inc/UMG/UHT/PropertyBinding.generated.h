// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/PropertyBinding.h"

#ifdef UMG_PropertyBinding_generated_h
#error "PropertyBinding.generated.h already included, missing '#pragma once' in PropertyBinding.h"
#endif
#define UMG_PropertyBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPropertyBinding *********************************************************
struct Z_Construct_UClass_UPropertyBinding_Statics;
UMG_API UClass* Z_Construct_UClass_UPropertyBinding_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyBinding(); \
	friend struct ::Z_Construct_UClass_UPropertyBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UPropertyBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyBinding, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UPropertyBinding_NoRegister) \
	DECLARE_SERIALIZER(UPropertyBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyBinding(UPropertyBinding&&) = delete; \
	UPropertyBinding(const UPropertyBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UPropertyBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyBinding) \
	UMG_API virtual ~UPropertyBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyBinding;

// ********** End Class UPropertyBinding ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
