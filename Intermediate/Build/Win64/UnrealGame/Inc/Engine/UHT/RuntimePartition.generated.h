// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/RuntimeHashSet/RuntimePartition.h"

#ifdef ENGINE_RuntimePartition_generated_h
#error "RuntimePartition.generated.h already included, missing '#pragma once' in RuntimePartition.h"
#endif
#define ENGINE_RuntimePartition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URuntimePartition ********************************************************
struct Z_Construct_UClass_URuntimePartition_Statics;
ENGINE_API UClass* Z_Construct_UClass_URuntimePartition_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURuntimePartition(); \
	friend struct ::Z_Construct_UClass_URuntimePartition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URuntimePartition_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimePartition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URuntimePartition_NoRegister) \
	DECLARE_SERIALIZER(URuntimePartition)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URuntimePartition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimePartition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimePartition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimePartition); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimePartition(URuntimePartition&&) = delete; \
	URuntimePartition(const URuntimePartition&) = delete; \
	ENGINE_API virtual ~URuntimePartition();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimePartition;

// ********** End Class URuntimePartition **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_RuntimeHashSet_RuntimePartition_h

// ********** Begin Enum ERuntimePartitionCellBoundsMethod *****************************************
#define FOREACH_ENUM_ERUNTIMEPARTITIONCELLBOUNDSMETHOD(op) \
	op(ERuntimePartitionCellBoundsMethod::UseContent) \
	op(ERuntimePartitionCellBoundsMethod::UseCellBounds) \
	op(ERuntimePartitionCellBoundsMethod::UseMinContentCellBounds) 

enum class ERuntimePartitionCellBoundsMethod : uint8;
template<> struct TIsUEnumClass<ERuntimePartitionCellBoundsMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERuntimePartitionCellBoundsMethod>();
// ********** End Enum ERuntimePartitionCellBoundsMethod *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
