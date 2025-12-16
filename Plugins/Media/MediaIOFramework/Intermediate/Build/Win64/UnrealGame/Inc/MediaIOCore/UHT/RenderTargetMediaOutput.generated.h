// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderTargetMediaOutput.h"

#ifdef MEDIAIOCORE_RenderTargetMediaOutput_generated_h
#error "RenderTargetMediaOutput.generated.h already included, missing '#pragma once' in RenderTargetMediaOutput.h"
#endif
#define MEDIAIOCORE_RenderTargetMediaOutput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URenderTargetMediaOutput *************************************************
struct Z_Construct_UClass_URenderTargetMediaOutput_Statics;
MEDIAIOCORE_API UClass* Z_Construct_UClass_URenderTargetMediaOutput_NoRegister();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderTargetMediaOutput(); \
	friend struct ::Z_Construct_UClass_URenderTargetMediaOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAIOCORE_API UClass* ::Z_Construct_UClass_URenderTargetMediaOutput_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderTargetMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaIOCore"), Z_Construct_UClass_URenderTargetMediaOutput_NoRegister) \
	DECLARE_SERIALIZER(URenderTargetMediaOutput)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderTargetMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderTargetMediaOutput(URenderTargetMediaOutput&&) = delete; \
	URenderTargetMediaOutput(const URenderTargetMediaOutput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderTargetMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderTargetMediaOutput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderTargetMediaOutput) \
	NO_API virtual ~URenderTargetMediaOutput();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h_15_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderTargetMediaOutput;

// ********** End Class URenderTargetMediaOutput ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Private_RenderTargetMediaOutput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
