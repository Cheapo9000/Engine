// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Passes/CompositePassMaterial.h"

#ifdef COMPOSITE_CompositePassMaterial_generated_h
#error "CompositePassMaterial.generated.h already included, missing '#pragma once' in CompositePassMaterial.h"
#endif
#define COMPOSITE_CompositePassMaterial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositePassMaterial ***************************************************
struct Z_Construct_UClass_UCompositePassMaterial_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositePassMaterial_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassMaterial_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositePassMaterial(); \
	friend struct ::Z_Construct_UClass_UCompositePassMaterial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositePassMaterial_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositePassMaterial, UCompositePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositePassMaterial_NoRegister) \
	DECLARE_SERIALIZER(UCompositePassMaterial)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassMaterial_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositePassMaterial(UCompositePassMaterial&&) = delete; \
	UCompositePassMaterial(const UCompositePassMaterial&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositePassMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositePassMaterial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositePassMaterial)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassMaterial_h_14_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassMaterial_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassMaterial_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassMaterial_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositePassMaterial;

// ********** End Class UCompositePassMaterial *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassMaterial_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
