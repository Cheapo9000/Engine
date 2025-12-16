// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingElements/CompositingElementPasses.h"

#ifdef COMPOSURE_CompositingElementPasses_generated_h
#error "CompositingElementPasses.generated.h already included, missing '#pragma once' in CompositingElementPasses.h"
#endif
#define COMPOSURE_CompositingElementPasses_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACameraActor;
class UComposurePostProcessingPassProxy;
class UTexture;
class UTextureRenderTarget2D;

// ********** Begin Class UCompositingElementPass **************************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEnabled_Implementation(); \
	virtual void OnDisabled_Implementation(); \
	virtual void Reset_Implementation(); \
	virtual void OnFrameEnd_Implementation(); \
	virtual void OnFrameBegin_Implementation(bool bCameraCutThisFrame); \
	DECLARE_FUNCTION(execReleaseRenderTarget); \
	DECLARE_FUNCTION(execRequestNativelyFormattedTarget); \
	DECLARE_FUNCTION(execRequestRenderTarget); \
	DECLARE_FUNCTION(execOnEnabled); \
	DECLARE_FUNCTION(execOnDisabled); \
	DECLARE_FUNCTION(execSetPassEnabled); \
	DECLARE_FUNCTION(execIsPassEnabled); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execOnFrameEnd); \
	DECLARE_FUNCTION(execOnFrameBegin);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCompositingElementPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementPass(); \
	friend struct ::Z_Construct_UClass_UCompositingElementPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingElementPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingElementPass, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingElementPass_NoRegister) \
	DECLARE_SERIALIZER(UCompositingElementPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingElementPass(UCompositingElementPass&&) = delete; \
	UCompositingElementPass(const UCompositingElementPass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementPass); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementPass) \
	NO_API virtual ~UCompositingElementPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_18_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositingElementPass;

// ********** End Class UCompositingElementPass ****************************************************

// ********** Begin Class UCompositingElementInput *************************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UTexture* GenerateInput_Implementation(); \
	DECLARE_FUNCTION(execGenerateInput);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCompositingElementInput_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementInput(); \
	friend struct ::Z_Construct_UClass_UCompositingElementInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingElementInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingElementInput, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingElementInput_NoRegister) \
	DECLARE_SERIALIZER(UCompositingElementInput)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementInput(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingElementInput(UCompositingElementInput&&) = delete; \
	UCompositingElementInput(const UCompositingElementInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementInput); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementInput) \
	NO_API virtual ~UCompositingElementInput();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_87_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositingElementInput;

// ********** End Class UCompositingElementInput ***************************************************

// ********** Begin Class UCompositingElementTransform *********************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UTexture* ApplyTransform_Implementation(UTexture* Input, UComposurePostProcessingPassProxy* PostProcessProxy, ACameraActor* TargetCamera); \
	DECLARE_FUNCTION(execFindNamedPrePassResult); \
	DECLARE_FUNCTION(execApplyTransform);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCompositingElementTransform_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementTransform_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementTransform(); \
	friend struct ::Z_Construct_UClass_UCompositingElementTransform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingElementTransform_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingElementTransform, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingElementTransform_NoRegister) \
	DECLARE_SERIALIZER(UCompositingElementTransform)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementTransform(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingElementTransform(UCompositingElementTransform&&) = delete; \
	UCompositingElementTransform(const UCompositingElementTransform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementTransform); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementTransform) \
	NO_API virtual ~UCompositingElementTransform();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_115_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositingElementTransform;

// ********** End Class UCompositingElementTransform ***********************************************

// ********** Begin Class UCompositingElementOutput ************************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RelayOutput_Implementation(UTexture* FinalResult, UComposurePostProcessingPassProxy* PostProcessProxy); \
	DECLARE_FUNCTION(execRelayOutput);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCompositingElementOutput_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementOutput(); \
	friend struct ::Z_Construct_UClass_UCompositingElementOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingElementOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingElementOutput, UCompositingElementPass, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingElementOutput_NoRegister) \
	DECLARE_SERIALIZER(UCompositingElementOutput)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementOutput(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingElementOutput(UCompositingElementOutput&&) = delete; \
	UCompositingElementOutput(const UCompositingElementOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementOutput); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementOutput) \
	NO_API virtual ~UCompositingElementOutput();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_147_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositingElementOutput;

// ********** End Class UCompositingElementOutput **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
