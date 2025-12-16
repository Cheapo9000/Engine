// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGInnerIntersectionElement.h"

#ifdef PCG_PCGInnerIntersectionElement_generated_h
#error "PCGInnerIntersectionElement.generated.h already included, missing '#pragma once' in PCGInnerIntersectionElement.h"
#endif
#define PCG_PCGInnerIntersectionElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGInnerIntersectionSettings ********************************************
struct Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGInnerIntersectionSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInnerIntersectionSettings(); \
	friend struct ::Z_Construct_UClass_UPCGInnerIntersectionSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGInnerIntersectionSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGInnerIntersectionSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGInnerIntersectionSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGInnerIntersectionSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGInnerIntersectionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGInnerIntersectionSettings(UPCGInnerIntersectionSettings&&) = delete; \
	UPCGInnerIntersectionSettings(const UPCGInnerIntersectionSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGInnerIntersectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInnerIntersectionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInnerIntersectionSettings) \
	PCG_API virtual ~UPCGInnerIntersectionSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGInnerIntersectionSettings;

// ********** End Class UPCGInnerIntersectionSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGInnerIntersectionElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
