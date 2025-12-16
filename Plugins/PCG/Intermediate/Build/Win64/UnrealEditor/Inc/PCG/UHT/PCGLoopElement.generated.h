// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGLoopElement.h"

#ifdef PCG_PCGLoopElement_generated_h
#error "PCGLoopElement.generated.h already included, missing '#pragma once' in PCGLoopElement.h"
#endif
#define PCG_PCGLoopElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGLoopSettings *********************************************************
struct Z_Construct_UClass_UPCGLoopSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGLoopSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLoopSettings(); \
	friend struct ::Z_Construct_UClass_UPCGLoopSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGLoopSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLoopSettings, UPCGSubgraphSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGLoopSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGLoopSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGLoopSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLoopSettings(UPCGLoopSettings&&) = delete; \
	UPCGLoopSettings(const UPCGLoopSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGLoopSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLoopSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLoopSettings) \
	PCG_API virtual ~UPCGLoopSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGLoopElement_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLoopSettings;

// ********** End Class UPCGLoopSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGLoopElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
