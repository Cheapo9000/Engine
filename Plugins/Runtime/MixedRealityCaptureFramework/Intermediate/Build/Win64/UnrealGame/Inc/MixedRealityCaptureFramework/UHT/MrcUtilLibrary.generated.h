// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MrcUtilLibrary.h"

#ifdef MIXEDREALITYCAPTUREFRAMEWORK_MrcUtilLibrary_generated_h
#error "MrcUtilLibrary.generated.h already included, missing '#pragma once' in MrcUtilLibrary.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_MrcUtilLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;

// ********** Begin Class UMrcUtilLibrary **********************************************************
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetMixedRealityCaptureTexture); \
	DECLARE_FUNCTION(execSetMixedRealityCaptureBroadcasting); \
	DECLARE_FUNCTION(execIsMixedRealityCaptureBroadcasting);


struct Z_Construct_UClass_UMrcUtilLibrary_Statics;
MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcUtilLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMrcUtilLibrary(); \
	friend struct ::Z_Construct_UClass_UMrcUtilLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MIXEDREALITYCAPTUREFRAMEWORK_API UClass* ::Z_Construct_UClass_UMrcUtilLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMrcUtilLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), Z_Construct_UClass_UMrcUtilLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMrcUtilLibrary)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMrcUtilLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMrcUtilLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMrcUtilLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMrcUtilLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMrcUtilLibrary(UMrcUtilLibrary&&) = delete; \
	UMrcUtilLibrary(const UMrcUtilLibrary&) = delete; \
	NO_API virtual ~UMrcUtilLibrary();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMrcUtilLibrary;

// ********** End Class UMrcUtilLibrary ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcUtilLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
