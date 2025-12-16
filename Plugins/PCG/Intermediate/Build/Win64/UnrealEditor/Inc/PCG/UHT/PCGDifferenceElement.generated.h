// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDifferenceElement.h"

#ifdef PCG_PCGDifferenceElement_generated_h
#error "PCGDifferenceElement.generated.h already included, missing '#pragma once' in PCGDifferenceElement.h"
#endif
#define PCG_PCGDifferenceElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDifferenceSettings ***************************************************
struct Z_Construct_UClass_UPCGDifferenceSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDifferenceSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDifferenceSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDifferenceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDifferenceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDifferenceSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDifferenceSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDifferenceSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDifferenceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDifferenceSettings(UPCGDifferenceSettings&&) = delete; \
	UPCGDifferenceSettings(const UPCGDifferenceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDifferenceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDifferenceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDifferenceSettings) \
	PCG_API virtual ~UPCGDifferenceSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDifferenceSettings;

// ********** End Class UPCGDifferenceSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDifferenceElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
