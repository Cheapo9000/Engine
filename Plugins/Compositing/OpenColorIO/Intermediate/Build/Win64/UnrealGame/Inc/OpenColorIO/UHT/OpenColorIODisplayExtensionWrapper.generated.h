// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenColorIODisplayExtensionWrapper.h"

#ifdef OPENCOLORIO_OpenColorIODisplayExtensionWrapper_generated_h
#error "OpenColorIODisplayExtensionWrapper.generated.h already included, missing '#pragma once' in OpenColorIODisplayExtensionWrapper.h"
#endif
#define OPENCOLORIO_OpenColorIODisplayExtensionWrapper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOpenColorIODisplayExtensionWrapper;
struct FOpenColorIODisplayConfiguration;
struct FSceneViewExtensionIsActiveFunctor;

// ********** Begin Class UOpenColorIODisplayExtensionWrapper **************************************
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateInGameOpenColorIODisplayExtension); \
	DECLARE_FUNCTION(execCreateOpenColorIODisplayExtension); \
	DECLARE_FUNCTION(execRemoveSceneExtension); \
	DECLARE_FUNCTION(execSetSceneExtensionIsActiveFunctions); \
	DECLARE_FUNCTION(execSetSceneExtensionIsActiveFunction); \
	DECLARE_FUNCTION(execSetOpenColorIOConfiguration); \
	DECLARE_FUNCTION(execGetOpenColorIOConfiguration);


struct Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics;
OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister();

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenColorIODisplayExtensionWrapper(); \
	friend struct ::Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENCOLORIO_API UClass* ::Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenColorIODisplayExtensionWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenColorIO"), Z_Construct_UClass_UOpenColorIODisplayExtensionWrapper_NoRegister) \
	DECLARE_SERIALIZER(UOpenColorIODisplayExtensionWrapper)


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPENCOLORIO_API UOpenColorIODisplayExtensionWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenColorIODisplayExtensionWrapper(UOpenColorIODisplayExtensionWrapper&&) = delete; \
	UOpenColorIODisplayExtensionWrapper(const UOpenColorIODisplayExtensionWrapper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPENCOLORIO_API, UOpenColorIODisplayExtensionWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIODisplayExtensionWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenColorIODisplayExtensionWrapper) \
	OPENCOLORIO_API virtual ~UOpenColorIODisplayExtensionWrapper();


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_16_PROLOG
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenColorIODisplayExtensionWrapper;

// ********** End Class UOpenColorIODisplayExtensionWrapper ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIODisplayExtensionWrapper_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
