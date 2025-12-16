// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Passes/CompositePassCenteredScale.h"

#ifdef COMPOSITE_CompositePassCenteredScale_generated_h
#error "CompositePassCenteredScale.generated.h already included, missing '#pragma once' in CompositePassCenteredScale.h"
#endif
#define COMPOSITE_CompositePassCenteredScale_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositePassCenteredScale **********************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateScale);


struct Z_Construct_UClass_UCompositePassCenteredScale_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositePassCenteredScale_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositePassCenteredScale(); \
	friend struct ::Z_Construct_UClass_UCompositePassCenteredScale_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositePassCenteredScale_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositePassCenteredScale, UCompositePassBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositePassCenteredScale_NoRegister) \
	DECLARE_SERIALIZER(UCompositePassCenteredScale)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositePassCenteredScale(UCompositePassCenteredScale&&) = delete; \
	UCompositePassCenteredScale(const UCompositePassCenteredScale&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositePassCenteredScale); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositePassCenteredScale); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositePassCenteredScale)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h_43_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositePassCenteredScale;

// ********** End Class UCompositePassCenteredScale ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Passes_CompositePassCenteredScale_h

// ********** Begin Enum ECompositePassScaleMode ***************************************************
#define FOREACH_ENUM_ECOMPOSITEPASSSCALEMODE(op) \
	op(ECompositePassScaleMode::None) \
	op(ECompositePassScaleMode::Automatic) \
	op(ECompositePassScaleMode::AspectRatio) \
	op(ECompositePassScaleMode::Manual) 

enum class ECompositePassScaleMode : uint8;
template<> struct TIsUEnumClass<ECompositePassScaleMode> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositePassScaleMode>();
// ********** End Enum ECompositePassScaleMode *****************************************************

// ********** Begin Enum ECompositePassOverscanUncropMode ******************************************
#define FOREACH_ENUM_ECOMPOSITEPASSOVERSCANUNCROPMODE(op) \
	op(ECompositePassOverscanUncropMode::None) \
	op(ECompositePassOverscanUncropMode::Automatic) \
	op(ECompositePassOverscanUncropMode::Manual) 

enum class ECompositePassOverscanUncropMode : uint8;
template<> struct TIsUEnumClass<ECompositePassOverscanUncropMode> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositePassOverscanUncropMode>();
// ********** End Enum ECompositePassOverscanUncropMode ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
