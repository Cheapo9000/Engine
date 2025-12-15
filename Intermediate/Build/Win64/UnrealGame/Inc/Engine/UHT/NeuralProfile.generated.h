// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NeuralProfile.h"

#ifdef ENGINE_NeuralProfile_generated_h
#error "NeuralProfile.generated.h already included, missing '#pragma once' in NeuralProfile.h"
#endif
#define ENGINE_NeuralProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNeuralProfileStruct **********************************************
struct Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNeuralProfileStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNeuralProfileStruct;
// ********** End ScriptStruct FNeuralProfileStruct ************************************************

// ********** Begin Class UNeuralProfile ***********************************************************
struct Z_Construct_UClass_UNeuralProfile_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNeuralProfile_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_INCLASS \
private: \
	static void StaticRegisterNativesUNeuralProfile(); \
	friend struct ::Z_Construct_UClass_UNeuralProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNeuralProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(UNeuralProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNeuralProfile_NoRegister) \
	DECLARE_SERIALIZER(UNeuralProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNeuralProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuralProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNeuralProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuralProfile); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNeuralProfile(UNeuralProfile&&) = delete; \
	UNeuralProfile(const UNeuralProfile&) = delete; \
	ENGINE_API virtual ~UNeuralProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_139_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h_142_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNeuralProfile;

// ********** End Class UNeuralProfile *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NeuralProfile_h

// ********** Begin Enum ENeuralProfileFormat ******************************************************
#define FOREACH_ENUM_ENEURALPROFILEFORMAT(op) \
	op(ENeuralProfileFormat::Type32) \
	op(ENeuralProfileFormat::Type16) 

enum class ENeuralProfileFormat : uint8;
template<> struct TIsUEnumClass<ENeuralProfileFormat> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENeuralProfileFormat>();
// ********** End Enum ENeuralProfileFormat ********************************************************

// ********** Begin Enum ENeuralModelTileType ******************************************************
#define FOREACH_ENUM_ENEURALMODELTILETYPE(op) \
	op(ENeuralModelTileType::OneByOne) \
	op(ENeuralModelTileType::TwoByTwo) \
	op(ENeuralModelTileType::FourByFour) \
	op(ENeuralModelTileType::EightByEight) \
	op(ENeuralModelTileType::Auto) 

enum class ENeuralModelTileType : uint8;
template<> struct TIsUEnumClass<ENeuralModelTileType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENeuralModelTileType>();
// ********** End Enum ENeuralModelTileType ********************************************************

// ********** Begin Enum ETileOverlapResolveType ***************************************************
#define FOREACH_ENUM_ETILEOVERLAPRESOLVETYPE(op) \
	op(ETileOverlapResolveType::Ignore) \
	op(ETileOverlapResolveType::Feathering) 

enum class ETileOverlapResolveType : uint8;
template<> struct TIsUEnumClass<ETileOverlapResolveType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETileOverlapResolveType>();
// ********** End Enum ETileOverlapResolveType *****************************************************

// ********** Begin Enum ENeuralProfileRuntimeType *************************************************
#define FOREACH_ENUM_ENEURALPROFILERUNTIMETYPE(op) \
	op(ENeuralProfileRuntimeType::NNERuntimeORTDml) \
	op(ENeuralProfileRuntimeType::NNERuntimeRDGHlsl) 

enum class ENeuralProfileRuntimeType : uint8;
template<> struct TIsUEnumClass<ENeuralProfileRuntimeType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENeuralProfileRuntimeType>();
// ********** End Enum ENeuralProfileRuntimeType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
