// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VectorField/VectorFieldAnimated.h"

#ifdef ENGINE_VectorFieldAnimated_generated_h
#error "VectorFieldAnimated.generated.h already included, missing '#pragma once' in VectorFieldAnimated.h"
#endif
#define ENGINE_VectorFieldAnimated_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVectorFieldAnimated *****************************************************
struct Z_Construct_UClass_UVectorFieldAnimated_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUVectorFieldAnimated(); \
	friend struct ::Z_Construct_UClass_UVectorFieldAnimated_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVectorFieldAnimated_NoRegister(); \
public: \
	DECLARE_CLASS2(UVectorFieldAnimated, UVectorField, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVectorFieldAnimated_NoRegister) \
	DECLARE_SERIALIZER(UVectorFieldAnimated)


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldAnimated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldAnimated) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldAnimated); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldAnimated); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVectorFieldAnimated(UVectorFieldAnimated&&) = delete; \
	UVectorFieldAnimated(const UVectorFieldAnimated&) = delete; \
	ENGINE_API virtual ~UVectorFieldAnimated();


#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVectorFieldAnimated;

// ********** End Class UVectorFieldAnimated *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VectorField_VectorFieldAnimated_h

// ********** Begin Enum EVectorFieldConstructionOp ************************************************
#define FOREACH_ENUM_EVECTORFIELDCONSTRUCTIONOP(op) \
	op(VFCO_Extrude) \
	op(VFCO_Revolve) 

enum EVectorFieldConstructionOp : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVectorFieldConstructionOp>();
// ********** End Enum EVectorFieldConstructionOp **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
