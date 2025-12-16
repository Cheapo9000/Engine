// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDensityRemapElement.h"

#ifdef PCG_PCGDensityRemapElement_generated_h
#error "PCGDensityRemapElement.generated.h already included, missing '#pragma once' in PCGDensityRemapElement.h"
#endif
#define PCG_PCGDensityRemapElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDensityRemapSettings *************************************************
struct Z_Construct_UClass_UPCGDensityRemapSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDensityRemapSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDensityRemapSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDensityRemapSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDensityRemapSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDensityRemapSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDensityRemapSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDensityRemapSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDensityRemapSettings(UPCGDensityRemapSettings&&) = delete; \
	UPCGDensityRemapSettings(const UPCGDensityRemapSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDensityRemapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDensityRemapSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGDensityRemapSettings) \
	PCG_API virtual ~UPCGDensityRemapSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDensityRemapSettings;

// ********** End Class UPCGDensityRemapSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDensityRemapElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
