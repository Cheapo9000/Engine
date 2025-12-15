// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VectorField/VectorFieldStatic.h"

#ifdef ENGINE_VectorFieldStatic_generated_h
#error "VectorFieldStatic.generated.h already included, missing '#pragma once' in VectorFieldStatic.h"
#endif
#define ENGINE_VectorFieldStatic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVectorFieldStatic *******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVectorFieldStatic, ENGINE_API)


struct Z_Construct_UClass_UVectorFieldStatic_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUVectorFieldStatic(); \
	friend struct ::Z_Construct_UClass_UVectorFieldStatic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVectorFieldStatic_NoRegister(); \
public: \
	DECLARE_CLASS2(UVectorFieldStatic, UVectorField, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVectorFieldStatic_NoRegister) \
	DECLARE_SERIALIZER(UVectorFieldStatic) \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_27_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldStatic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldStatic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldStatic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldStatic); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVectorFieldStatic(UVectorFieldStatic&&) = delete; \
	UVectorFieldStatic(const UVectorFieldStatic&) = delete; \
	ENGINE_API virtual ~UVectorFieldStatic();


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_27_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVectorFieldStatic;

// ********** End Class UVectorFieldStatic *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldStatic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
