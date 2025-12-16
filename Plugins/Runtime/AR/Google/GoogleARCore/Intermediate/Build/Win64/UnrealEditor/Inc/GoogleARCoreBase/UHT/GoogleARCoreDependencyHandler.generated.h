// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoogleARCoreDependencyHandler.h"

#ifdef GOOGLEARCOREBASE_GoogleARCoreDependencyHandler_generated_h
#error "GoogleARCoreDependencyHandler.generated.h already included, missing '#pragma once' in GoogleARCoreDependencyHandler.h"
#endif
#define GOOGLEARCOREBASE_GoogleARCoreDependencyHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGoogleARCoreDependencyHandler *******************************************
struct Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics;
GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreDependencyHandler_NoRegister();

#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleARCoreDependencyHandler(); \
	friend struct ::Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GOOGLEARCOREBASE_API UClass* ::Z_Construct_UClass_UGoogleARCoreDependencyHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UGoogleARCoreDependencyHandler, UARDependencyHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleARCoreBase"), Z_Construct_UClass_UGoogleARCoreDependencyHandler_NoRegister) \
	DECLARE_SERIALIZER(UGoogleARCoreDependencyHandler)


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleARCoreDependencyHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGoogleARCoreDependencyHandler(UGoogleARCoreDependencyHandler&&) = delete; \
	UGoogleARCoreDependencyHandler(const UGoogleARCoreDependencyHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleARCoreDependencyHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleARCoreDependencyHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleARCoreDependencyHandler) \
	NO_API virtual ~UGoogleARCoreDependencyHandler();


#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGoogleARCoreDependencyHandler;

// ********** End Class UGoogleARCoreDependencyHandler *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
