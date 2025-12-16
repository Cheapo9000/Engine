// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderTargetMediaCapture.h"

#ifdef MEDIAIOCORE_RenderTargetMediaCapture_generated_h
#error "RenderTargetMediaCapture.generated.h already included, missing '#pragma once' in RenderTargetMediaCapture.h"
#endif
#define MEDIAIOCORE_RenderTargetMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URenderTargetMediaCapture ************************************************
struct Z_Construct_UClass_URenderTargetMediaCapture_Statics;
MEDIAIOCORE_API UClass* Z_Construct_UClass_URenderTargetMediaCapture_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderTargetMediaCapture(); \
	friend struct ::Z_Construct_UClass_URenderTargetMediaCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOCORE_API UClass* ::Z_Construct_UClass_URenderTargetMediaCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderTargetMediaCapture, UMediaCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaIOCore"), Z_Construct_UClass_URenderTargetMediaCapture_NoRegister) \
	DECLARE_SERIALIZER(URenderTargetMediaCapture)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderTargetMediaCapture(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderTargetMediaCapture(URenderTargetMediaCapture&&) = delete; \
	URenderTargetMediaCapture(const URenderTargetMediaCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderTargetMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderTargetMediaCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderTargetMediaCapture) \
	NO_API virtual ~URenderTargetMediaCapture();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h_11_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderTargetMediaCapture;

// ********** End Class URenderTargetMediaCapture **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
