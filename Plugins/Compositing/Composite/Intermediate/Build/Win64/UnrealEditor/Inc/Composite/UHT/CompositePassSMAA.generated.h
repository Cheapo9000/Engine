// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Passes/CompositePassSMAA.h"

#ifdef COMPOSITE_CompositePassSMAA_generated_h
#error "CompositePassSMAA.generated.h already included, missing '#pragma once' in CompositePassSMAA.h"
#endif
#define COMPOSITE_CompositePassSMAA_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositePassSMAA *******************************************************
struct Z_Construct_UClass_UCompositePassSMAA_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositePassSMAA_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassSMAA_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositePassSMAA(); \
	friend struct ::Z_Construct_UClass_UCompositePassSMAA_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositePassSMAA_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositePassSMAA, UCompositePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositePassSMAA_NoRegister) \
	DECLARE_SERIALIZER(UCompositePassSMAA)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassSMAA_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositePassSMAA(UCompositePassSMAA&&) = delete; \
	UCompositePassSMAA(const UCompositePassSMAA&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositePassSMAA); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositePassSMAA); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositePassSMAA)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassSMAA_h_12_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassSMAA_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassSMAA_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassSMAA_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositePassSMAA;

// ********** End Class UCompositePassSMAA *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassSMAA_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
