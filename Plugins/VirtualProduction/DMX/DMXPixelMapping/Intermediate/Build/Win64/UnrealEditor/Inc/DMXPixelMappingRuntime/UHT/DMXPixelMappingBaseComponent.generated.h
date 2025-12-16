// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMXPixelMappingBaseComponent.h"

#ifdef DMXPIXELMAPPINGRUNTIME_DMXPixelMappingBaseComponent_generated_h
#error "DMXPixelMappingBaseComponent.generated.h already included, missing '#pragma once' in DMXPixelMappingBaseComponent.h"
#endif
#define DMXPIXELMAPPINGRUNTIME_DMXPixelMappingBaseComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDMXPixelMappingResetDMXMode : uint8;

// ********** Begin Class UDMXPixelMappingBaseComponent ********************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRenderAndSendDMX); \
	DECLARE_FUNCTION(execRender); \
	DECLARE_FUNCTION(execSendDMX); \
	DECLARE_FUNCTION(execResetDMX);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXPixelMappingBaseComponent, NO_API)


struct Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics;
DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingBaseComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingBaseComponent(); \
	friend struct ::Z_Construct_UClass_UDMXPixelMappingBaseComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPIXELMAPPINGRUNTIME_API UClass* ::Z_Construct_UClass_UDMXPixelMappingBaseComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXPixelMappingBaseComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRuntime"), Z_Construct_UClass_UDMXPixelMappingBaseComponent_NoRegister) \
	DECLARE_SERIALIZER(UDMXPixelMappingBaseComponent) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXPixelMappingBaseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXPixelMappingBaseComponent(UDMXPixelMappingBaseComponent&&) = delete; \
	UDMXPixelMappingBaseComponent(const UDMXPixelMappingBaseComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingBaseComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXPixelMappingBaseComponent) \
	NO_API virtual ~UDMXPixelMappingBaseComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_29_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXPixelMappingBaseComponent;

// ********** End Class UDMXPixelMappingBaseComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingBaseComponent_h

// ********** Begin Enum EDMXPixelMappingResetDMXMode **********************************************
#define FOREACH_ENUM_EDMXPIXELMAPPINGRESETDMXMODE(op) \
	op(EDMXPixelMappingResetDMXMode::SendDefaultValues) \
	op(EDMXPixelMappingResetDMXMode::SendZeroValues) \
	op(EDMXPixelMappingResetDMXMode::DoNotSendValues) 

enum class EDMXPixelMappingResetDMXMode : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingResetDMXMode> { enum { Value = true }; };
template<> DMXPIXELMAPPINGRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelMappingResetDMXMode>();
// ********** End Enum EDMXPixelMappingResetDMXMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
