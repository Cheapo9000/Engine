// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGMakeConcreteElement.h"

#ifdef PCG_PCGMakeConcreteElement_generated_h
#error "PCGMakeConcreteElement.generated.h already included, missing '#pragma once' in PCGMakeConcreteElement.h"
#endif
#define PCG_PCGMakeConcreteElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMakeConcreteSettings *************************************************
struct Z_Construct_UClass_UPCGMakeConcreteSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMakeConcreteSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMakeConcreteSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMakeConcreteSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMakeConcreteSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMakeConcreteSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMakeConcreteSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMakeConcreteSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGMakeConcreteSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMakeConcreteSettings(UPCGMakeConcreteSettings&&) = delete; \
	UPCGMakeConcreteSettings(const UPCGMakeConcreteSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGMakeConcreteSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMakeConcreteSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMakeConcreteSettings) \
	PCG_API virtual ~UPCGMakeConcreteSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_10_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMakeConcreteSettings;

// ********** End Class UPCGMakeConcreteSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGMakeConcreteElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
