// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRLoadingScreenFunctionLibrary.h"

#ifdef XRBASE_XRLoadingScreenFunctionLibrary_generated_h
#error "XRLoadingScreenFunctionLibrary.generated.h already included, missing '#pragma once' in XRLoadingScreenFunctionLibrary.h"
#endif
#define XRBASE_XRLoadingScreenFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;

// ********** Begin Class UXRLoadingScreenFunctionLibrary ******************************************
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHideLoadingScreen); \
	DECLARE_FUNCTION(execShowLoadingScreen); \
	DECLARE_FUNCTION(execAddLoadingScreenSplash); \
	DECLARE_FUNCTION(execClearLoadingScreenSplashes); \
	DECLARE_FUNCTION(execSetLoadingScreen);


struct Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics;
XRBASE_API UClass* Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUXRLoadingScreenFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRBASE_API UClass* ::Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UXRLoadingScreenFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRBase"), Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UXRLoadingScreenFunctionLibrary)


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	XRBASE_API UXRLoadingScreenFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRLoadingScreenFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(XRBASE_API, UXRLoadingScreenFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRLoadingScreenFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UXRLoadingScreenFunctionLibrary(UXRLoadingScreenFunctionLibrary&&) = delete; \
	UXRLoadingScreenFunctionLibrary(const UXRLoadingScreenFunctionLibrary&) = delete; \
	XRBASE_API virtual ~UXRLoadingScreenFunctionLibrary();


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UXRLoadingScreenFunctionLibrary;

// ********** End Class UXRLoadingScreenFunctionLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_XRLoadingScreenFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
