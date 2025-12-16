// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGVisualizeAttribute.h"

#ifdef PCG_PCGVisualizeAttribute_generated_h
#error "PCGVisualizeAttribute.generated.h already included, missing '#pragma once' in PCGVisualizeAttribute.h"
#endif
#define PCG_PCGVisualizeAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGVisualizeAttributeSettings *******************************************
struct Z_Construct_UClass_UPCGVisualizeAttributeSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGVisualizeAttributeSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGVisualizeAttributeSettings(); \
	friend struct ::Z_Construct_UClass_UPCGVisualizeAttributeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGVisualizeAttributeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGVisualizeAttributeSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGVisualizeAttributeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGVisualizeAttributeSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGVisualizeAttributeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGVisualizeAttributeSettings(UPCGVisualizeAttributeSettings&&) = delete; \
	UPCGVisualizeAttributeSettings(const UPCGVisualizeAttributeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGVisualizeAttributeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGVisualizeAttributeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGVisualizeAttributeSettings) \
	NO_API virtual ~UPCGVisualizeAttributeSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGVisualizeAttributeSettings;

// ********** End Class UPCGVisualizeAttributeSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGVisualizeAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
