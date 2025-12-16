// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDuplicatePoint.h"

#ifdef PCG_PCGDuplicatePoint_generated_h
#error "PCGDuplicatePoint.generated.h already included, missing '#pragma once' in PCGDuplicatePoint.h"
#endif
#define PCG_PCGDuplicatePoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDuplicatePointSettings ***********************************************
struct Z_Construct_UClass_UPCGDuplicatePointSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDuplicatePointSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDuplicatePoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDuplicatePointSettings(); \
	friend struct ::Z_Construct_UClass_UPCGDuplicatePointSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDuplicatePointSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDuplicatePointSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDuplicatePointSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGDuplicatePointSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDuplicatePoint_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDuplicatePointSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDuplicatePointSettings(UPCGDuplicatePointSettings&&) = delete; \
	UPCGDuplicatePointSettings(const UPCGDuplicatePointSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDuplicatePointSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDuplicatePointSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDuplicatePointSettings) \
	NO_API virtual ~UPCGDuplicatePointSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDuplicatePoint_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDuplicatePoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDuplicatePoint_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDuplicatePoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDuplicatePointSettings;

// ********** End Class UPCGDuplicatePointSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGDuplicatePoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
