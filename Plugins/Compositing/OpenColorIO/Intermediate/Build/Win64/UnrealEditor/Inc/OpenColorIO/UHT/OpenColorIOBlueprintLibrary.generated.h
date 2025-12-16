// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenColorIOBlueprintLibrary.h"

#ifdef OPENCOLORIO_OpenColorIOBlueprintLibrary_generated_h
#error "OpenColorIOBlueprintLibrary.generated.h already included, missing '#pragma once' in OpenColorIOBlueprintLibrary.h"
#endif
#define OPENCOLORIO_OpenColorIOBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture;
class UTextureRenderTarget2D;
struct FOpenColorIOColorConversionSettings;

// ********** Begin Class UOpenColorIOBlueprintLibrary *********************************************
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execApplyColorSpaceTransform);


struct Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics;
OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOpenColorIOBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPENCOLORIO_API UClass* ::Z_Construct_UClass_UOpenColorIOBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOpenColorIOBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenColorIO"), Z_Construct_UClass_UOpenColorIOBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOpenColorIOBlueprintLibrary)


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPENCOLORIO_API UOpenColorIOBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenColorIOBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPENCOLORIO_API, UOpenColorIOBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIOBlueprintLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOpenColorIOBlueprintLibrary(UOpenColorIOBlueprintLibrary&&) = delete; \
	UOpenColorIOBlueprintLibrary(const UOpenColorIOBlueprintLibrary&) = delete; \
	OPENCOLORIO_API virtual ~UOpenColorIOBlueprintLibrary();


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_13_PROLOG
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_INCLASS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOpenColorIOBlueprintLibrary;

// ********** End Class UOpenColorIOBlueprintLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
