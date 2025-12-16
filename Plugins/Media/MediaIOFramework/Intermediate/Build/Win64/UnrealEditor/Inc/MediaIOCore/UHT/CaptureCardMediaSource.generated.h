// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureCardMediaSource.h"

#ifdef MEDIAIOCORE_CaptureCardMediaSource_generated_h
#error "CaptureCardMediaSource.generated.h already included, missing '#pragma once' in CaptureCardMediaSource.h"
#endif
#define MEDIAIOCORE_CaptureCardMediaSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCaptureCardMediaSource **************************************************
struct Z_Construct_UClass_UCaptureCardMediaSource_Statics;
MEDIAIOCORE_API UClass* Z_Construct_UClass_UCaptureCardMediaSource_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureCardMediaSource(); \
	friend struct ::Z_Construct_UClass_UCaptureCardMediaSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOCORE_API UClass* ::Z_Construct_UClass_UCaptureCardMediaSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UCaptureCardMediaSource, UTimeSynchronizableMediaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaIOCore"), Z_Construct_UClass_UCaptureCardMediaSource_NoRegister) \
	DECLARE_SERIALIZER(UCaptureCardMediaSource)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCaptureCardMediaSource(UCaptureCardMediaSource&&) = delete; \
	UCaptureCardMediaSource(const UCaptureCardMediaSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAIOCORE_API, UCaptureCardMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureCardMediaSource); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCaptureCardMediaSource) \
	MEDIAIOCORE_API virtual ~UCaptureCardMediaSource();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_53_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCaptureCardMediaSource;

// ********** End Class UCaptureCardMediaSource ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_CaptureCardMediaSource_h

// ********** Begin Enum EMediaIOCoreSourceEncoding ************************************************
#define FOREACH_ENUM_EMEDIAIOCORESOURCEENCODING(op) \
	op(EMediaIOCoreSourceEncoding::Linear) \
	op(EMediaIOCoreSourceEncoding::sRGB) \
	op(EMediaIOCoreSourceEncoding::ST2084) \
	op(EMediaIOCoreSourceEncoding::SLog3) 

enum class EMediaIOCoreSourceEncoding : uint8;
template<> struct TIsUEnumClass<EMediaIOCoreSourceEncoding> { enum { Value = true }; };
template<> MEDIAIOCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaIOCoreSourceEncoding>();
// ********** End Enum EMediaIOCoreSourceEncoding **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
