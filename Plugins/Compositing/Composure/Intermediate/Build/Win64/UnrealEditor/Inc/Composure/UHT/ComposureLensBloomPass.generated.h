// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComposureLensBloomPass.h"

#ifdef COMPOSURE_ComposureLensBloomPass_generated_h
#error "ComposureLensBloomPass.generated.h already included, missing '#pragma once' in ComposureLensBloomPass.h"
#endif
#define COMPOSURE_ComposureLensBloomPass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;

// ********** Begin Class UComposureLensBloomPass **************************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBloomToRenderTarget); \
	DECLARE_FUNCTION(execSetTonemapperReplacingMaterial);


struct Z_Construct_UClass_UComposureLensBloomPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposureLensBloomPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUComposureLensBloomPass(); \
	friend struct ::Z_Construct_UClass_UComposureLensBloomPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposureLensBloomPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposureLensBloomPass, UComposurePostProcessPass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposureLensBloomPass_NoRegister) \
	DECLARE_SERIALIZER(UComposureLensBloomPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComposureLensBloomPass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComposureLensBloomPass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureLensBloomPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureLensBloomPass); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposureLensBloomPass(UComposureLensBloomPass&&) = delete; \
	UComposureLensBloomPass(const UComposureLensBloomPass&) = delete; \
	NO_API virtual ~UComposureLensBloomPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_17_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_20_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposureLensBloomPass;

// ********** End Class UComposureLensBloomPass ****************************************************

// ********** Begin Class UComposureLensBloomPassPolicy ********************************************
struct Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UComposureLensBloomPassPolicy_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComposureLensBloomPassPolicy(); \
	friend struct ::Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UComposureLensBloomPassPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UComposureLensBloomPassPolicy, UComposurePostProcessPassPolicy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UComposureLensBloomPassPolicy_NoRegister) \
	DECLARE_SERIALIZER(UComposureLensBloomPassPolicy)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComposureLensBloomPassPolicy(UComposureLensBloomPassPolicy&&) = delete; \
	UComposureLensBloomPassPolicy(const UComposureLensBloomPassPolicy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComposureLensBloomPassPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComposureLensBloomPassPolicy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComposureLensBloomPassPolicy) \
	NO_API virtual ~UComposureLensBloomPassPolicy();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_48_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComposureLensBloomPassPolicy;

// ********** End Class UComposureLensBloomPassPolicy **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
