// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Passes/CompositePassBase.h"

#ifdef COMPOSITE_CompositePassBase_generated_h
#error "CompositePassBase.generated.h already included, missing '#pragma once' in CompositePassBase.h"
#endif
#define COMPOSITE_CompositePassBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositePassBase *******************************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


struct Z_Construct_UClass_UCompositePassBase_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositePassBase_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositePassBase(); \
	friend struct ::Z_Construct_UClass_UCompositePassBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositePassBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositePassBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositePassBase_NoRegister) \
	DECLARE_SERIALIZER(UCompositePassBase)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositePassBase(UCompositePassBase&&) = delete; \
	UCompositePassBase(const UCompositePassBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositePassBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositePassBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositePassBase)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h_16_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositePassBase;

// ********** End Class UCompositePassBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
