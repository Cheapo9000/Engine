// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVector.h"

#ifdef ENGINE_DistributionVector_generated_h
#error "DistributionVector.generated.h already included, missing '#pragma once' in DistributionVector.h"
#endif
#define ENGINE_DistributionVector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRawDistributionVector ********************************************
struct Z_Construct_UScriptStruct_FRawDistributionVector_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRawDistributionVector_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FRawDistribution Super;


struct FRawDistributionVector;
// ********** End ScriptStruct FRawDistributionVector **********************************************

// ********** Begin Class UDistributionVector ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDistributionVector, ENGINE_API)


struct Z_Construct_UClass_UDistributionVector_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDistributionVector_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVector(); \
	friend struct ::Z_Construct_UClass_UDistributionVector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDistributionVector_NoRegister(); \
public: \
	DECLARE_CLASS2(UDistributionVector, UDistribution, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDistributionVector_NoRegister) \
	DECLARE_SERIALIZER(UDistributionVector) \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_STANDARD_CONSTRUCTORS \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVector); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDistributionVector(UDistributionVector&&) = delete; \
	UDistributionVector(const UDistributionVector&) = delete; \
	ENGINE_API virtual ~UDistributionVector();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_146_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDistributionVector;

// ********** End Class UDistributionVector ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h

// ********** Begin Enum EDistributionVectorLockFlags **********************************************
#define FOREACH_ENUM_EDISTRIBUTIONVECTORLOCKFLAGS(op) \
	op(EDVLF_None) \
	op(EDVLF_XY) \
	op(EDVLF_XZ) \
	op(EDVLF_YZ) \
	op(EDVLF_XYZ) 

enum EDistributionVectorLockFlags : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistributionVectorLockFlags>();
// ********** End Enum EDistributionVectorLockFlags ************************************************

// ********** Begin Enum EDistributionVectorMirrorFlags ********************************************
#define FOREACH_ENUM_EDISTRIBUTIONVECTORMIRRORFLAGS(op) \
	op(EDVMF_Same) \
	op(EDVMF_Different) \
	op(EDVMF_Mirror) 

enum EDistributionVectorMirrorFlags : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDistributionVectorMirrorFlags>();
// ********** End Enum EDistributionVectorMirrorFlags **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
