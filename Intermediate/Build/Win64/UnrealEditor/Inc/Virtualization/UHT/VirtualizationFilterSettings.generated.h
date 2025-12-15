// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualizationFilterSettings.h"

#ifdef VIRTUALIZATION_VirtualizationFilterSettings_generated_h
#error "VirtualizationFilterSettings.generated.h already included, missing '#pragma once' in VirtualizationFilterSettings.h"
#endif
#define VIRTUALIZATION_VirtualizationFilterSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVirtualizationFilterSettings ********************************************
struct Z_Construct_UClass_UVirtualizationFilterSettings_Statics;
VIRTUALIZATION_API UClass* Z_Construct_UClass_UVirtualizationFilterSettings_NoRegister();

#define FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualizationFilterSettings(); \
	friend struct ::Z_Construct_UClass_UVirtualizationFilterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALIZATION_API UClass* ::Z_Construct_UClass_UVirtualizationFilterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualizationFilterSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Virtualization"), Z_Construct_UClass_UVirtualizationFilterSettings_NoRegister) \
	DECLARE_SERIALIZER(UVirtualizationFilterSettings)


#define FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualizationFilterSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualizationFilterSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualizationFilterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualizationFilterSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualizationFilterSettings(UVirtualizationFilterSettings&&) = delete; \
	UVirtualizationFilterSettings(const UVirtualizationFilterSettings&) = delete; \
	NO_API virtual ~UVirtualizationFilterSettings();


#define FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_12_PROLOG
#define FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_15_INCLASS \
	FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualizationFilterSettings;

// ********** End Class UVirtualizationFilterSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
