// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Polygon/PCGGetSegment.h"

#ifdef PCG_PCGGetSegment_generated_h
#error "PCGGetSegment.generated.h already included, missing '#pragma once' in PCGGetSegment.h"
#endif
#define PCG_PCGGetSegment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetSegmentSettings ***************************************************
struct Z_Construct_UClass_UPCGGetSegmentSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetSegmentSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetSegmentSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGetSegmentSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetSegmentSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetSegmentSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetSegmentSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetSegmentSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGetSegmentSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetSegmentSettings(UPCGGetSegmentSettings&&) = delete; \
	UPCGGetSegmentSettings(const UPCGGetSegmentSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetSegmentSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetSegmentSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGetSegmentSettings) \
	PCG_API virtual ~UPCGGetSegmentSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h_18_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetSegmentSettings;

// ********** End Class UPCGGetSegmentSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGGetSegment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
