// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StereoCapturePawn.h"

#ifdef PANORAMICCAPTURE_StereoCapturePawn_generated_h
#error "StereoCapturePawn.generated.h already included, missing '#pragma once' in StereoCapturePawn.h"
#endif
#define PANORAMICCAPTURE_StereoCapturePawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;

// ********** Begin Class AStereoCapturePawn *******************************************************
#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateStereoAtlas);


struct Z_Construct_UClass_AStereoCapturePawn_Statics;
PANORAMICCAPTURE_API UClass* Z_Construct_UClass_AStereoCapturePawn_NoRegister();

#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStereoCapturePawn(); \
	friend struct ::Z_Construct_UClass_AStereoCapturePawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PANORAMICCAPTURE_API UClass* ::Z_Construct_UClass_AStereoCapturePawn_NoRegister(); \
public: \
	DECLARE_CLASS2(AStereoCapturePawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PanoramicCapture"), Z_Construct_UClass_AStereoCapturePawn_NoRegister) \
	DECLARE_SERIALIZER(AStereoCapturePawn)


#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStereoCapturePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AStereoCapturePawn(AStereoCapturePawn&&) = delete; \
	AStereoCapturePawn(const AStereoCapturePawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStereoCapturePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStereoCapturePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStereoCapturePawn) \
	NO_API virtual ~AStereoCapturePawn();


#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_51_PROLOG
#define FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AStereoCapturePawn;

// ********** End Class AStereoCapturePawn *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
