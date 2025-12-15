// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VectorField/VectorField.h"

#ifdef ENGINE_VectorField_generated_h
#error "VectorField.generated.h already included, missing '#pragma once' in VectorField.h"
#endif
#define ENGINE_VectorField_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVectorField *************************************************************
struct Z_Construct_UClass_UVectorField_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVectorField(); \
	friend struct ::Z_Construct_UClass_UVectorField_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVectorField_NoRegister(); \
public: \
	DECLARE_CLASS2(UVectorField, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVectorField_NoRegister) \
	DECLARE_SERIALIZER(UVectorField)


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorField(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorField); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVectorField(UVectorField&&) = delete; \
	UVectorField(const UVectorField&) = delete; \
	ENGINE_API virtual ~UVectorField();


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVectorField;

// ********** End Class UVectorField ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorField_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
