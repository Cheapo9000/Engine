// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDataTableRowToParamData.h"

#ifdef PCG_PCGDataTableRowToParamData_generated_h
#error "PCGDataTableRowToParamData.generated.h already included, missing '#pragma once' in PCGDataTableRowToParamData.h"
#endif
#define PCG_PCGDataTableRowToParamData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataTableRowToParamDataSettings **************************************
struct Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataTableRowToParamDataSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataTableRowToParamDataSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataTableRowToParamDataSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataTableRowToParamDataSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataTableRowToParamDataSettings(UPCGDataTableRowToParamDataSettings&&) = delete; \
	UPCGDataTableRowToParamDataSettings(const UPCGDataTableRowToParamDataSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataTableRowToParamDataSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataTableRowToParamDataSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataTableRowToParamDataSettings) \
	PCG_API virtual ~UPCGDataTableRowToParamDataSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataTableRowToParamDataSettings;

// ********** End Class UPCGDataTableRowToParamDataSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDataTableRowToParamData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
