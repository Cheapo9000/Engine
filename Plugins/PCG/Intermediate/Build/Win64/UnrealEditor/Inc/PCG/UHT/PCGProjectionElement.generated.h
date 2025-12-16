// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGProjectionElement.h"

#ifdef PCG_PCGProjectionElement_generated_h
#error "PCGProjectionElement.generated.h already included, missing '#pragma once' in PCGProjectionElement.h"
#endif
#define PCG_PCGProjectionElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGProjectionSettings ***************************************************
struct Z_Construct_UClass_UPCGProjectionSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGProjectionSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionElement_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGProjectionSettings(); \
	friend struct ::Z_Construct_UClass_UPCGProjectionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGProjectionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGProjectionSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGProjectionSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGProjectionSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionElement_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGProjectionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGProjectionSettings(UPCGProjectionSettings&&) = delete; \
	UPCGProjectionSettings(const UPCGProjectionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGProjectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGProjectionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGProjectionSettings) \
	PCG_API virtual ~UPCGProjectionSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionElement_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionElement_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionElement_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionElement_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGProjectionSettings;

// ********** End Class UPCGProjectionSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGProjectionElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
