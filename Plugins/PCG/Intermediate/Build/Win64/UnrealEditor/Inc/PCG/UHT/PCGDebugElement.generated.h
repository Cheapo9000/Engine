// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDebugElement.h"

#ifdef PCG_PCGDebugElement_generated_h
#error "PCGDebugElement.generated.h already included, missing '#pragma once' in PCGDebugElement.h"
#endif
#define PCG_PCGDebugElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDebugSettings ********************************************************
struct Z_Construct_UClass_UPCGDebugSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDebugSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDebugSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDebugSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDebugSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDebugSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDebugSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDebugSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDebugSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDebugSettings(UPCGDebugSettings&&) = delete; \
	UPCGDebugSettings(const UPCGDebugSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDebugSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDebugSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDebugSettings) \
	PCG_API virtual ~UPCGDebugSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDebugSettings;

// ********** End Class UPCGDebugSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDebugElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
