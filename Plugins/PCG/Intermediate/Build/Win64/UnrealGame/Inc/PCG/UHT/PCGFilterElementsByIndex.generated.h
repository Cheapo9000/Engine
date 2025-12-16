// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGFilterElementsByIndex.h"

#ifdef PCG_PCGFilterElementsByIndex_generated_h
#error "PCGFilterElementsByIndex.generated.h already included, missing '#pragma once' in PCGFilterElementsByIndex.h"
#endif
#define PCG_PCGFilterElementsByIndex_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGFilterElementsByIndexSettings ****************************************
struct Z_Construct_UClass_UPCGFilterElementsByIndexSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGFilterElementsByIndexSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterElementsByIndex_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGFilterElementsByIndexSettings(); \
	friend struct ::Z_Construct_UClass_UPCGFilterElementsByIndexSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGFilterElementsByIndexSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGFilterElementsByIndexSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGFilterElementsByIndexSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGFilterElementsByIndexSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterElementsByIndex_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGFilterElementsByIndexSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGFilterElementsByIndexSettings(UPCGFilterElementsByIndexSettings&&) = delete; \
	UPCGFilterElementsByIndexSettings(const UPCGFilterElementsByIndexSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGFilterElementsByIndexSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGFilterElementsByIndexSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGFilterElementsByIndexSettings) \
	PCG_API virtual ~UPCGFilterElementsByIndexSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterElementsByIndex_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterElementsByIndex_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterElementsByIndex_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterElementsByIndex_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGFilterElementsByIndexSettings;

// ********** End Class UPCGFilterElementsByIndexSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterElementsByIndex_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
