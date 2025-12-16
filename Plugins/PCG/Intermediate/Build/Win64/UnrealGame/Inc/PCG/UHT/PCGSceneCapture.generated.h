// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSceneCapture.h"

#ifdef PCG_PCGSceneCapture_generated_h
#error "PCGSceneCapture.generated.h already included, missing '#pragma once' in PCGSceneCapture.h"
#endif
#define PCG_PCGSceneCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSceneCaptureSettings *************************************************
struct Z_Construct_UClass_UPCGSceneCaptureSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSceneCaptureSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSceneCapture_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSceneCaptureSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSceneCaptureSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSceneCaptureSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSceneCaptureSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSceneCaptureSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSceneCaptureSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSceneCapture_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSceneCaptureSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSceneCaptureSettings(UPCGSceneCaptureSettings&&) = delete; \
	UPCGSceneCaptureSettings(const UPCGSceneCaptureSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSceneCaptureSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSceneCaptureSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSceneCaptureSettings) \
	PCG_API virtual ~UPCGSceneCaptureSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSceneCapture_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSceneCapture_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSceneCapture_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSceneCapture_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSceneCaptureSettings;

// ********** End Class UPCGSceneCaptureSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSceneCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
