// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Grammar/PCGDuplicateCrossSections.h"

#ifdef PCG_PCGDuplicateCrossSections_generated_h
#error "PCGDuplicateCrossSections.generated.h already included, missing '#pragma once' in PCGDuplicateCrossSections.h"
#endif
#define PCG_PCGDuplicateCrossSections_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDuplicateCrossSectionsSettings ***************************************
struct Z_Construct_UClass_UPCGDuplicateCrossSectionsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDuplicateCrossSectionsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGDuplicateCrossSections_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDuplicateCrossSectionsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDuplicateCrossSectionsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDuplicateCrossSectionsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDuplicateCrossSectionsSettings, UPCGSubdivisionBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDuplicateCrossSectionsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDuplicateCrossSectionsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGDuplicateCrossSections_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDuplicateCrossSectionsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDuplicateCrossSectionsSettings(UPCGDuplicateCrossSectionsSettings&&) = delete; \
	UPCGDuplicateCrossSectionsSettings(const UPCGDuplicateCrossSectionsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDuplicateCrossSectionsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDuplicateCrossSectionsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDuplicateCrossSectionsSettings) \
	PCG_API virtual ~UPCGDuplicateCrossSectionsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGDuplicateCrossSections_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGDuplicateCrossSections_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGDuplicateCrossSections_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGDuplicateCrossSections_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDuplicateCrossSectionsSettings;

// ********** End Class UPCGDuplicateCrossSectionsSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGDuplicateCrossSections_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
