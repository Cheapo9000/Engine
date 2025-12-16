// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGOuterIntersectionElement.h"

#ifdef PCG_PCGOuterIntersectionElement_generated_h
#error "PCGOuterIntersectionElement.generated.h already included, missing '#pragma once' in PCGOuterIntersectionElement.h"
#endif
#define PCG_PCGOuterIntersectionElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGOuterIntersectionSettings ********************************************
struct Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGOuterIntersectionSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGOuterIntersectionSettings(); \
	friend struct ::Z_Construct_UClass_UPCGOuterIntersectionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGOuterIntersectionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGOuterIntersectionSettings, UPCGSettingsWithDynamicInputs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGOuterIntersectionSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGOuterIntersectionSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGOuterIntersectionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGOuterIntersectionSettings(UPCGOuterIntersectionSettings&&) = delete; \
	UPCGOuterIntersectionSettings(const UPCGOuterIntersectionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGOuterIntersectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGOuterIntersectionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGOuterIntersectionSettings) \
	PCG_API virtual ~UPCGOuterIntersectionSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGOuterIntersectionSettings;

// ********** End Class UPCGOuterIntersectionSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGOuterIntersectionElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
