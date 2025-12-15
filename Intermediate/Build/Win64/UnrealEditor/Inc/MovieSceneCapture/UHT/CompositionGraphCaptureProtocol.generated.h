// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Protocols/CompositionGraphCaptureProtocol.h"

#ifdef MOVIESCENECAPTURE_CompositionGraphCaptureProtocol_generated_h
#error "CompositionGraphCaptureProtocol.generated.h already included, missing '#pragma once' in CompositionGraphCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_CompositionGraphCaptureProtocol_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCompositionGraphCapturePasses ************************************
struct Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics;
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


struct FCompositionGraphCapturePasses;
// ********** End ScriptStruct FCompositionGraphCapturePasses **************************************

// ********** Begin Class UCompositionGraphCaptureProtocol *****************************************
struct Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics;
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister();

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositionGraphCaptureProtocol(); \
	friend struct ::Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENECAPTURE_API UClass* ::Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositionGraphCaptureProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister) \
	DECLARE_SERIALIZER(UCompositionGraphCaptureProtocol)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositionGraphCaptureProtocol(UCompositionGraphCaptureProtocol&&) = delete; \
	UCompositionGraphCaptureProtocol(const UCompositionGraphCaptureProtocol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UCompositionGraphCaptureProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositionGraphCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositionGraphCaptureProtocol) \
	MOVIESCENECAPTURE_API virtual ~UCompositionGraphCaptureProtocol();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_49_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_53_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositionGraphCaptureProtocol;

// ********** End Class UCompositionGraphCaptureProtocol *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h

// ********** Begin Enum EHDRCaptureGamut **********************************************************
#define FOREACH_ENUM_EHDRCAPTUREGAMUT(op) \
	op(HCGM_Rec709) \
	op(HCGM_P3DCI) \
	op(HCGM_Rec2020) \
	op(HCGM_ACES) \
	op(HCGM_ACEScg) \
	op(HCGM_Linear) 

enum EHDRCaptureGamut : int;
template<> MOVIESCENECAPTURE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHDRCaptureGamut>();
// ********** End Enum EHDRCaptureGamut ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
