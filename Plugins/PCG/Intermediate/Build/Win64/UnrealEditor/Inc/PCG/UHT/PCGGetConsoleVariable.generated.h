// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGetConsoleVariable.h"

#ifdef PCG_PCGGetConsoleVariable_generated_h
#error "PCGGetConsoleVariable.generated.h already included, missing '#pragma once' in PCGGetConsoleVariable.h"
#endif
#define PCG_PCGGetConsoleVariable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetConsoleVariableSettings *******************************************
struct Z_Construct_UClass_UPCGGetConsoleVariableSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetConsoleVariableSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetConsoleVariable_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetConsoleVariableSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGetConsoleVariableSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetConsoleVariableSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetConsoleVariableSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetConsoleVariableSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetConsoleVariableSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetConsoleVariable_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGetConsoleVariableSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetConsoleVariableSettings(UPCGGetConsoleVariableSettings&&) = delete; \
	UPCGGetConsoleVariableSettings(const UPCGGetConsoleVariableSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetConsoleVariableSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetConsoleVariableSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGetConsoleVariableSettings) \
	PCG_API virtual ~UPCGGetConsoleVariableSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetConsoleVariable_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetConsoleVariable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetConsoleVariable_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetConsoleVariable_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetConsoleVariableSettings;

// ********** End Class UPCGGetConsoleVariableSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetConsoleVariable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
