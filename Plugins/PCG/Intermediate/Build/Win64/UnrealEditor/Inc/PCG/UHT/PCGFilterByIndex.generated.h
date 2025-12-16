// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGFilterByIndex.h"

#ifdef PCG_PCGFilterByIndex_generated_h
#error "PCGFilterByIndex.generated.h already included, missing '#pragma once' in PCGFilterByIndex.h"
#endif
#define PCG_PCGFilterByIndex_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGFilterByIndexSettings ************************************************
struct Z_Construct_UClass_UPCGFilterByIndexSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGFilterByIndexSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByIndex_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGFilterByIndexSettings(); \
	friend struct ::Z_Construct_UClass_UPCGFilterByIndexSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGFilterByIndexSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGFilterByIndexSettings, UPCGFilterDataBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGFilterByIndexSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGFilterByIndexSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByIndex_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGFilterByIndexSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGFilterByIndexSettings(UPCGFilterByIndexSettings&&) = delete; \
	UPCGFilterByIndexSettings(const UPCGFilterByIndexSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGFilterByIndexSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGFilterByIndexSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGFilterByIndexSettings) \
	PCG_API virtual ~UPCGFilterByIndexSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByIndex_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByIndex_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByIndex_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByIndex_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGFilterByIndexSettings;

// ********** End Class UPCGFilterByIndexSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGFilterByIndex_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
