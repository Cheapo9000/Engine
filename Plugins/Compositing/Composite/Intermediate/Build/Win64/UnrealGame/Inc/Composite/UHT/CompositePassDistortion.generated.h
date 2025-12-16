// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Passes/CompositePassDistortion.h"

#ifdef COMPOSITE_CompositePassDistortion_generated_h
#error "CompositePassDistortion.generated.h already included, missing '#pragma once' in CompositePassDistortion.h"
#endif
#define COMPOSITE_CompositePassDistortion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositePassDistortion *************************************************
struct Z_Construct_UClass_UCompositePassDistortion_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositePassDistortion_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassDistortion_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositePassDistortion(); \
	friend struct ::Z_Construct_UClass_UCompositePassDistortion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositePassDistortion_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositePassDistortion, UCompositePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositePassDistortion_NoRegister) \
	DECLARE_SERIALIZER(UCompositePassDistortion)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassDistortion_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositePassDistortion(UCompositePassDistortion&&) = delete; \
	UCompositePassDistortion(const UCompositePassDistortion&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositePassDistortion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositePassDistortion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositePassDistortion)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassDistortion_h_23_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassDistortion_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassDistortion_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassDistortion_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositePassDistortion;

// ********** End Class UCompositePassDistortion ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassDistortion_h

// ********** Begin Enum ECompositeDistortion ******************************************************
#define FOREACH_ENUM_ECOMPOSITEDISTORTION(op) \
	op(ECompositeDistortion::Undistort) \
	op(ECompositeDistortion::Distort) 

enum class ECompositeDistortion : uint8;
template<> struct TIsUEnumClass<ECompositeDistortion> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeDistortion>();
// ********** End Enum ECompositeDistortion ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
