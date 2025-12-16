// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/ControlFlow/PCGMultiSelect.h"

#ifdef PCG_PCGMultiSelect_generated_h
#error "PCGMultiSelect.generated.h already included, missing '#pragma once' in PCGMultiSelect.h"
#endif
#define PCG_PCGMultiSelect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGMultiSelectSettings **************************************************
struct Z_Construct_UClass_UPCGMultiSelectSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGMultiSelectSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGMultiSelect_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGMultiSelectSettings(); \
	friend struct ::Z_Construct_UClass_UPCGMultiSelectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGMultiSelectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGMultiSelectSettings, UPCGControlFlowSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGMultiSelectSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGMultiSelectSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGMultiSelect_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGMultiSelectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGMultiSelectSettings(UPCGMultiSelectSettings&&) = delete; \
	UPCGMultiSelectSettings(const UPCGMultiSelectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGMultiSelectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGMultiSelectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGMultiSelectSettings) \
	NO_API virtual ~UPCGMultiSelectSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGMultiSelect_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGMultiSelect_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGMultiSelect_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGMultiSelect_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGMultiSelectSettings;

// ********** End Class UPCGMultiSelectSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_ControlFlow_PCGMultiSelect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
