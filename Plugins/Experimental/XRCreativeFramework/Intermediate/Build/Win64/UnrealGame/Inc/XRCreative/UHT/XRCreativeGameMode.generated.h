// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeGameMode.h"

#ifdef XRCREATIVE_XRCreativeGameMode_generated_h
#error "XRCreativeGameMode.generated.h already included, missing '#pragma once' in XRCreativeGameMode.h"
#endif
#define XRCREATIVE_XRCreativeGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AXRCreativeGameMode ******************************************************
struct Z_Construct_UClass_AXRCreativeGameMode_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeGameMode_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXRCreativeGameMode(); \
	friend struct ::Z_Construct_UClass_AXRCreativeGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_AXRCreativeGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AXRCreativeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_AXRCreativeGameMode_NoRegister) \
	DECLARE_SERIALIZER(AXRCreativeGameMode)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXRCreativeGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AXRCreativeGameMode(AXRCreativeGameMode&&) = delete; \
	AXRCreativeGameMode(const AXRCreativeGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRCreativeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRCreativeGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXRCreativeGameMode) \
	NO_API virtual ~AXRCreativeGameMode();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AXRCreativeGameMode;

// ********** End Class AXRCreativeGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
