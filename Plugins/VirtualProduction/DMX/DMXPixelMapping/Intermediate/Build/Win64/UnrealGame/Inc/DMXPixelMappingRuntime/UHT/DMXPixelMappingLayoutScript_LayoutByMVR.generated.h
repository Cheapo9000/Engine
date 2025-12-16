// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LayoutScripts/DMXPixelMappingLayoutScript_LayoutByMVR.h"

#ifdef DMXPIXELMAPPINGRUNTIME_DMXPixelMappingLayoutScript_LayoutByMVR_generated_h
#error "DMXPixelMappingLayoutScript_LayoutByMVR.generated.h already included, missing '#pragma once' in DMXPixelMappingLayoutScript_LayoutByMVR.h"
#endif
#define DMXPIXELMAPPINGRUNTIME_DMXPixelMappingLayoutScript_LayoutByMVR_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXPixelMappingLayoutScript_LayoutByMVR *********************************
struct Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics;
DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingLayoutScript_LayoutByMVR(); \
	friend struct ::Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPIXELMAPPINGRUNTIME_API UClass* ::Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXPixelMappingLayoutScript_LayoutByMVR, UDMXPixelMappingLayoutScript, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRuntime"), Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_NoRegister) \
	DECLARE_SERIALIZER(UDMXPixelMappingLayoutScript_LayoutByMVR)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXPixelMappingLayoutScript_LayoutByMVR(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXPixelMappingLayoutScript_LayoutByMVR(UDMXPixelMappingLayoutScript_LayoutByMVR&&) = delete; \
	UDMXPixelMappingLayoutScript_LayoutByMVR(const UDMXPixelMappingLayoutScript_LayoutByMVR&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingLayoutScript_LayoutByMVR); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingLayoutScript_LayoutByMVR); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXPixelMappingLayoutScript_LayoutByMVR) \
	NO_API virtual ~UDMXPixelMappingLayoutScript_LayoutByMVR();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXPixelMappingLayoutScript_LayoutByMVR;

// ********** End Class UDMXPixelMappingLayoutScript_LayoutByMVR ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h

// ********** Begin Enum EDMXPixelMappingMVRProjectionPlane ****************************************
#define FOREACH_ENUM_EDMXPIXELMAPPINGMVRPROJECTIONPLANE(op) \
	op(EDMXPixelMappingMVRProjectionPlane::XY) \
	op(EDMXPixelMappingMVRProjectionPlane::XZ) \
	op(EDMXPixelMappingMVRProjectionPlane::YZ) \
	op(EDMXPixelMappingMVRProjectionPlane::YX) \
	op(EDMXPixelMappingMVRProjectionPlane::ZX) \
	op(EDMXPixelMappingMVRProjectionPlane::ZY) 

enum class EDMXPixelMappingMVRProjectionPlane : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingMVRProjectionPlane> { enum { Value = true }; };
template<> DMXPIXELMAPPINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelMappingMVRProjectionPlane>();
// ********** End Enum EDMXPixelMappingMVRProjectionPlane ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
