// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMXPixelMappingRendererComponent.h"

#ifdef DMXPIXELMAPPINGRUNTIME_DMXPixelMappingRendererComponent_generated_h
#error "DMXPixelMappingRendererComponent.generated.h already included, missing '#pragma once' in DMXPixelMappingRendererComponent.h"
#endif
#define DMXPIXELMAPPINGRUNTIME_DMXPixelMappingRendererComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXModulator;
struct FDMXEntityFixturePatchRef;

// ********** Begin Class UDMXPixelMappingRendererComponent ****************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPixelMappingComponentModulators);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXPixelMappingRendererComponent, NO_API)


struct Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics;
DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingRendererComponent(); \
	friend struct ::Z_Construct_UClass_UDMXPixelMappingRendererComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPIXELMAPPINGRUNTIME_API UClass* ::Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXPixelMappingRendererComponent, UDMXPixelMappingOutputComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRuntime"), Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister) \
	DECLARE_SERIALIZER(UDMXPixelMappingRendererComponent) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXPixelMappingRendererComponent(UDMXPixelMappingRendererComponent&&) = delete; \
	UDMXPixelMappingRendererComponent(const UDMXPixelMappingRendererComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingRendererComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingRendererComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXPixelMappingRendererComponent) \
	NO_API virtual ~UDMXPixelMappingRendererComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_37_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXPixelMappingRendererComponent;

// ********** End Class UDMXPixelMappingRendererComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingRendererComponent_h

// ********** Begin Enum EDMXPixelMappingRendererPixelFormat ***************************************
#define FOREACH_ENUM_EDMXPIXELMAPPINGRENDERERPIXELFORMAT(op) \
	op(EDMXPixelMappingRendererPixelFormat::Auto) \
	op(EDMXPixelMappingRendererPixelFormat::RGBA8) \
	op(EDMXPixelMappingRendererPixelFormat::RGBA16F) 

enum class EDMXPixelMappingRendererPixelFormat : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingRendererPixelFormat> { enum { Value = true }; };
template<> DMXPIXELMAPPINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelMappingRendererPixelFormat>();
// ********** End Enum EDMXPixelMappingRendererPixelFormat *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
