// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AjaMediaFrameGrabberProtocol.h"

#ifdef AJAMEDIAOUTPUT_AjaMediaFrameGrabberProtocol_generated_h
#error "AjaMediaFrameGrabberProtocol.generated.h already included, missing '#pragma once' in AjaMediaFrameGrabberProtocol.h"
#endif
#define AJAMEDIAOUTPUT_AjaMediaFrameGrabberProtocol_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAjaFrameGrabberProtocol *************************************************
struct Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics;
AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaFrameGrabberProtocol_NoRegister();

#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAjaFrameGrabberProtocol(); \
	friend struct ::Z_Construct_UClass_UAjaFrameGrabberProtocol_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AJAMEDIAOUTPUT_API UClass* ::Z_Construct_UClass_UAjaFrameGrabberProtocol_NoRegister(); \
public: \
	DECLARE_CLASS2(UAjaFrameGrabberProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AjaMediaOutput"), Z_Construct_UClass_UAjaFrameGrabberProtocol_NoRegister) \
	DECLARE_SERIALIZER(UAjaFrameGrabberProtocol)


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAjaFrameGrabberProtocol(UAjaFrameGrabberProtocol&&) = delete; \
	UAjaFrameGrabberProtocol(const UAjaFrameGrabberProtocol&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAjaFrameGrabberProtocol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAjaFrameGrabberProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAjaFrameGrabberProtocol) \
	NO_API virtual ~UAjaFrameGrabberProtocol();


#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_14_PROLOG
#define FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAjaFrameGrabberProtocol;

// ********** End Class UAjaFrameGrabberProtocol ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaFrameGrabberProtocol_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
