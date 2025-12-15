// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeLayerInfoObject.h"

#ifdef LANDSCAPE_LandscapeLayerInfoObject_generated_h
#error "LandscapeLayerInfoObject.generated.h already included, missing '#pragma once' in LandscapeLayerInfoObject.h"
#endif
#define LANDSCAPE_LandscapeLayerInfoObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeLayerInfoObject ************************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_61_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeLayerInfoObject, LANDSCAPE_API)


struct Z_Construct_UClass_ULandscapeLayerInfoObject_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_61_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeLayerInfoObject(); \
	friend struct ::Z_Construct_UClass_ULandscapeLayerInfoObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeLayerInfoObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeLayerInfoObject) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_61_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeLayerInfoObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeLayerInfoObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeLayerInfoObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeLayerInfoObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeLayerInfoObject(ULandscapeLayerInfoObject&&) = delete; \
	ULandscapeLayerInfoObject(const ULandscapeLayerInfoObject&) = delete; \
	LANDSCAPE_API virtual ~ULandscapeLayerInfoObject();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_58_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_61_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeLayerInfoObject;

// ********** End Class ULandscapeLayerInfoObject **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h

// ********** Begin Enum ESplineModulationColorMask ************************************************
#define FOREACH_ENUM_ESPLINEMODULATIONCOLORMASK(op) \
	op(ESplineModulationColorMask::Red) \
	op(ESplineModulationColorMask::Green) \
	op(ESplineModulationColorMask::Blue) \
	op(ESplineModulationColorMask::Alpha) 

enum class ESplineModulationColorMask : uint8;
template<> struct TIsUEnumClass<ESplineModulationColorMask> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESplineModulationColorMask>();
// ********** End Enum ESplineModulationColorMask **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
