// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGExecuteBlueprint.h"

#ifdef PCG_PCGExecuteBlueprint_generated_h
#error "PCGExecuteBlueprint.generated.h already included, missing '#pragma once' in PCGExecuteBlueprint.h"
#endif
#define PCG_PCGExecuteBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGBlueprintBaseElement;
class UPCGBlueprintElement;

// ********** Begin Class UPCGBlueprintSettings ****************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetElementType); \
	DECLARE_FUNCTION(execSetBlueprintElementType); \
	DECLARE_FUNCTION(execSetElementType);


struct Z_Construct_UClass_UPCGBlueprintSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlueprintSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBlueprintSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBlueprintSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBlueprintSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBlueprintSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBlueprintSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBlueprintSettings(UPCGBlueprintSettings&&) = delete; \
	UPCGBlueprintSettings(const UPCGBlueprintSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBlueprintSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlueprintSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGBlueprintSettings) \
	PCG_API virtual ~UPCGBlueprintSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_31_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBlueprintSettings;

// ********** End Class UPCGBlueprintSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGExecuteBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
