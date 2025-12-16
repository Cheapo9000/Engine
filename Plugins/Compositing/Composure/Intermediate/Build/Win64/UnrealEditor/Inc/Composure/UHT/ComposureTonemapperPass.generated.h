// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposureTonemapperPass.h"

#ifdef COMPOSURE_ComposureTonemapperPass_generated_h
#error "ComposureTonemapperPass.generated.h already included, missing '#pragma once' in ComposureTonemapperPass.h"
#endif
#define COMPOSURE_ComposureTonemapperPass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComposureTonemapperPass *************************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTonemapToRenderTarget);


struct Z_Construct_UClass_UComposureTonemapperPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposureTonemapperPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUComposureTonemapperPass(); \
	friend struct ::Z_Construct_UClass_UComposureTonemapperPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposureTonemapperPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposureTonemapperPass, UComposurePostProcessPass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposureTonemapperPass_NoRegister) \
	DECLARE_SERIALIZER(UComposureTonemapperPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureTonemapperPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureTonemapperPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureTonemapperPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureTonemapperPass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposureTonemapperPass(UComposureTonemapperPass&&) = delete; \
	UComposureTonemapperPass(const UComposureTonemapperPass&) = delete; \
	NO_API virtual ~UComposureTonemapperPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_24_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposureTonemapperPass;

// ********** End Class UComposureTonemapperPass ***************************************************

// ********** Begin Class UComposureTonemapperPassPolicy *******************************************
struct Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposureTonemapperPassPolicy_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposureTonemapperPassPolicy(); \
	friend struct ::Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposureTonemapperPassPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposureTonemapperPassPolicy, UComposurePostProcessPassPolicy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposureTonemapperPassPolicy_NoRegister) \
	DECLARE_SERIALIZER(UComposureTonemapperPassPolicy)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposureTonemapperPassPolicy(UComposureTonemapperPassPolicy&&) = delete; \
	UComposureTonemapperPassPolicy(const UComposureTonemapperPassPolicy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureTonemapperPassPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureTonemapperPassPolicy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComposureTonemapperPassPolicy) \
	NO_API virtual ~UComposureTonemapperPassPolicy();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_54_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposureTonemapperPassPolicy;

// ********** End Class UComposureTonemapperPassPolicy *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
