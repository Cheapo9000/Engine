// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Grammar/PCGSubdivisionBase.h"

#ifdef PCG_PCGSubdivisionBase_generated_h
#error "PCGSubdivisionBase.generated.h already included, missing '#pragma once' in PCGSubdivisionBase.h"
#endif
#define PCG_PCGSubdivisionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGSubdivisionSubmodule ******************************************
struct Z_Construct_UScriptStruct_FPCGSubdivisionSubmodule_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSubdivisionSubmodule_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSubdivisionSubmodule;
// ********** End ScriptStruct FPCGSubdivisionSubmodule ********************************************

// ********** Begin ScriptStruct FPCGSubdivisionModuleAttributeNames *******************************
struct Z_Construct_UScriptStruct_FPCGSubdivisionModuleAttributeNames_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSubdivisionModuleAttributeNames_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSubdivisionModuleAttributeNames;
// ********** End ScriptStruct FPCGSubdivisionModuleAttributeNames *********************************

// ********** Begin Class UPCGSubdivisionBaseSettings **********************************************
struct Z_Construct_UClass_UPCGSubdivisionBaseSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSubdivisionBaseSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSubdivisionBaseSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSubdivisionBaseSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSubdivisionBaseSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSubdivisionBaseSettings, UPCGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSubdivisionBaseSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSubdivisionBaseSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSubdivisionBaseSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSubdivisionBaseSettings(UPCGSubdivisionBaseSettings&&) = delete; \
	UPCGSubdivisionBaseSettings(const UPCGSubdivisionBaseSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSubdivisionBaseSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSubdivisionBaseSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSubdivisionBaseSettings) \
	PCG_API virtual ~UPCGSubdivisionBaseSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h_77_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSubdivisionBaseSettings;

// ********** End Class UPCGSubdivisionBaseSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivisionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
