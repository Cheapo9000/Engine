// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LODInfoUILayout.h"

#ifdef PERSONA_LODInfoUILayout_generated_h
#error "LODInfoUILayout.generated.h already included, missing '#pragma once' in LODInfoUILayout.h"
#endif
#define PERSONA_LODInfoUILayout_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULODInfoUILayout *********************************************************
struct Z_Construct_UClass_ULODInfoUILayout_Statics;
PERSONA_API UClass* Z_Construct_UClass_ULODInfoUILayout_NoRegister();

#define FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULODInfoUILayout(); \
	friend struct ::Z_Construct_UClass_ULODInfoUILayout_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERSONA_API UClass* ::Z_Construct_UClass_ULODInfoUILayout_NoRegister(); \
public: \
	DECLARE_CLASS2(ULODInfoUILayout, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), Z_Construct_UClass_ULODInfoUILayout_NoRegister) \
	DECLARE_SERIALIZER(ULODInfoUILayout)


#define FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API ULODInfoUILayout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODInfoUILayout) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, ULODInfoUILayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODInfoUILayout); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULODInfoUILayout(ULODInfoUILayout&&) = delete; \
	ULODInfoUILayout(const ULODInfoUILayout&) = delete; \
	PERSONA_API virtual ~ULODInfoUILayout();


#define FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_17_PROLOG
#define FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_INCLASS \
	FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULODInfoUILayout;

// ********** End Class ULODInfoUILayout ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Private_LODInfoUILayout_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
