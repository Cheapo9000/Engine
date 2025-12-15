// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/CheckedStateBinding.h"

#ifdef UMG_CheckedStateBinding_generated_h
#error "CheckedStateBinding.generated.h already included, missing '#pragma once' in CheckedStateBinding.h"
#endif
#define UMG_CheckedStateBinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;

// ********** Begin Class UCheckedStateBinding *****************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue);


struct Z_Construct_UClass_UCheckedStateBinding_Statics;
UMG_API UClass* Z_Construct_UClass_UCheckedStateBinding_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckedStateBinding(); \
	friend struct ::Z_Construct_UClass_UCheckedStateBinding_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UCheckedStateBinding_NoRegister(); \
public: \
	DECLARE_CLASS2(UCheckedStateBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UCheckedStateBinding_NoRegister) \
	DECLARE_SERIALIZER(UCheckedStateBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCheckedStateBinding(UCheckedStateBinding&&) = delete; \
	UCheckedStateBinding(const UCheckedStateBinding&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UCheckedStateBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckedStateBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCheckedStateBinding) \
	UMG_API virtual ~UCheckedStateBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_13_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCheckedStateBinding;

// ********** End Class UCheckedStateBinding *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_CheckedStateBinding_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
