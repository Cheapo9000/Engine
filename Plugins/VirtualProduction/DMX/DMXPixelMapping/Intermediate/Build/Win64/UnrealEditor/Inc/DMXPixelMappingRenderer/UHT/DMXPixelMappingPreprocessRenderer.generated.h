// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXPixelMappingPreprocessRenderer.h"

#ifdef DMXPIXELMAPPINGRENDERER_DMXPixelMappingPreprocessRenderer_generated_h
#error "DMXPixelMappingPreprocessRenderer.generated.h already included, missing '#pragma once' in DMXPixelMappingPreprocessRenderer.h"
#endif
#define DMXPIXELMAPPINGRENDERER_DMXPixelMappingPreprocessRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXPixelMappingPreprocessRenderer ***************************************
struct Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics;
DMXPIXELMAPPINGRENDERER_API UClass* Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingPreprocessRenderer(); \
	friend struct ::Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXPIXELMAPPINGRENDERER_API UClass* ::Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXPixelMappingPreprocessRenderer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRenderer"), Z_Construct_UClass_UDMXPixelMappingPreprocessRenderer_NoRegister) \
	DECLARE_SERIALIZER(UDMXPixelMappingPreprocessRenderer)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXPixelMappingPreprocessRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXPixelMappingPreprocessRenderer(UDMXPixelMappingPreprocessRenderer&&) = delete; \
	UDMXPixelMappingPreprocessRenderer(const UDMXPixelMappingPreprocessRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingPreprocessRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingPreprocessRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXPixelMappingPreprocessRenderer) \
	NO_API virtual ~UDMXPixelMappingPreprocessRenderer();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_60_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXPixelMappingPreprocessRenderer;

// ********** End Class UDMXPixelMappingPreprocessRenderer *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRenderer_Public_DMXPixelMappingPreprocessRenderer_h

// ********** Begin Enum EDMXPixelMappingRenderingPreprocessorSizeMode *****************************
#define FOREACH_ENUM_EDMXPIXELMAPPINGRENDERINGPREPROCESSORSIZEMODE(op) \
	op(EDMXPixelMappingRenderingPreprocessorSizeMode::SameAsInput) \
	op(EDMXPixelMappingRenderingPreprocessorSizeMode::Downsampled) \
	op(EDMXPixelMappingRenderingPreprocessorSizeMode::CustomSize) 

enum class EDMXPixelMappingRenderingPreprocessorSizeMode : uint8;
template<> struct TIsUEnumClass<EDMXPixelMappingRenderingPreprocessorSizeMode> { enum { Value = true }; };
template<> DMXPIXELMAPPINGRENDERER_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXPixelMappingRenderingPreprocessorSizeMode>();
// ********** End Enum EDMXPixelMappingRenderingPreprocessorSizeMode *******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
