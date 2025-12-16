// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ColorCorrectRegion.h"

#ifdef COLORCORRECTREGIONS_ColorCorrectRegion_generated_h
#error "ColorCorrectRegion.generated.h already included, missing '#pragma once' in ColorCorrectRegion.h"
#endif
#define COLORCORRECTREGIONS_ColorCorrectRegion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDisplayClusterPositionalParams;

// ********** Begin Class AColorCorrectRegion ******************************************************
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


struct Z_Construct_UClass_AColorCorrectRegion_Statics;
COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectRegion_NoRegister();

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_INCLASS \
private: \
	static void StaticRegisterNativesAColorCorrectRegion(); \
	friend struct ::Z_Construct_UClass_AColorCorrectRegion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COLORCORRECTREGIONS_API UClass* ::Z_Construct_UClass_AColorCorrectRegion_NoRegister(); \
public: \
	DECLARE_CLASS2(AColorCorrectRegion, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), Z_Construct_UClass_AColorCorrectRegion_NoRegister) \
	DECLARE_SERIALIZER(AColorCorrectRegion) \
	virtual UObject* _getUObject() const override { return const_cast<AColorCorrectRegion*>(this); }


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AColorCorrectRegion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColorCorrectRegion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColorCorrectRegion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColorCorrectRegion); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AColorCorrectRegion(AColorCorrectRegion&&) = delete; \
	AColorCorrectRegion(const AColorCorrectRegion&) = delete;


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_120_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_INCLASS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AColorCorrectRegion;

// ********** End Class AColorCorrectRegion ********************************************************

// ********** Begin Class AColorCorrectionRegion ***************************************************
struct Z_Construct_UClass_AColorCorrectionRegion_Statics;
COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_AColorCorrectionRegion_NoRegister();

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_411_INCLASS \
private: \
	static void StaticRegisterNativesAColorCorrectionRegion(); \
	friend struct ::Z_Construct_UClass_AColorCorrectionRegion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COLORCORRECTREGIONS_API UClass* ::Z_Construct_UClass_AColorCorrectionRegion_NoRegister(); \
public: \
	DECLARE_CLASS2(AColorCorrectionRegion, AColorCorrectRegion, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), Z_Construct_UClass_AColorCorrectionRegion_NoRegister) \
	DECLARE_SERIALIZER(AColorCorrectionRegion)


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_411_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AColorCorrectionRegion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColorCorrectionRegion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColorCorrectionRegion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColorCorrectionRegion); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AColorCorrectionRegion(AColorCorrectionRegion&&) = delete; \
	AColorCorrectionRegion(const AColorCorrectionRegion&) = delete; \
	NO_API virtual ~AColorCorrectionRegion();


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_408_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_411_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_411_INCLASS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_411_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AColorCorrectionRegion;

// ********** End Class AColorCorrectionRegion *****************************************************

// ********** Begin Class UColorCorrectionInvisibleComponent ***************************************
struct Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics;
COLORCORRECTREGIONS_API UClass* Z_Construct_UClass_UColorCorrectionInvisibleComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_440_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorCorrectionInvisibleComponent(); \
	friend struct ::Z_Construct_UClass_UColorCorrectionInvisibleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COLORCORRECTREGIONS_API UClass* ::Z_Construct_UClass_UColorCorrectionInvisibleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UColorCorrectionInvisibleComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ColorCorrectRegions"), Z_Construct_UClass_UColorCorrectionInvisibleComponent_NoRegister) \
	DECLARE_SERIALIZER(UColorCorrectionInvisibleComponent)


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_440_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorCorrectionInvisibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UColorCorrectionInvisibleComponent(UColorCorrectionInvisibleComponent&&) = delete; \
	UColorCorrectionInvisibleComponent(const UColorCorrectionInvisibleComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorCorrectionInvisibleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorCorrectionInvisibleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorCorrectionInvisibleComponent) \
	NO_API virtual ~UColorCorrectionInvisibleComponent();


#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_437_PROLOG
#define FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_440_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_440_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h_440_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UColorCorrectionInvisibleComponent;

// ********** End Class UColorCorrectionInvisibleComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ColorCorrectRegions_Source_ColorCorrectRegions_Public_ColorCorrectRegion_h

// ********** Begin Enum EColorCorrectRegionsType **************************************************
#define FOREACH_ENUM_ECOLORCORRECTREGIONSTYPE(op) \
	op(EColorCorrectRegionsType::Sphere) \
	op(EColorCorrectRegionsType::Box) \
	op(EColorCorrectRegionsType::Cylinder) \
	op(EColorCorrectRegionsType::Cone) 

enum class EColorCorrectRegionsType : uint8;
template<> struct TIsUEnumClass<EColorCorrectRegionsType> { enum { Value = true }; };
template<> COLORCORRECTREGIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorCorrectRegionsType>();
// ********** End Enum EColorCorrectRegionsType ****************************************************

// ********** Begin Enum EColorCorrectWindowType ***************************************************
#define FOREACH_ENUM_ECOLORCORRECTWINDOWTYPE(op) \
	op(EColorCorrectWindowType::Square) \
	op(EColorCorrectWindowType::Circle) 

enum class EColorCorrectWindowType : uint8;
template<> struct TIsUEnumClass<EColorCorrectWindowType> { enum { Value = true }; };
template<> COLORCORRECTREGIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorCorrectWindowType>();
// ********** End Enum EColorCorrectWindowType *****************************************************

// ********** Begin Enum EColorCorrectRegionTemperatureType ****************************************
#define FOREACH_ENUM_ECOLORCORRECTREGIONTEMPERATURETYPE(op) \
	op(EColorCorrectRegionTemperatureType::LegacyTemperature) \
	op(EColorCorrectRegionTemperatureType::WhiteBalance) \
	op(EColorCorrectRegionTemperatureType::ColorTemperature) 

enum class EColorCorrectRegionTemperatureType : uint8;
template<> struct TIsUEnumClass<EColorCorrectRegionTemperatureType> { enum { Value = true }; };
template<> COLORCORRECTREGIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorCorrectRegionTemperatureType>();
// ********** End Enum EColorCorrectRegionTemperatureType ******************************************

// ********** Begin Enum EColorCorrectRegionStencilType ********************************************
#define FOREACH_ENUM_ECOLORCORRECTREGIONSTENCILTYPE(op) \
	op(EColorCorrectRegionStencilType::ExcludeStencil) \
	op(EColorCorrectRegionStencilType::IncludeStencil) 

enum class EColorCorrectRegionStencilType : uint8;
template<> struct TIsUEnumClass<EColorCorrectRegionStencilType> { enum { Value = true }; };
template<> COLORCORRECTREGIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<EColorCorrectRegionStencilType>();
// ********** End Enum EColorCorrectRegionStencilType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
