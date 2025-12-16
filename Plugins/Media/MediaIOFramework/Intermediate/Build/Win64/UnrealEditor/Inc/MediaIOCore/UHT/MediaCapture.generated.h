// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaCapture.h"

#ifdef MEDIAIOCORE_MediaCapture_generated_h
#error "MediaCapture.generated.h already included, missing '#pragma once' in MediaCapture.h"
#endif
#define MEDIAIOCORE_MediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaOutput;
class UTextureRenderTarget2D;
enum class EMediaCaptureState : uint8;
struct FMediaCaptureOptions;

// ********** Begin ScriptStruct FMediaCaptureOptions **********************************************
struct Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics;
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_171_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics; \
	MEDIAIOCORE_API static class UScriptStruct* StaticStruct();


struct FMediaCaptureOptions;
// ********** End ScriptStruct FMediaCaptureOptions ************************************************

// ********** Begin Delegate FMediaCaptureStateChangedSignature ************************************
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_258_DELEGATE \
MEDIAIOCORE_API void FMediaCaptureStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MediaCaptureStateChangedSignature);


// ********** End Delegate FMediaCaptureStateChangedSignature **************************************

// ********** Begin Class UMediaCapture ************************************************************
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDesiredPixelFormat); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execSetMediaOutput); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execUpdateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execCaptureTextureRenderTarget2D); \
	DECLARE_FUNCTION(execCaptureActiveSceneViewport);


struct Z_Construct_UClass_UMediaCapture_Statics;
MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaCapture(); \
	friend struct ::Z_Construct_UClass_UMediaCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOCORE_API UClass* ::Z_Construct_UClass_UMediaCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaCapture, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaIOCore"), Z_Construct_UClass_UMediaCapture_NoRegister) \
	DECLARE_SERIALIZER(UMediaCapture)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_271_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaCapture(UMediaCapture&&) = delete; \
	UMediaCapture(const UMediaCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAIOCORE_API, UMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaCapture); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMediaCapture)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_268_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_271_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaCapture;

// ********** End Class UMediaCapture **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h

// ********** Begin Enum EMediaCaptureState ********************************************************
#define FOREACH_ENUM_EMEDIACAPTURESTATE(op) \
	op(EMediaCaptureState::Error) \
	op(EMediaCaptureState::Capturing) \
	op(EMediaCaptureState::Preparing) \
	op(EMediaCaptureState::StopRequested) \
	op(EMediaCaptureState::Stopped) 

enum class EMediaCaptureState : uint8;
template<> struct TIsUEnumClass<EMediaCaptureState> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaCaptureState>();
// ********** End Enum EMediaCaptureState **********************************************************

// ********** Begin Enum EMediaCaptureResourceType *************************************************
#define FOREACH_ENUM_EMEDIACAPTURERESOURCETYPE(op) \
	op(EMediaCaptureResourceType::Texture) \
	op(EMediaCaptureResourceType::Buffer) 

enum class EMediaCaptureResourceType : uint8;
template<> struct TIsUEnumClass<EMediaCaptureResourceType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaCaptureResourceType>();
// ********** End Enum EMediaCaptureResourceType ***************************************************

// ********** Begin Enum EMediaCaptureCroppingType *************************************************
#define FOREACH_ENUM_EMEDIACAPTURECROPPINGTYPE(op) \
	op(EMediaCaptureCroppingType::None) \
	op(EMediaCaptureCroppingType::Center) \
	op(EMediaCaptureCroppingType::TopLeft) \
	op(EMediaCaptureCroppingType::Custom) 

enum class EMediaCaptureCroppingType : uint8;
template<> struct TIsUEnumClass<EMediaCaptureCroppingType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaCaptureCroppingType>();
// ********** End Enum EMediaCaptureCroppingType ***************************************************

// ********** Begin Enum EMediaCaptureOverrunAction ************************************************
#define FOREACH_ENUM_EMEDIACAPTUREOVERRUNACTION(op) \
	op(EMediaCaptureOverrunAction::Flush) \
	op(EMediaCaptureOverrunAction::Skip) 

enum class EMediaCaptureOverrunAction : uint8;
template<> struct TIsUEnumClass<EMediaCaptureOverrunAction> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaCaptureOverrunAction>();
// ********** End Enum EMediaCaptureOverrunAction **************************************************

// ********** Begin Enum EMediaCapturePhase ********************************************************
#define FOREACH_ENUM_EMEDIACAPTUREPHASE(op) \
	op(EMediaCapturePhase::BeforePostProcessing) \
	op(EMediaCapturePhase::AfterMotionBlur) \
	op(EMediaCapturePhase::AfterToneMap) \
	op(EMediaCapturePhase::AfterFXAA) \
	op(EMediaCapturePhase::PostRender) \
	op(EMediaCapturePhase::EndFrame) 

enum class EMediaCapturePhase : uint8;
template<> struct TIsUEnumClass<EMediaCapturePhase> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaCapturePhase>();
// ********** End Enum EMediaCapturePhase **********************************************************

// ********** Begin Enum EMediaCaptureResizeMethod *************************************************
#define FOREACH_ENUM_EMEDIACAPTURERESIZEMETHOD(op) \
	op(EMediaCaptureResizeMethod::None) \
	op(EMediaCaptureResizeMethod::ResizeSource) \
	op(EMediaCaptureResizeMethod::ResizeInRenderPass) \
	op(EMediaCaptureResizeMethod::ResizeInCapturePass) 

enum class EMediaCaptureResizeMethod : uint8;
template<> struct TIsUEnumClass<EMediaCaptureResizeMethod> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaCaptureResizeMethod>();
// ********** End Enum EMediaCaptureResizeMethod ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
