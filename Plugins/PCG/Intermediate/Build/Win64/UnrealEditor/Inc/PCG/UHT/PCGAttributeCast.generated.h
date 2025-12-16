// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Metadata/PCGAttributeCast.h"

#ifdef PCG_PCGAttributeCast_generated_h
#error "PCGAttributeCast.generated.h already included, missing '#pragma once' in PCGAttributeCast.h"
#endif
#define PCG_PCGAttributeCast_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttributeCastSettings ************************************************
struct Z_Construct_UClass_UPCGAttributeCastSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeCastSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeCast_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeCastSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeCastSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeCastSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeCastSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeCastSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeCastSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeCast_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGAttributeCastSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeCastSettings(UPCGAttributeCastSettings&&) = delete; \
	UPCGAttributeCastSettings(const UPCGAttributeCastSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeCastSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeCastSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAttributeCastSettings) \
	PCG_API virtual ~UPCGAttributeCastSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeCast_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeCast_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeCast_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeCast_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeCastSettings;

// ********** End Class UPCGAttributeCastSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Metadata_PCGAttributeCast_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
