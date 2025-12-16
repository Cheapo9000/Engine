// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGRandomChoice.h"

#ifdef PCG_PCGRandomChoice_generated_h
#error "PCGRandomChoice.generated.h already included, missing '#pragma once' in PCGRandomChoice.h"
#endif
#define PCG_PCGRandomChoice_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGRandomChoiceSettings *************************************************
struct Z_Construct_UClass_UPCGRandomChoiceSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGRandomChoiceSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGRandomChoice_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGRandomChoiceSettings(); \
	friend struct ::Z_Construct_UClass_UPCGRandomChoiceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGRandomChoiceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGRandomChoiceSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGRandomChoiceSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGRandomChoiceSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGRandomChoice_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGRandomChoiceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGRandomChoiceSettings(UPCGRandomChoiceSettings&&) = delete; \
	UPCGRandomChoiceSettings(const UPCGRandomChoiceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGRandomChoiceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGRandomChoiceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGRandomChoiceSettings) \
	NO_API virtual ~UPCGRandomChoiceSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGRandomChoice_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGRandomChoice_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGRandomChoice_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGRandomChoice_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGRandomChoiceSettings;

// ********** End Class UPCGRandomChoiceSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGRandomChoice_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
