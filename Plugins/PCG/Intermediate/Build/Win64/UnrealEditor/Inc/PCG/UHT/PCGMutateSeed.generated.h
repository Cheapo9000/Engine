// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGMutateSeed.h"

#ifdef PCG_PCGMutateSeed_generated_h
#error "PCGMutateSeed.generated.h already included, missing '#pragma once' in PCGMutateSeed.h"
#endif
#define PCG_PCGMutateSeed_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMutateSeedSettings ***************************************************
struct Z_Construct_UClass_UPCGMutateSeedSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMutateSeedSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMutateSeed_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMutateSeedSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMutateSeedSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMutateSeedSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMutateSeedSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMutateSeedSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMutateSeedSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMutateSeed_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMutateSeedSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMutateSeedSettings(UPCGMutateSeedSettings&&) = delete; \
	UPCGMutateSeedSettings(const UPCGMutateSeedSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMutateSeedSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMutateSeedSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMutateSeedSettings) \
	NO_API virtual ~UPCGMutateSeedSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMutateSeed_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMutateSeed_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMutateSeed_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMutateSeed_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMutateSeedSettings;

// ********** End Class UPCGMutateSeedSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMutateSeed_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
