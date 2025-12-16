// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VolumeCache.h"

#ifdef NIAGARA_VolumeCache_generated_h
#error "VolumeCache.generated.h already included, missing '#pragma once' in VolumeCache.h"
#endif
#define NIAGARA_VolumeCache_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVolumeCache *************************************************************
struct Z_Construct_UClass_UVolumeCache_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UVolumeCache_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeCache(); \
	friend struct ::Z_Construct_UClass_UVolumeCache_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UVolumeCache_NoRegister(); \
public: \
	DECLARE_CLASS2(UVolumeCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UVolumeCache_NoRegister) \
	DECLARE_SERIALIZER(UVolumeCache)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UVolumeCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UVolumeCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeCache); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVolumeCache(UVolumeCache&&) = delete; \
	UVolumeCache(const UVolumeCache&) = delete; \
	NIAGARA_API virtual ~UVolumeCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_21_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVolumeCache;

// ********** End Class UVolumeCache ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h

// ********** Begin Enum EVolumeCacheType **********************************************************
#define FOREACH_ENUM_EVOLUMECACHETYPE(op) \
	op(EVolumeCacheType::OpenVDB) 

enum class EVolumeCacheType : uint8;
template<> struct TIsUEnumClass<EVolumeCacheType> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<EVolumeCacheType>();
// ********** End Enum EVolumeCacheType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
