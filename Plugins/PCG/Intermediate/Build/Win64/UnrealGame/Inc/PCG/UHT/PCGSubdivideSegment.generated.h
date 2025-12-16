// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Grammar/PCGSubdivideSegment.h"

#ifdef PCG_PCGSubdivideSegment_generated_h
#error "PCGSubdivideSegment.generated.h already included, missing '#pragma once' in PCGSubdivideSegment.h"
#endif
#define PCG_PCGSubdivideSegment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSubdivideSegmentSettings *********************************************
struct Z_Construct_UClass_UPCGSubdivideSegmentSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSubdivideSegmentSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivideSegment_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSubdivideSegmentSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSubdivideSegmentSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSubdivideSegmentSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSubdivideSegmentSettings, UPCGSubdivisionBaseSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSubdivideSegmentSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSubdivideSegmentSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivideSegment_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSubdivideSegmentSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSubdivideSegmentSettings(UPCGSubdivideSegmentSettings&&) = delete; \
	UPCGSubdivideSegmentSettings(const UPCGSubdivideSegmentSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSubdivideSegmentSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSubdivideSegmentSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSubdivideSegmentSettings) \
	PCG_API virtual ~UPCGSubdivideSegmentSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivideSegment_h_14_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivideSegment_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivideSegment_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivideSegment_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSubdivideSegmentSettings;

// ********** End Class UPCGSubdivideSegmentSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSubdivideSegment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
