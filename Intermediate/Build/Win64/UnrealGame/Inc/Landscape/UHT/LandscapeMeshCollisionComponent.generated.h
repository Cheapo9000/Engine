// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeMeshCollisionComponent.h"

#ifdef LANDSCAPE_LandscapeMeshCollisionComponent_generated_h
#error "LandscapeMeshCollisionComponent.generated.h already included, missing '#pragma once' in LandscapeMeshCollisionComponent.h"
#endif
#define LANDSCAPE_LandscapeMeshCollisionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeMeshCollisionComponent_DEPRECATED ******************************
struct Z_Construct_UClass_ULandscapeMeshCollisionComponent_DEPRECATED_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_DEPRECATED_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeMeshCollisionComponent_DEPRECATED(); \
	friend struct ::Z_Construct_UClass_ULandscapeMeshCollisionComponent_DEPRECATED_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeMeshCollisionComponent_DEPRECATED_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeMeshCollisionComponent_DEPRECATED, ULandscapeHeightfieldCollisionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeMeshCollisionComponent_DEPRECATED_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeMeshCollisionComponent_DEPRECATED)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeMeshCollisionComponent_DEPRECATED(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeMeshCollisionComponent_DEPRECATED(ULandscapeMeshCollisionComponent_DEPRECATED&&) = delete; \
	ULandscapeMeshCollisionComponent_DEPRECATED(const ULandscapeMeshCollisionComponent_DEPRECATED&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeMeshCollisionComponent_DEPRECATED); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMeshCollisionComponent_DEPRECATED); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeMeshCollisionComponent_DEPRECATED) \
	NO_API virtual ~ULandscapeMeshCollisionComponent_DEPRECATED();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_23_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeMeshCollisionComponent_DEPRECATED;

// ********** End Class ULandscapeMeshCollisionComponent_DEPRECATED ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMeshCollisionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
