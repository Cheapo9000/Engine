// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ColorCorrectRegion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDisplayClusterPositionalParams;
#ifdef COLORCORRECTREGIONS_ColorCorrectRegion_generated_h
#error "ColorCorrectRegion.generated.h already included, missing '#pragma once' in ColorCorrectRegion.h"
#endif
#define COLORCORRECTREGIONS_ColorCorrectRegion_generated_h

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPositionalParams); \
	DECLARE_FUNCTION(execSetPositionalParams); \
	DECLARE_FUNCTION(execGetOrigin); \
	DECLARE_FUNCTION(execSetOrigin); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execSetScale); \
	DECLARE_FUNCTION(execGetRadialOffset); \
	DECLARE_FUNCTION(execSetRadialOffset); \
	DECLARE_FUNCTION(execGetYaw); \
	DECLARE_FUNCTION(execSetYaw); \
	DECLARE_FUNCTION(execGetPitch); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execGetSpin); \
	DECLARE_FUNCTION(execSetSpin); \
	DECLARE_FUNCTION(execGetDistanceFromCenter); \
	DECLARE_FUNCTION(execSetDistanceFromCenter); \
	DECLARE_FUNCTION(execGetLatitude); \
	DECLARE_FUNCTION(execSetLatitude); \
	DECLARE_FUNCTION(execGetLongitude); \
	DECLARE_FUNCTION(execSetLongitude);


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_INCLASS \
private: \
	static void StaticRegisterNativesAColorCorrectRegion(); \
	friend struct Z_Construct_UClass_AColorCorrectRegion_Statics; \
public: \
	DECLARE_CLASS(AColorCorrectRegion, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), NO_API) \
	DECLARE_SERIALIZER(AColorCorrectRegion) \
	virtual UObject* _getUObject() const override { return const_cast<AColorCorrectRegion*>(this); }


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AColorCorrectRegion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColorCorrectRegion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColorCorrectRegion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColorCorrectRegion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AColorCorrectRegion(AColorCorrectRegion&&); \
	AColorCorrectRegion(const AColorCorrectRegion&); \
public:


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_120_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_INCLASS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLORCORRECTREGIONS_API UClass* StaticClass<class AColorCorrectRegion>();

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_409_INCLASS \
private: \
	static void StaticRegisterNativesAColorCorrectionRegion(); \
	friend struct Z_Construct_UClass_AColorCorrectionRegion_Statics; \
public: \
	DECLARE_CLASS(AColorCorrectionRegion, AColorCorrectRegion, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), NO_API) \
	DECLARE_SERIALIZER(AColorCorrectionRegion)


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_409_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AColorCorrectionRegion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColorCorrectionRegion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColorCorrectionRegion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColorCorrectionRegion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AColorCorrectionRegion(AColorCorrectionRegion&&); \
	AColorCorrectionRegion(const AColorCorrectionRegion&); \
public: \
	NO_API virtual ~AColorCorrectionRegion();


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_406_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_409_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_409_INCLASS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_409_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLORCORRECTREGIONS_API UClass* StaticClass<class AColorCorrectionRegion>();

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_438_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorCorrectionInvisibleComponent(); \
	friend struct Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics; \
public: \
	DECLARE_CLASS(UColorCorrectionInvisibleComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), NO_API) \
	DECLARE_SERIALIZER(UColorCorrectionInvisibleComponent)


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_438_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorCorrectionInvisibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UColorCorrectionInvisibleComponent(UColorCorrectionInvisibleComponent&&); \
	UColorCorrectionInvisibleComponent(const UColorCorrectionInvisibleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorCorrectionInvisibleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorCorrectionInvisibleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorCorrectionInvisibleComponent) \
	NO_API virtual ~UColorCorrectionInvisibleComponent();


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_435_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_438_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_438_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_438_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLORCORRECTREGIONS_API UClass* StaticClass<class UColorCorrectionInvisibleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h


#define FOREACH_ENUM_ECOLORCORRECTREGIONSTYPE(op) \
	op(EColorCorrectRegionsType::Sphere) \
	op(EColorCorrectRegionsType::Box) \
	op(EColorCorrectRegionsType::Cylinder) \
	op(EColorCorrectRegionsType::Cone) 

enum class EColorCorrectRegionsType : uint8;
template<> struct TIsUEnumClass<EColorCorrectRegionsType> { enum { Value = true }; };
template<> COLORCORRECTREGIONS_API UEnum* StaticEnum<EColorCorrectRegionsType>();

#define FOREACH_ENUM_ECOLORCORRECTWINDOWTYPE(op) \
	op(EColorCorrectWindowType::Square) \
	op(EColorCorrectWindowType::Circle) 

enum class EColorCorrectWindowType : uint8;
template<> struct TIsUEnumClass<EColorCorrectWindowType> { enum { Value = true }; };
template<> COLORCORRECTREGIONS_API UEnum* StaticEnum<EColorCorrectWindowType>();

#define FOREACH_ENUM_ECOLORCORRECTREGIONTEMPERATURETYPE(op) \
	op(EColorCorrectRegionTemperatureType::LegacyTemperature) \
	op(EColorCorrectRegionTemperatureType::WhiteBalance) \
	op(EColorCorrectRegionTemperatureType::ColorTemperature) 

enum class EColorCorrectRegionTemperatureType : uint8;
template<> struct TIsUEnumClass<EColorCorrectRegionTemperatureType> { enum { Value = true }; };
template<> COLORCORRECTREGIONS_API UEnum* StaticEnum<EColorCorrectRegionTemperatureType>();

#define FOREACH_ENUM_ECOLORCORRECTREGIONSTENCILTYPE(op) \
	op(EColorCorrectRegionStencilType::ExcludeStencil) \
	op(EColorCorrectRegionStencilType::IncludeStencil) 

enum class EColorCorrectRegionStencilType : uint8;
template<> struct TIsUEnumClass<EColorCorrectRegionStencilType> { enum { Value = true }; };
template<> COLORCORRECTREGIONS_API UEnum* StaticEnum<EColorCorrectRegionStencilType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
