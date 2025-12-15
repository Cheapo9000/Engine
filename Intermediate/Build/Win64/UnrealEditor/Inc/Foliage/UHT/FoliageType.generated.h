// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FoliageType.h"

#ifdef FOLIAGE_FoliageType_generated_h
#error "FoliageType.generated.h already included, missing '#pragma once' in FoliageType.h"
#endif
#define FOLIAGE_FoliageType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFoliageVertexColorChannelMask ************************************
struct Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics;
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics; \
	FOLIAGE_API static class UScriptStruct* StaticStruct();


struct FFoliageVertexColorChannelMask;
// ********** End ScriptStruct FFoliageVertexColorChannelMask **************************************

// ********** Begin ScriptStruct FFoliageDensityFalloff ********************************************
struct Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics;
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics; \
	FOLIAGE_API static class UScriptStruct* StaticStruct();


struct FFoliageDensityFalloff;
// ********** End ScriptStruct FFoliageDensityFalloff **********************************************

// ********** Begin Class UFoliageType *************************************************************
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_107_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFoliageType, FOLIAGE_API)


struct Z_Construct_UClass_UFoliageType_Statics;
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();

#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageType(); \
	friend struct ::Z_Construct_UClass_UFoliageType_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FOLIAGE_API UClass* ::Z_Construct_UClass_UFoliageType_NoRegister(); \
public: \
	DECLARE_CLASS2(UFoliageType, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Foliage"), Z_Construct_UClass_UFoliageType_NoRegister) \
	DECLARE_SERIALIZER(UFoliageType) \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_107_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UFoliageType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UFoliageType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageType); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFoliageType(UFoliageType&&) = delete; \
	UFoliageType(const UFoliageType&) = delete; \
	FOLIAGE_API virtual ~UFoliageType();


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_104_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_107_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFoliageType;

// ********** End Class UFoliageType ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h

// ********** Begin Enum FoliageVertexColorMask ****************************************************
#define FOREACH_ENUM_FOLIAGEVERTEXCOLORMASK(op) \
	op(FOLIAGEVERTEXCOLORMASK_Disabled) \
	op(FOLIAGEVERTEXCOLORMASK_Red) \
	op(FOLIAGEVERTEXCOLORMASK_Green) \
	op(FOLIAGEVERTEXCOLORMASK_Blue) \
	op(FOLIAGEVERTEXCOLORMASK_Alpha) 

enum FoliageVertexColorMask : int;
template<> FOLIAGE_NON_ATTRIBUTED_API UEnum* StaticEnum<FoliageVertexColorMask>();
// ********** End Enum FoliageVertexColorMask ******************************************************

// ********** Begin Enum EVertexColorMaskChannel ***************************************************
#define FOREACH_ENUM_EVERTEXCOLORMASKCHANNEL(op) \
	op(EVertexColorMaskChannel::Red) \
	op(EVertexColorMaskChannel::Green) \
	op(EVertexColorMaskChannel::Blue) \
	op(EVertexColorMaskChannel::Alpha) \
	op(EVertexColorMaskChannel::MAX_None) 

enum class EVertexColorMaskChannel : uint8;
template<> struct TIsUEnumClass<EVertexColorMaskChannel> { enum { Value = true }; };
template<> FOLIAGE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVertexColorMaskChannel>();
// ********** End Enum EVertexColorMaskChannel *****************************************************

// ********** Begin Enum EFoliageScaling ***********************************************************
#define FOREACH_ENUM_EFOLIAGESCALING(op) \
	op(EFoliageScaling::Uniform) \
	op(EFoliageScaling::Free) \
	op(EFoliageScaling::LockXY) \
	op(EFoliageScaling::LockXZ) \
	op(EFoliageScaling::LockYZ) 

enum class EFoliageScaling : uint8;
template<> struct TIsUEnumClass<EFoliageScaling> { enum { Value = true }; };
template<> FOLIAGE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFoliageScaling>();
// ********** End Enum EFoliageScaling *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
