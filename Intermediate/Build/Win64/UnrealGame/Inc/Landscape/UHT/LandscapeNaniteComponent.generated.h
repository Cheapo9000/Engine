// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeNaniteComponent.h"

#ifdef LANDSCAPE_LandscapeNaniteComponent_generated_h
#error "LandscapeNaniteComponent.generated.h already included, missing '#pragma once' in LandscapeNaniteComponent.h"
#endif
#define LANDSCAPE_LandscapeNaniteComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeNaniteComponent ************************************************
struct Z_Construct_UClass_ULandscapeNaniteComponent_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeNaniteComponent(); \
	friend struct ::Z_Construct_UClass_ULandscapeNaniteComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeNaniteComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeNaniteComponent_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeNaniteComponent) \
	DECLARE_WITHIN(ALandscapeProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_84_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeNaniteComponent(ULandscapeNaniteComponent&&) = delete; \
	ULandscapeNaniteComponent(const ULandscapeNaniteComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeNaniteComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeNaniteComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeNaniteComponent) \
	LANDSCAPE_API virtual ~ULandscapeNaniteComponent();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_81_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeNaniteComponent;

// ********** End Class ULandscapeNaniteComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeNaniteComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
