// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGConvexHull2D.h"

#ifdef PCG_PCGConvexHull2D_generated_h
#error "PCGConvexHull2D.generated.h already included, missing '#pragma once' in PCGConvexHull2D.h"
#endif
#define PCG_PCGConvexHull2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGConvexHull2DSettings *************************************************
struct Z_Construct_UClass_UPCGConvexHull2DSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGConvexHull2DSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGConvexHull2D_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGConvexHull2DSettings(); \
	friend struct ::Z_Construct_UClass_UPCGConvexHull2DSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGConvexHull2DSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGConvexHull2DSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGConvexHull2DSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGConvexHull2DSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGConvexHull2D_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGConvexHull2DSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGConvexHull2DSettings(UPCGConvexHull2DSettings&&) = delete; \
	UPCGConvexHull2DSettings(const UPCGConvexHull2DSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGConvexHull2DSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGConvexHull2DSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGConvexHull2DSettings) \
	NO_API virtual ~UPCGConvexHull2DSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGConvexHull2D_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGConvexHull2D_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGConvexHull2D_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGConvexHull2D_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGConvexHull2DSettings;

// ********** End Class UPCGConvexHull2DSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGConvexHull2D_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
