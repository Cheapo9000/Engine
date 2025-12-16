// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttributeRemoveDuplicates.h"

#ifdef PCG_PCGAttributeRemoveDuplicates_generated_h
#error "PCGAttributeRemoveDuplicates.generated.h already included, missing '#pragma once' in PCGAttributeRemoveDuplicates.h"
#endif
#define PCG_PCGAttributeRemoveDuplicates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttributeRemoveDuplicatesSettings ************************************
struct Z_Construct_UClass_UPCGAttributeRemoveDuplicatesSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeRemoveDuplicatesSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeRemoveDuplicates_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeRemoveDuplicatesSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeRemoveDuplicatesSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeRemoveDuplicatesSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeRemoveDuplicatesSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeRemoveDuplicatesSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeRemoveDuplicatesSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeRemoveDuplicates_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGAttributeRemoveDuplicatesSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeRemoveDuplicatesSettings(UPCGAttributeRemoveDuplicatesSettings&&) = delete; \
	UPCGAttributeRemoveDuplicatesSettings(const UPCGAttributeRemoveDuplicatesSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeRemoveDuplicatesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeRemoveDuplicatesSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGAttributeRemoveDuplicatesSettings) \
	PCG_API virtual ~UPCGAttributeRemoveDuplicatesSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeRemoveDuplicates_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeRemoveDuplicates_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeRemoveDuplicates_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeRemoveDuplicates_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeRemoveDuplicatesSettings;

// ********** End Class UPCGAttributeRemoveDuplicatesSettings **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeRemoveDuplicates_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
