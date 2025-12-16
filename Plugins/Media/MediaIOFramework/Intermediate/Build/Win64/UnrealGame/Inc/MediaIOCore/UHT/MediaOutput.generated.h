// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaOutput.h"

#ifdef MEDIAIOCORE_MediaOutput_generated_h
#error "MediaOutput.generated.h already included, missing '#pragma once' in MediaOutput.h"
#endif
#define MEDIAIOCORE_MediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaCapture;

// ********** Begin Class UMediaOutput *************************************************************
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_45_RPC_WRAPPERS \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execCreateMediaCapture);


struct Z_Construct_UClass_UMediaOutput_Statics;
MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUMediaOutput(); \
	friend struct ::Z_Construct_UClass_UMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOCORE_API UClass* ::Z_Construct_UClass_UMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaOutput, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaIOCore"), Z_Construct_UClass_UMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(UMediaOutput)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAIOCORE_API UMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAIOCORE_API, UMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaOutput); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaOutput(UMediaOutput&&) = delete; \
	UMediaOutput(const UMediaOutput&) = delete; \
	MEDIAIOCORE_API virtual ~UMediaOutput();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_42_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_45_INCLASS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaOutput;

// ********** End Class UMediaOutput ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h

// ********** Begin Enum EMediaCaptureSourceType ***************************************************
#define FOREACH_ENUM_EMEDIACAPTURESOURCETYPE(op) \
	op(EMediaCaptureSourceType::RENDER_TARGET) \
	op(EMediaCaptureSourceType::SCENE_VIEWPORT) \
	op(EMediaCaptureSourceType::RHI_RESOURCE) 

enum class EMediaCaptureSourceType : int8;
template<> struct TIsUEnumClass<EMediaCaptureSourceType> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaCaptureSourceType>();
// ********** End Enum EMediaCaptureSourceType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
