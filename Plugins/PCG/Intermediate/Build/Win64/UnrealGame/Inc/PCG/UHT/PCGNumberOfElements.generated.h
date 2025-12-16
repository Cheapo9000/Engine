// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGNumberOfElements.h"

#ifdef PCG_PCGNumberOfElements_generated_h
#error "PCGNumberOfElements.generated.h already included, missing '#pragma once' in PCGNumberOfElements.h"
#endif
#define PCG_PCGNumberOfElements_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGNumberOfElementsSettings *********************************************
struct Z_Construct_UClass_UPCGNumberOfElementsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGNumberOfElementsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNumberOfElements_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGNumberOfElementsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGNumberOfElementsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGNumberOfElementsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGNumberOfElementsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGNumberOfElementsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGNumberOfElementsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNumberOfElements_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGNumberOfElementsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGNumberOfElementsSettings(UPCGNumberOfElementsSettings&&) = delete; \
	UPCGNumberOfElementsSettings(const UPCGNumberOfElementsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGNumberOfElementsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGNumberOfElementsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGNumberOfElementsSettings) \
	NO_API virtual ~UPCGNumberOfElementsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNumberOfElements_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNumberOfElements_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNumberOfElements_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNumberOfElements_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGNumberOfElementsSettings;

// ********** End Class UPCGNumberOfElementsSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGNumberOfElements_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
