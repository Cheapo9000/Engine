// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h"

#ifdef DMXPIXELMAPPINGRUNTIME_DMXPixelMappingColorSpace_RGBCMY_generated_h
#error "DMXPixelMappingColorSpace_RGBCMY.generated.h already included, missing '#pragma once' in DMXPixelMappingColorSpace_RGBCMY.h"
#endif
#define DMXPIXELMAPPINGRUNTIME_DMXPixelMappingColorSpace_RGBCMY_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXPixelMappingColorSpace_RGBCMY ****************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXPixelMappingColorSpace_RGBCMY, NO_API)


struct Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics;
DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingColorSpace_RGBCMY(); \
	friend struct ::Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPIXELMAPPINGRUNTIME_API UClass* ::Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXPixelMappingColorSpace_RGBCMY, UDMXPixelMappingColorSpace, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRuntime"), Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_NoRegister) \
	DECLARE_SERIALIZER(UDMXPixelMappingColorSpace_RGBCMY) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_46_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXPixelMappingColorSpace_RGBCMY(UDMXPixelMappingColorSpace_RGBCMY&&) = delete; \
	UDMXPixelMappingColorSpace_RGBCMY(const UDMXPixelMappingColorSpace_RGBCMY&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingColorSpace_RGBCMY); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingColorSpace_RGBCMY); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXPixelMappingColorSpace_RGBCMY) \
	NO_API virtual ~UDMXPixelMappingColorSpace_RGBCMY();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_42_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXPixelMappingColorSpace_RGBCMY;

// ********** End Class UDMXPixelMappingColorSpace_RGBCMY ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Internal_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h

// ********** Begin Enum EDMXPixelMappingOutputColorSpace_RGBCMY ***********************************
#define FOREACH_ENUM_EDMXPIXELMAPPINGOUTPUTCOLORSPACE_RGBCMY(op) \
	op(EDMXPixelMappingOutputColorSpace_RGBCMY::sRGB) \
	op(EDMXPixelMappingOutputColorSpace_RGBCMY::Rec2020) \
	op(EDMXPixelMappingOutputColorSpace_RGBCMY::P3DCI) \
	op(EDMXPixelMappingOutputColorSpace_RGBCMY::P3D65) \
	op(EDMXPixelMappingOutputColorSpace_RGBCMY::Plasa) 

enum class EDMXPixelMappingOutputColorSpace_RGBCMY : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingOutputColorSpace_RGBCMY> { enum { Value = true }; };
template<> DMXPIXELMAPPINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelMappingOutputColorSpace_RGBCMY>();
// ********** End Enum EDMXPixelMappingOutputColorSpace_RGBCMY *************************************

// ********** Begin Enum EDMXPixelMappingGamma_RGBCMY **********************************************
#define FOREACH_ENUM_EDMXPIXELMAPPINGGAMMA_RGBCMY(op) \
	op(EDMXPixelMappingGamma_RGBCMY::Linear) \
	op(EDMXPixelMappingGamma_RGBCMY::AsOutputColorSpace) \
	op(EDMXPixelMappingGamma_RGBCMY::Custom) 

enum class EDMXPixelMappingGamma_RGBCMY : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingGamma_RGBCMY> { enum { Value = true }; };
template<> DMXPIXELMAPPINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelMappingGamma_RGBCMY>();
// ********** End Enum EDMXPixelMappingGamma_RGBCMY ************************************************

// ********** Begin Enum EDMXPixelMappingLuminanceType_RGBCMY **************************************
#define FOREACH_ENUM_EDMXPIXELMAPPINGLUMINANCETYPE_RGBCMY(op) \
	op(EDMXPixelMappingLuminanceType_RGBCMY::FromColor) \
	op(EDMXPixelMappingLuminanceType_RGBCMY::Constant) \
	op(EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha) \
	op(EDMXPixelMappingLuminanceType_RGBCMY::None) 

enum class EDMXPixelMappingLuminanceType_RGBCMY : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingLuminanceType_RGBCMY> { enum { Value = true }; };
template<> DMXPIXELMAPPINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelMappingLuminanceType_RGBCMY>();
// ********** End Enum EDMXPixelMappingLuminanceType_RGBCMY ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
