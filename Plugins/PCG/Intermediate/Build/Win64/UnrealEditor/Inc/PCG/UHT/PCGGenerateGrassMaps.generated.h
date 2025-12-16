// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGenerateGrassMaps.h"

#ifdef PCG_PCGGenerateGrassMaps_generated_h
#error "PCGGenerateGrassMaps.generated.h already included, missing '#pragma once' in PCGGenerateGrassMaps.h"
#endif
#define PCG_PCGGenerateGrassMaps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_PCGGenerateGrassMapsSettings *********************************
struct Z_Construct_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateGrassMaps_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_PCGGenerateGrassMapsSettings(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_PCGGenerateGrassMapsSettings, UPCGGenerateLandscapeTexturesSettings, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UDEPRECATED_PCGGenerateGrassMapsSettings_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_PCGGenerateGrassMapsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateGrassMaps_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UDEPRECATED_PCGGenerateGrassMapsSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_PCGGenerateGrassMapsSettings(UDEPRECATED_PCGGenerateGrassMapsSettings&&) = delete; \
	UDEPRECATED_PCGGenerateGrassMapsSettings(const UDEPRECATED_PCGGenerateGrassMapsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UDEPRECATED_PCGGenerateGrassMapsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_PCGGenerateGrassMapsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_PCGGenerateGrassMapsSettings) \
	PCG_API virtual ~UDEPRECATED_PCGGenerateGrassMapsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateGrassMaps_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateGrassMaps_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateGrassMaps_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateGrassMaps_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_PCGGenerateGrassMapsSettings;

// ********** End Class UDEPRECATED_PCGGenerateGrassMapsSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateGrassMaps_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
