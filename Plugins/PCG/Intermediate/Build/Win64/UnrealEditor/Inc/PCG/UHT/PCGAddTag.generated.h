// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAddTag.h"

#ifdef PCG_PCGAddTag_generated_h
#error "PCGAddTag.generated.h already included, missing '#pragma once' in PCGAddTag.h"
#endif
#define PCG_PCGAddTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAddTagSettings *******************************************************
struct Z_Construct_UClass_UPCGAddTagSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAddTagSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddTag_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAddTagSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAddTagSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAddTagSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAddTagSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAddTagSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAddTagSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddTag_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGAddTagSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAddTagSettings(UPCGAddTagSettings&&) = delete; \
	UPCGAddTagSettings(const UPCGAddTagSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGAddTagSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAddTagSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAddTagSettings) \
	NO_API virtual ~UPCGAddTagSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddTag_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddTag_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddTag_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddTag_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAddTagSettings;

// ********** End Class UPCGAddTagSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAddTag_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
